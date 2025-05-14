function Bu = BVP_Bu_Construc(mem_deriv_propag_low , mem_bvp , tacr_load , tacr_construc , tacr_act)


% ======================================================================= %
% ======================================================================= %
%
% This function computes manually the optimization Jacobian using the 
% associated Low-Level derivatives
%
% ====================
% ====== INPUTS ====== 
%
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
% mem_bvp               : (class)           Memory of the BVP variables 
% tacr_load             : (class)           Robot loads
% tacr_construc         : (class)           Robot features related to the model settings
% tacr_act              : (class)           Robot actuation
%
% ====================
% ===== OUTPUTS ====== 
%
% Bu                    : (6 x 6)           Optimization Jacobian
%
% ======================================================================= %
% ======================================================================= %


% ======================================================================= %
% ============= Organization of the partial dervatives of b ============= %
%       ____   
%      ⎡    ⎤  1
%      ⎪ b1 ⎥
%      ⎪____⎥  3
%  b = ⎪____⎥ 
%      ⎪    ⎥  4
%      ⎪ b2 ⎥
%      ⎣____⎦  6
%
% ======================================================================= %
% ======================================================================= %

    

    nbP     = tacr_construc.nbP ;

    % Initialization
    Bu      = zeros(6,6) ;


    for j = 1:3
            
        sum_dfi_dm0j        = zeros(3,1) ;
        sum_dhat_ri_fi_dm0j = zeros(3,1) ;
        sum_dfi_dn0j        = zeros(3,1) ;
        sum_dhat_ri_fi_dn0j = zeros(3,1) ;

    
        vectT = find(nbP == tacr_construc.vect_ind_iT(:,1)) ;
    
        for i = 1 : length(vectT)
            iT = vectT(i) ;
    
            % ====================
            % ==== Preliminary computations for derivatives wrt m0(0)

            dpi                 = mem_bvp.mem_dpi_ds(:,iT,nbP) ;
            ddpi                = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dm0_ds(:,iT,j,nbP) ;
            N                   = dpi ;
            dN                  = ddpi ;
            D                   = norm(dpi) ;
            dD                  = (1/2)*(ddpi'*dpi + dpi'*ddpi)/(norm(dpi)^3) ;
            dfi_dm0j            = - tacr_act.ti(iT) * (dN*D - N*dD) / (D^2) ;
            sum_dfi_dm0j        = sum_dfi_dm0j + dfi_dm0j ;
            sum_dhat_ri_fi_dm0j = sum_dhat_ri_fi_dm0j + hat(tacr_construc.mem_ri(:,iT,nbP)) * dfi_dm0j ;

            
            % ====================
            % ==== Preliminary computations for derivatives wrt n0(0)

            dpi                 = mem_bvp.mem_dpi_ds(:,iT,nbP) ;
            ddpi                = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds(:,iT,j,nbP) ;
            N                   = dpi ;
            dN                  = ddpi ;
            D                   = norm(dpi) ;
            dD                  = (1/2)*(ddpi'*dpi + dpi'*ddpi)/(norm(dpi)^3) ;
            dfi_dn0j            = - tacr_act.ti(iT) * (dN*D - N*dD) / (D^2) ;
            sum_dfi_dn0j        = sum_dfi_dn0j + dfi_dn0j ;
            sum_dhat_ri_fi_dn0j = sum_dhat_ri_fi_dn0j + hat(tacr_construc.mem_ri(:,iT,nbP)) * dfi_dn0j ;

        end

    
        % ========
        % ==== db1_dm0(0)

        Bu(1:3,j)       = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0(:,j,end) ...
                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,end)'*tacr_load.tau_tip' ...
                          - sum_dhat_ri_fi_dm0j ;
    
        % ========
        % ==== db1_dn0(0)

        Bu(1:3,j+3)     = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0(:,j,end) ...
                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,end)'*tacr_load.tau_tip' ...
                          - sum_dhat_ri_fi_dn0j ;

        % ========
        % ==== db2_dm0(0)

        Bu(4:6,j)       = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0(:,j,end) ...
                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,end)'*tacr_load.f_tip' ...
                          - sum_dfi_dm0j ;
              
        % ========
        % ==== db2_dn0(0)

        Bu(4:6,j+3)     = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0(:,j,end) ...
                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,end)'*tacr_load.f_tip' ...
                          - sum_dfi_dn0j ;


    end

end