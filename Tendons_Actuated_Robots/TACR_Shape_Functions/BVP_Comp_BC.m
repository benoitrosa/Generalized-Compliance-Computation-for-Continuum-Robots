function bvp_prop = BVP_Comp_BC( ...
            mem_bvp , bvp_prop , tacr_load, tacr_construc , tacr_act)


% ======================================================================= %
% ======================================================================= %
%
% This function is used to compute the boundary condition (= the residual b)
% Equation n°29
%
% ====================
% ====== INPUTS ====== 
%
% mem_bvp          : (class) Memory of the BVP variables 
% bvp_prop         : (class) Results of the BVP resolution
% tacr_load        : (class) Robot loads
% tacr_construc    : (class) Robot features related to the model settings
% tacr_act         : (class) Robot actuation
%
% ====================
% ===== OUTPUTS ====== 
%
% bvp_prop         : (class) Results of the BVP resolution
%
% ======================================================================= %
% ======================================================================= %

    
    

    % =================
    % ==== Computed boundaries conditions  

    m0_tip  = mem_bvp.mem_m0(:,end) ;
    n0_tip  = mem_bvp.mem_n0(:,end) ;

    comp_CL = [m0_tip ; n0_tip] ;



    % =================
    % ==== Expected boundaries conditions  

    sum_hat_ri_fi   = zeros(3,1) ;
    sum_fi          = zeros(3,1) ;

    tau_tip         = mem_bvp.mem_y.mem_R0(:,:,end)'*tacr_load.tau_tip' ;
    f_tip           = mem_bvp.mem_y.mem_R0(:,:,end)'*tacr_load.f_tip' ;

    vectT = find(tacr_construc.nbP == tacr_construc.vect_ind_iT(:,1))  ;     

    for i = 1:length(vectT)
        iT = vectT(i) ;

        dpi_ds          = mem_bvp.mem_dpi_ds(:,iT,end) ;
        fi              = - tacr_act.ti(iT) * dpi_ds/norm(dpi_ds) ;
        sum_fi          = sum_fi + fi ;
        sum_hat_ri_fi   = sum_hat_ri_fi + hat(tacr_construc.mem_ri(:,iT,tacr_construc.nbP)) * fi ;

    end

    expect_CL = [tau_tip + sum_hat_ri_fi ; f_tip + sum_fi] ;


    % ================ Boudary conditions comparaison ================= %
    bvp_prop.vect_tol   = comp_CL - expect_CL       ;
    bvp_prop.norm_tol   = norm(bvp_prop.vect_tol)   ;
    

end