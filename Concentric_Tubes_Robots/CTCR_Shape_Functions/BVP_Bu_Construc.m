function Bu ...
    = BVP_Bu_Construc(...
    mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_load)


% ======================================================================= %
% ======================================================================= %
%
% This function computes manually the optimization Jacobian using the 
% associated Low-Level derivatives
%
% ====================
% ====== INPUTS ====== 
%
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
% ctcr_construc         : (class)           Robot features related to the model settings
% ctcr_carac            : (class)           Robot features
% ctcr_load             : (class)           Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% Bu                    : (nbT+6 x nbT+6)   Optimization Jacobian
%
% ======================================================================= %
% ======================================================================= %


% ======================================================================= %
% ============= Organization of the partial dervatives of b ============= %
%       ____   
%      ⎡    ⎤  1
%      ⎪ b1 ⎥
%      ⎪____⎥  nbT-1
%      ⎪____⎥ 
%      ⎪    ⎥  nbT
%      ⎪ b2 ⎥
%      ⎪____⎥  nbT
%  b = ⎪____⎥
%      ⎪    ⎥  nbT+1
%      ⎪ b3 ⎥
%      ⎪____⎥  nbT+3
%      ⎪____⎥
%      ⎪    ⎥  nbT+4
%      ⎪ b4 ⎥
%      ⎣____⎦  nbT+6
%
% ======================================================================= %
% ======================================================================= %




    % ========================================================== %
    % ================== Getting input values ================== %

    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    
    nbT             = ctcr_carac.nbT ;
    
    tau_tip         = ctcr_load.tau_tip ;
    f_tip           = ctcr_load.f_tip ;

    % ========================================================== %
    % ========================================================== %
    

    % Initialization
    Bu = zeros(nbT+6,nbT+6) ;


    % ========
    % ==== db1_duz(0)

    for i = 1:nbT-1
        Bu(i,1:nbT) = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,vect_ind_iT(i,3)) ;
    end

    % ========
    % ==== db1_dm(0)

    for i = 1:nbT-1
        Bu(i,nbT+1:nbT+3) = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,vect_ind_iT(i,3)) ;
    end

    % ========
    % ==== db1_dn(0)

    for i = 1:nbT-1
        Bu(i,nbT+4:nbT+6) = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,vect_ind_iT(i,3)) ;
    end

    % ========
    % ==== db2_duz(0)

    for j = 1:nbT
        Bu(nbT,j) = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(nbT,j,vect_ind_iT(nbT,3)) ...
                    - [0,0,1]/K(3,3,nbT)*dB0nbTRs_duzj0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0,mem_deriv_propag_low.mem_dti.mem_dti_duzj0)'*tau_tip'  ;
    end

    % ========
    % ==== db2_dm(0)

    for j = 1:3
        Bu(nbT,nbT+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dm0j0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0,mem_deriv_propag_low.mem_dti.mem_dti_dm0j0)'*tau_tip'  ;
    end
    
    % ========
    % ==== db2_dn(0)

    for j = 1:3
        Bu(nbT,nbT+3+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(nbT,j,vect_ind_iT(nbT,3)) ...
                          - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dn0j0(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0,mem_deriv_propag_low.mem_dti.mem_dti_dn0j0)'*tau_tip'  ;
    end

    % ========
    % ==== db3_duz(0)

    for j = 1:nbT
        Bu(nbT+1:nbT+3,j) = mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,vect_ind_iT(nbT,3)) ...
                            - mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    end

    % ========
    % ==== db3_dm(0)

    for j = 1:3
        Bu(nbT+1:nbT+3,nbT+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    end

    % ========
    % ==== db3_dn(0)

    for j = 1:3
        Bu(nbT+1:nbT+3,nbT+3+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,vect_ind_iT(nbT,3)) ...
                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,vect_ind_iT(nbT,3))'*tau_tip' ;
    end

    % ========
    % ==== db4_duz(0)

    for j = 1:nbT
        Bu(nbT+4:nbT+6,j) = mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,vect_ind_iT(nbT,3)) ...
                            - mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    end

    % ========
    % ==== db4_dm(0)
    
    for j = 1:3
        Bu(nbT+4:nbT+6,nbT+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    end

    % ========
    % ==== db4_dn(0)

    for j = 1:3
        Bu(nbT+4:nbT+6,nbT+3+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,vect_ind_iT(nbT,3)) ...
                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,vect_ind_iT(nbT,3))'*f_tip' ;
    end
    



end