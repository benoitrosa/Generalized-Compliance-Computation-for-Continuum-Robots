function Bu ...
    = BVP_Bu_Construc(...
    mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load)

% EXPLAIN THE FUNCTIONS
%
%
%
%
% 





    % ========================================================== %
    % ================== Getting input values ================== %

    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    
    nbT             = ctcr_carac.nbT ;
    
    tau_tip         = ctcr_load.tau_tip ;
    f_tip           = ctcr_load.f_tip ;

    % ========================================================== %
    % ========================================================== %
    

    % First initialisation

    Bu = zeros(nbT+6,nbT+6) ;




    % ============== Ab1uz0 ============= %
    for i = 1:nbT-1
    
        Bu(i,1:nbT) = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,vect_ind_iT(i,3)) ;

    end

    % ============== Ab1m0 ============== %
    for i = 1:nbT-1
        
        Bu(i,nbT+1:nbT+3) = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,vect_ind_iT(i,3)) ;

    end

    % ============== Ab1n0 ============== %
    for i = 1:nbT-1
        
        Bu(i,nbT+4:nbT+6) = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,vect_ind_iT(i,3)) ;

    end








    % ============== Ab2uz0 ============= %
    for j = 1:nbT
        Bu(nbT,j) = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(nbT,j,vect_ind_iT(nbT,3)) ...
                    - [0,0,1]/K(3,3,nbT)*dB0nbTRs_duzj0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0,mem_deriv_propag_low.mem_dti.mem_dti_duzj0)'*tau_tip'  ;
    end

    % ============== Ab2m0 ============== %
    for j = 1:3
        Bu(nbT,nbT+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dm0j0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0,mem_deriv_propag_low.mem_dti.mem_dti_dm0j0)'*tau_tip'  ;
    end
    
    % ============== Ab2n0 ============== %
    for j = 1:3
        Bu(nbT,nbT+3+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(nbT,j,vect_ind_iT(nbT,3)) ...
                          - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dn0j0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0,mem_deriv_propag_low.mem_dti.mem_dti_dn0j0)'*tau_tip'  ;
    end







    % ============== Ab3uz0 ============= %
    for j = 1:nbT

        Bu(nbT+1:nbT+3,j) = mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,vect_ind_iT(nbT,3)) ...
                            - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    
    end

    % ============== Ab3m0 ============== %
    for j = 1:3

        Bu(nbT+1:nbT+3,nbT+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    
    end

    % ============== Ab3n0 ============== %
    for j = 1:3

        Bu(nbT+1:nbT+3,nbT+3+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,vect_ind_iT(nbT,3)) ...
                                  - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    
    end








    % ============== Ab4uz0 ============= %
    for j = 1:nbT

        Bu(nbT+4:nbT+6,j) = mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,vect_ind_iT(nbT,3)) ...
                            - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    
    end

    % ============== Ab4m0 ============== %
    for j = 1:3

        Bu(nbT+4:nbT+6,nbT+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    
    end

    % ============== Ab4n0 ============== %
    for j = 1:3

        Bu(nbT+4:nbT+6,nbT+3+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,vect_ind_iT(nbT,3)) ...
                                  - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    
    end
    



end