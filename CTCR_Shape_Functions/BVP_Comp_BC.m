function bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    nbT             = ctcr_carac.nbT ;

    % ======== Construction of the calculated boudary conditions ======== %

    % Concatenation of the uzi_end
    vect_uzi_tip = zeros(ctcr_carac.nbT,1) ;
    for iT = 1:ctcr_carac.nbT
        vect_uzi_tip(iT,1) = mem_bvp.mem_y.mem_uz(iT,vect_ind_iT(iT,3)) ;
    end

    % Construction of the calculated distal BC
    comp_CL = [vect_uzi_tip ; mem_bvp.mem_y.mem_m0(:,vect_ind_iT(nbT,3)) ; mem_bvp.mem_y.mem_n0(:,vect_ind_iT(nbT,3)) ] ;
    



    % ======== Construction of the expected boudary conditions ======== %

    % Rotation from RB0 --> Rtip
    R_tip = mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3)) ;

    % Rotation from RB0 --> Rtip
    R_tip_nbT = mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))*rotz(mem_bvp.mem_y.mem_t(nbT,vect_ind_iT(nbT,3)))' ;
    
    % Transforming R_tip expressed in RB0 to Rtip
    tau_Rtip = R_tip'*ctcr_load.tau_tip' ;
    
    % Transforming f_tip expressed in RB0 to Rtip
    f_Rtip = R_tip'*ctcr_load.f_tip' ;
    
    % Initialization
    expect_CL = zeros(ctcr_carac.nbT+6,1) ;

    % Ajout de la contrainte en traction/flexion à l'extrémité
    expect_CL(end-5: end) = [tau_Rtip ; f_Rtip] ;
    
    % Ajout de la contrainte en torsion sur le tube le plus au milieu
    % moment_force_robot(3) : Moment selon zi
    %expect_CL(end-6) = tau_Rtip(3)/ctcr_construc.K(3,3,ctcr_carac.nbT) ;
    expect_CL(end-6) = 1/ctcr_construc.K(3,3,nbT)*[0,0,1]*R_tip_nbT'*ctcr_load.tau_tip' ;




    % ================ Boudary conditions comparaison ================= %
    bvp_prop.vect_tol   = comp_CL - expect_CL       ;
    bvp_prop.norm_tol   = norm(bvp_prop.vect_tol)   ;

end