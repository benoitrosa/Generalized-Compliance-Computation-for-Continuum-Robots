function [mem_FD_du0 , mem_FD_dv0 , mem_FD_dR0 , mem_FD_dp0 , mem_FD_dm0 , ...
          mem_FD_dn0 , mem_FD_dc , mem_FD_dd , mem_FD_dM , mem_FD_dinv_M , ...
          mem_FD_ddpi_ds , mem_FD_dAi , mem_FD_dB] ...
          = FD_Deriv_Propag_Low_dws0(...
          select_DF , epsJ , vect_iJ , ...
          tacr_construc , tacr_carac , ...
          tacr_act , tacr_load , bvp_prop , pt_s0_FD , simulation_param)




                    
                    

    


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbP     = tacr_construc.nbP ;
    nbT     = tacr_carac.nbT ;


    
    % ========================================================== %
    % ===================== Initialization ===================== %
    
    mem_FD_du0          = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dv0          = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dR0          = zeros(3,3,6+nbT,nbP,nbP)      ;
    mem_FD_dp0          = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dm0          = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dn0          = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dc           = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dd           = zeros(3,6+nbT,nbP,nbP)        ;
    mem_FD_dM           = zeros(6,6,6+nbT,nbP,nbP)      ;
    mem_FD_dinv_M       = zeros(6,6,6+nbT,nbP,nbP)      ;
    mem_FD_ddpi_ds      = zeros(3,nbT,6+nbT,nbP,nbP)    ;
    mem_FD_dAi          = zeros(3,3,nbT,6+nbT,nbP,nbP)  ;
    mem_FD_dB           = zeros(6,6+nbT,nbP)            ; 
    
    BC_plus             = zeros(6,nbP)                  ;
    mem_u0_plus         = zeros(3,nbP)                  ;
    mem_v0_plus         = zeros(3,nbP)                  ;
    mem_T0_plus         = zeros(4,4,nbP)                ;
    mem_m0_plus         = zeros(3,nbP)                  ;
    mem_n0_plus         = zeros(3,nbP)                  ;
    mem_c_plus          = zeros(3,nbP)                  ;
    mem_d_plus          = zeros(3,nbP)                  ;
    mem_M_plus          = zeros(6,6,nbP)                ;
    mem_inv_M_plus      = zeros(6,6,nbP)                ;
    mem_dpi_ds_plus     = zeros(3,nbT,nbP)              ;
    mem_dAi_plus        = zeros(3,3,nbT,nbP)            ;
    
    BC_normal           = zeros(6,nbP)                  ;
    mem_u0_normal       = zeros(3,nbP)                  ;
    mem_v0_normal       = zeros(3,nbP)                  ;
    mem_T0_normal       = zeros(4,4,nbP)                ;
    mem_m0_normal       = zeros(3,nbP)                  ;
    mem_n0_normal       = zeros(3,nbP)                  ;
    mem_c_normal        = zeros(3,nbP)                  ;
    mem_d_normal        = zeros(3,nbP)                  ;
    mem_M_normal        = zeros(6,6,nbP)                ;
    mem_inv_M_normal    = zeros(6,6,nbP)                ;
    mem_dpi_ds_normal   = zeros(3,nbT,nbP)              ;
    mem_dAi_normal      = zeros(3,3,nbT,nbP)            ;
    
    BC_minus            = zeros(6,nbP)                  ;
    mem_u0_minus        = zeros(3,nbP)                  ;
    mem_v0_minus        = zeros(3,nbP)                  ;
    mem_T0_minus        = zeros(4,4,nbP)                ;
    mem_m0_minus        = zeros(3,nbP)                  ;
    mem_n0_minus        = zeros(3,nbP)                  ;
    mem_c_minus         = zeros(3,nbP)                  ;
    mem_d_minus         = zeros(3,nbP)                  ;
    mem_M_minus         = zeros(6,6,nbP)                ;
    mem_inv_M_minus     = zeros(6,6,nbP)                ;
    mem_dpi_ds_minus    = zeros(3,nbT,nbP)              ;
    mem_dAi_minus       = zeros(3,3,nbT,nbP)            ;
                 
    
    
    % ========================================================== %
    % ================= Save the initial values ================ %
    
    bvp_prop_init       = bvp_prop  ;
    tacr_load_init      = tacr_load ;
    tacr_construc_init  = tacr_construc ;
    

    


    for tp_is0 = 1:length(pt_s0_FD)
        is0 = pt_s0_FD(tp_is0) ;

        % For loop to consider every derivatives of C : tau(s0) and f(s0)
        for icol = 1:6
        
            x               = zeros(6,1) ;
            tuned_eps       = epsJ ;
            
            % Adding the vibration only on the current derivative
            x_plus          = x ;
            x_minus         = x ;
            x_plus(icol)    = x_plus(icol)  + tuned_eps ;
            x_minus(icol)   = x_minus(icol) - tuned_eps ;
                                    
            % For loop the selected vibrations : + / - / 0 
            for iJ_tp = 1:length(vect_iJ)
                iJ = vect_iJ(iJ_tp) ;
    
                if iJ == 1
                    x_perturb = x_plus ;
                elseif iJ == 2
                    x_perturb = x ;
                else %iJ == 3
                    x_perturb = x_minus ;
                end

                if ~(is0 == nbP)
                    tacr_construc.vect_tau_dist(:,is0)      = tacr_construc.vect_tau_dist(:,is0)    + x_perturb(1:3,1)/tacr_construc.vect_res(is0) ; 
                    tacr_construc.vect_f_dist(:,is0)        = tacr_construc.vect_f_dist(:,is0)      + x_perturb(4:6,1)/tacr_construc.vect_res(is0) ;
                    
                else
                    tacr_load.tau_tip                       = tacr_load.tau_tip   + x_perturb(1:3,1)' ;
                    tacr_load.f_tip                         = tacr_load.f_tip     + x_perturb(4:6,1)' ;
                end

                % BVP memories initialization
                [mem_bvp , mem_deriv_propag_low , ~ , ~]    = Init_Mem(tacr_construc , tacr_carac) ;
    
                % Integration of IC in BVP memories
                mem_bvp         = BVP_Init_IC(bvp_prop , mem_bvp , tacr_construc , tacr_carac) ;
        
                % IVP integration
                [mem_bvp , ~]   = IVP_Int(tacr_construc , tacr_carac , tacr_act , mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;
    
                % Distal boundaries conditions comparaison expected / calculated from IC
                bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , tacr_load, tacr_construc , tacr_act) ; 
                            
                % Memorizing the values depending on the DF vibration
                if iJ == 1
                    [~ , BC_plus , mem_u0_plus , mem_v0_plus , mem_T0_plus , mem_m0_plus , mem_n0_plus , ...
                     mem_c_plus , mem_d_plus , mem_M_plus , mem_inv_M_plus , mem_dpi_ds_plus , mem_dAi_plus] ...
                    = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
                elseif iJ == 2
                    [~ , BC_normal , mem_u0_normal , mem_v0_normal , mem_T0_normal , mem_m0_normal , mem_n0_normal , ...
                     mem_c_normal , mem_d_normal , mem_M_normal , mem_inv_M_normal , mem_dpi_ds_normal , mem_dAi_normal] ...
                    = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
                else %iJ == 3
                    [~ , BC_minus , mem_u0_minus , mem_v0_minus , mem_T0_minus , mem_m0_minus , mem_n0_minus , ...
                     mem_c_minus , mem_d_minus , mem_M_minus , mem_inv_M_minus , mem_dpi_ds_minus , mem_dAi_minus] ...
                    = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
                end
    
                % Updating with the original value without any derivative vibration
                bvp_prop        = bvp_prop_init ;
                tacr_load       = tacr_load_init ;
                tacr_construc   = tacr_construc_init ;
        
            end
    
            for is = 1:nbP
    
                if strcmp(select_DF,'pm')

                    mem_FD_du0(:,icol,is,is0)           = (mem_u0_plus(1:3,is)          - mem_u0_minus(1:3,is))         /(2*tuned_eps) ;
                    mem_FD_dv0(:,icol,is,is0)           = (mem_v0_plus(1:3,is)          - mem_v0_minus(1:3,is))         /(2*tuned_eps) ;
                    mem_FD_dR0(:,:,icol,is,is0)         = (mem_T0_plus(1:3,1:3,is)      - mem_T0_minus(1:3,1:3,is))     /(2*tuned_eps) ;
                    mem_FD_dp0(:,icol,is,is0)           = (mem_T0_plus(1:3,4,is)        - mem_T0_minus(1:3,4,is))       /(2*tuned_eps) ;
                    mem_FD_dm0(:,icol,is,is0)           = (mem_m0_plus(:,is)            - mem_m0_minus(:,is))           /(2*tuned_eps) ;
                    mem_FD_dn0(:,icol,is,is0)           = (mem_n0_plus(:,is)            - mem_n0_minus(:,is))           /(2*tuned_eps) ;
                    mem_FD_dc(:,icol,is,is0)            = (mem_c_plus(:,is)             - mem_c_minus(:,is))            /(2*tuned_eps) ;
                    mem_FD_dd(:,icol,is,is0)            = (mem_d_plus(:,is)             - mem_d_minus(:,is))            /(2*tuned_eps) ;
                    mem_FD_dM(:,:,icol,is,is0)          = (mem_M_plus(:,:,is)           - mem_M_minus(:,:,is))          /(2*tuned_eps) ;
                    mem_FD_dinv_M(:,:,icol,is,is0)      = (mem_inv_M_plus(:,:,is)       - mem_inv_M_minus(:,:,is))      /(2*tuned_eps) ;
                    mem_FD_ddpi_ds(:,:,icol,is,is0)     = (mem_dpi_ds_plus(:,:,is)      - mem_dpi_ds_minus(:,:,is))     /(2*tuned_eps) ;
                    mem_FD_dAi(:,:,:,icol,is,is0)       = (mem_dAi_plus(:,:,:,is)       - mem_dAi_minus(:,:,:,is))      /(2*tuned_eps) ;
                    
                elseif strcmp(select_DF,'pn')
    
                    mem_FD_du0(:,icol,is,is0)       = (mem_u0_plus(1:3,is)          - mem_u0_normal(1:3,is))        /tuned_eps ;
                    mem_FD_dv0(:,icol,is,is0)       = (mem_v0_plus(1:3,is)          - mem_v0_normal(1:3,is))        /tuned_eps ;
                    mem_FD_dR0(:,:,icol,is,is0)     = (mem_T0_plus(1:3,1:3,is)      - mem_T0_normal(1:3,1:3,is))    /tuned_eps ;
                    mem_FD_dp0(:,icol,is,is0)       = (mem_T0_plus(1:3,4,is)        - mem_T0_normal(1:3,4,is))      /tuned_eps ;
                    mem_FD_dm0(:,icol,is,is0)       = (mem_m0_plus(:,is)            - mem_m0_normal(:,is))          /tuned_eps ;
                    mem_FD_dn0(:,icol,is,is0)       = (mem_n0_plus(:,is)            - mem_n0_normal(:,is))          /tuned_eps ;
                    mem_FD_dc(:,icol,is,is0)        = (mem_c_plus(:,is)             - mem_c_normal(:,is))           /tuned_eps ;
                    mem_FD_dd(:,icol,is,is0)        = (mem_d_plus(:,is)             - mem_d_normal(:,is))           /tuned_eps ;
                    mem_FD_dM(:,:,icol,is,is0)      = (mem_M_plus(:,:,is)           - mem_M_normal(:,:,is))         /tuned_eps ;
                    mem_FD_dinv_M(:,:,icol,is,is0)  = (mem_inv_M_plus(:,:,is)       - mem_inv_M_normal(:,:,is))     /tuned_eps ;
                    mem_FD_ddpi_ds(:,:,icol,is,is0) = (mem_dpi_ds_plus(:,:,is)      - mem_dpi_ds_normal(:,:,is))    /tuned_eps ;
                    mem_FD_dAi(:,:,:,icol,is,is0)   = (mem_dAi_plus(:,:,:,is)       - mem_dAi_normal(:,:,:,is))     /tuned_eps ;
                
                else %strcmp(select_DF,'nm')
            
                    mem_FD_du0(:,icol,is,is0)       = (mem_u0_normal(1:3,is)        - mem_u0_minus(1:3,is))         /tuned_eps ;
                    mem_FD_dv0(:,icol,is,is0)       = (mem_v0_normal(1:3,is)        - mem_v0_minus(1:3,is))         /tuned_eps ;
                    mem_FD_dR0(:,:,icol,is,is0)     = (mem_T0_normal(1:3,1:3,is)    - mem_T0_minus(1:3,1:3,is))     /tuned_eps ;
                    mem_FD_dp0(:,icol,is,is0)       = (mem_T0_normal(1:3,4,is)      - mem_T0_minus(1:3,4,is))       /tuned_eps ;
                    mem_FD_dm0(:,icol,is,is0)       = (mem_m0_normal(:,is)          - mem_m0_minus(:,is))           /tuned_eps ;
                    mem_FD_dn0(:,icol,is,is0)       = (mem_n0_normal(:,is)          - mem_n0_minus(:,is))           /tuned_eps ;
                    mem_FD_dc(:,icol,is,is0)        = (mem_c_normal(:,is)           - mem_c_minus(:,is))            /tuned_eps ;
                    mem_FD_dd(:,icol,is,is0)        = (mem_d_normal(:,is)           - mem_d_minus(:,is))            /tuned_eps ;
                    mem_FD_dM(:,:,icol,is,is0)      = (mem_M_normal(:,:,is)         - mem_M_minus(:,:,is))          /tuned_eps ;
                    mem_FD_dinv_M(:,:,icol,is,is0)  = (mem_inv_M_normal(:,:,is)     - mem_inv_M_minus(:,:,is))      /tuned_eps ;
                    mem_FD_ddpi_ds(:,:,icol,is,is0) = (mem_dpi_ds_normal(:,:,is)    - mem_dpi_ds_minus(:,:,is))     /tuned_eps ;
                    mem_FD_dAi(:,:,:,icol,is,is0)   = (mem_dAi_normal(:,:,:,is)     - mem_dAi_normal(:,:,:,is))     /tuned_eps ;
    
                end
    
            end

            if strcmp(select_DF,'pm')

                mem_FD_dB(:,icol,is0)           = (BC_plus - BC_minus)   / (2*tuned_eps) ;

            elseif strcmp(select_DF,'pn')

                mem_FD_dB(:,icol,is0)           = (BC_plus - BC_normal)  / tuned_eps     ;

            else %strcmp(select_DF,'nm')
        
                mem_FD_dB(:,icol,is0)           = (BC_normal - BC_minus) / tuned_eps     ;

            end


        end

    end

end