function mem_deriv_propag_high ...
         = Deriv_Propag_DBDX_Construc(...
         mem_bvp , tacr_construc , tacr_carac , ...
         tacr_load , tacr_act , bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the High-Level partial derivatives Bx
%
% ====================
% ====== INPUTS ====== 
%
% mem_bvp               : (class) Memory of the BVP variables 
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
% tacr_load             : (class) Robot loads
% bvp_prop              : (class) Results of the BVP resolution
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ======================================================================= %
% ======================================================================= %


% ======================================================================= %
% ==================== Organization of the residual b =================== %
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
    vectT   = find(nbP == tacr_construc.vect_ind_iT(:,1)) ;
    
    % ================
    % ==== db_dyu(0)

    mem_deriv_propag_high.mem_B(:,1:6) = bvp_prop.Bu ;


    if simulation_param.bool_J

        for j = 1 : tacr_carac.nbT
                
            sum_dfi_dtj             = zeros(3,1) ;
            sum_dhat_ri_fi_dtj      = zeros(3,1) ;
            
        
            for i = 1 : length(vectT)
                iT = vectT(i) ;
        
                % ====================
                % ==== Preliminary computations for derivatives wrt tj
    
                dpi                 = mem_bvp.mem_dpi_ds(:,iT,nbP) ;
                ddpi                = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dti_ds(:,iT,j,nbP) ;
                N                   = dpi ;
                dN                  = ddpi ;
                D                   = norm(dpi) ;
                dD                  = (1/2)*(ddpi'*dpi + dpi'*ddpi)/(norm(dpi)^3) ;
                dfi_dtj             = - delta_ij(iT,j) * dpi/norm(dpi) ...
                                      - tacr_act.ti(iT) * (dN*D - N*dD) / (D^2) ;
    
                sum_dfi_dtj         = sum_dfi_dtj + dfi_dtj ;
                sum_dhat_ri_fi_dtj  = sum_dhat_ri_fi_dtj + hat(tacr_construc.mem_ri(:,iT,nbP)) * dfi_dtj ;
    
            end
    
        
        
            % ========
            % ==== db1_dtj
    
            mem_deriv_propag_high.mem_B(1:3,6+j)    = mem_deriv_propag_low.mem_dm0.mem_dm0_dti(:,j,end) ...
                                                      - mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,end)'*tacr_load.tau_tip' ...
                                                      - sum_dhat_ri_fi_dtj ;
        
            % ========
            % ==== db2_dtj
    
            mem_deriv_propag_high.mem_B(4:6,6+j)    = mem_deriv_propag_low.mem_dn0.mem_dn0_dti(:,j,end) ...
                                                      - mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,end)'*tacr_load.f_tip' ...
                                                      - sum_dfi_dtj ;
                  
        end

    end

    if simulation_param.bool_Cs0

        for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
            is0 = simulation_param.pt_s0_LIT(tp_is0) ;
            
            if is0 == nbP
            
                % ========
                % ==== db1_dtaus0

                mem_deriv_propag_high.mem_Bws0(1:3,1:3,is0)         = - mem_bvp.mem_y.mem_R0(:,:,end)' ;

                % ========
                % ==== db2_dfs0
                
                mem_deriv_propag_high.mem_Bws0(4:6,4:6,is0)         = - mem_bvp.mem_y.mem_R0(:,:,end)' ;

            else

                for j = 1:3

                    sum_dfi_dtaus0j            = zeros(3,1) ;
                    sum_dhat_ri_fi_dtaus0j     = zeros(3,1) ;
                    sum_dfi_dfs0j              = zeros(3,1) ;
                    sum_dhat_ri_fi_dfs0j       = zeros(3,1) ;
                
                    for i = 1 : length(vectT)
                        iT = vectT(i) ;
                
                        % ====================
                        % ==== Preliminary computations for derivatives wrt tau(s0)
            
                        dpi                     = mem_bvp.mem_dpi_ds(:,iT,nbP) ;
                        ddpi                    = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dtaus0_ds(:,iT,j,nbP,is0) ;
                        N                       = dpi ;
                        dN                      = ddpi ;
                        D                       = norm(dpi) ;
                        dD                      = (1/2)*(ddpi'*dpi + dpi'*ddpi)/(norm(dpi)^3) ;
                        dfi_dtaus0j             = - tacr_act.ti(iT) * (dN*D - N*dD) / (D^2) ;
                        sum_dfi_dtaus0j         = sum_dfi_dtaus0j + dfi_dtaus0j ;
                        sum_dhat_ri_fi_dtaus0j  = sum_dhat_ri_fi_dtaus0j + hat(tacr_construc.mem_ri(:,iT,nbP)) * dfi_dtaus0j ;

                        % ====================
                        % ==== Preliminary computations for derivatives wrt f(s0)
            
                        dpi                     = mem_bvp.mem_dpi_ds(:,iT,nbP) ;
                        ddpi                    = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dfs0_ds(:,iT,j,nbP,is0) ;
                        N                       = dpi ;
                        dN                      = ddpi ;
                        D                       = norm(dpi) ;
                        dD                      = (1/2)*(ddpi'*dpi + dpi'*ddpi)/(norm(dpi)^3) ;
                        dfi_dfs0j               = - tacr_act.ti(iT) * (dN*D - N*dD) / (D^2) ;
                        sum_dfi_dfs0j           = sum_dfi_dfs0j + dfi_dfs0j ;
                        sum_dhat_ri_fi_dfs0j    = sum_dhat_ri_fi_dfs0j + hat(tacr_construc.mem_ri(:,iT,nbP)) * dfi_dfs0j ;
            
                    end
    

                    % ========
                    % ==== db1_dtaus0
            
                    mem_deriv_propag_high.mem_Bws0(1:3,j,is0)   = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,end,is0) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,end,is0)'*tacr_load.tau_tip' ...
                                                                  - sum_dhat_ri_fi_dtaus0j ;
                
                    % ========
                    % ==== db2_dtaus0
            
                    mem_deriv_propag_high.mem_Bws0(4:6,j,is0)   = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,end,is0) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,end,is0)'*tacr_load.f_tip' ...
                                                                  - sum_dfi_dtaus0j ;

                    % ========
                    % ==== db1_dfs0
            
                    mem_deriv_propag_high.mem_Bws0(1:3,3+j,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,end,is0) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,end,is0)'*tacr_load.tau_tip' ...
                                                                  - sum_dhat_ri_fi_dfs0j ;
                
                    % ========
                    % ==== db2_dfs0
            
                    mem_deriv_propag_high.mem_Bws0(4:6,3+j,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,end,is0) ...
                                                                 - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,end,is0)'*tacr_load.f_tip' ...
                                                                 - sum_dfi_dfs0j ;


                end
            end
        end
    end     
end

