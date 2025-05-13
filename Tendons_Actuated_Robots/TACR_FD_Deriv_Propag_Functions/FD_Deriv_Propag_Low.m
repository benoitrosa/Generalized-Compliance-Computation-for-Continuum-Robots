function [mem_FD_du0 , mem_FD_dv0    , mem_FD_dR0     , mem_FD_dp0 , ...
          mem_FD_dm0 , mem_FD_dn0    , mem_FD_dc      , mem_FD_dd  , ...
          mem_FD_dM  , mem_FD_dinv_M , mem_FD_ddpi_ds , mem_FD_dAi , ...
          mem_FD_dB] ...
          = FD_Deriv_Propag_Low(...
          select_DF , epsJ , vect_iJ , tacr_construc , tacr_carac , ...
          tacr_act , tacr_load , bvp_prop , simulation_param)
                

% EXPLAIN THE FUNCTIONS
%
%
%
%
%
    

    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT     = tacr_carac.nbT ;   
    nbP     = tacr_construc.nbP ;

    % ========================================================== %
    % ========================================================== %


    x = [bvp_prop.IC_opt ; tacr_act.ti'] ; % size (6+nbT)x1
    
    % ======== Save the initial properties ======== %
    tacr_act_init       = tacr_act ;
    bvp_prop_init       = bvp_prop ;

    mem_FD_du0          = zeros(3,6+nbT,nbP)        ;
    mem_FD_dv0          = zeros(3,6+nbT,nbP)        ;
    mem_FD_dR0          = zeros(3,3,6+nbT,nbP)      ;
    mem_FD_dp0          = zeros(3,6+nbT,nbP)        ;
    mem_FD_dm0          = zeros(3,6+nbT,nbP)        ;
    mem_FD_dn0          = zeros(3,6+nbT,nbP)        ;
    mem_FD_dc           = zeros(3,6+nbT,nbP)        ;
    mem_FD_dd           = zeros(3,6+nbT,nbP)        ;
    mem_FD_dM           = zeros(6,6,6+nbT,nbP)      ;
    mem_FD_dinv_M       = zeros(6,6,6+nbT,nbP)      ;
    mem_FD_ddpi_ds      = zeros(3,nbT,6+nbT,nbP)    ;
    mem_FD_dAi          = zeros(3,3,nbT,6+nbT,nbP)  ;
    mem_FD_dB            = zeros(6,6+nbT)            ; 
           
    for icol = 1:6+nbT

        % For loop the selected vibrations : + / - / 0 
        for iJ_tp = 1:length(vect_iJ)
            iJ = vect_iJ(iJ_tp) ;

            tuned_eps = epsJ ;
                
            % Adding the vibration only on the current derivative
            x_plus          = x ;
            x_minus         = x ;
            x_plus(icol)    = x(icol) + tuned_eps ;
            x_minus(icol)   = x(icol) - tuned_eps ;
    
            if iJ == 1
                x_perturb = x_plus ;
            elseif iJ == 2
                x_perturb = x ;
            elseif iJ == 3
                x_perturb = x_minus ;
            end

            bvp_prop.IC_opt     = x_perturb(1:6)    ;
            tacr_act.ti         = x_perturb(7:end)' ;
    
            % BVP memories initialization
            [mem_bvp , mem_deriv_propag_low , ~ , ~] = Init_Mem(tacr_construc , tacr_carac) ;

            % Integration of IC in BVP memories
            mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , tacr_construc , tacr_carac) ;

            % IVP integration
            [mem_bvp , ~] = IVP_Int(tacr_construc , tacr_carac , tacr_act , mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;


            % Distal boundaries conditions comparaison expected / calculated from IC
            bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , tacr_load , tacr_construc , tacr_act) ; 
                        
            % Memorizing the values depending on the DF vibration
            if iJ == 1
                [~ , BC_plus , mem_u0_plus , mem_v0_plus , mem_T0_plus , mem_m0_plus , mem_n0_plus , ...
                 mem_c_plus , mem_d_plus , mem_M_plus , mem_inv_M_plus , mem_dpi_ds_plus , mem_dAi_plus] ...
                 = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 2
                [~ , BC_normal , mem_u0_normal , mem_v0_normal , mem_T0_normal , mem_m0_normal , mem_n0_normal , ...
                 mem_c_normal , mem_d_normal , mem_M_normal , mem_inv_M_normal , mem_dpi_ds_normal , mem_dAi_normal] ...
                 = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 3
                [~ , BC_minus , mem_u0_minus , mem_v0_minus , mem_T0_minus , mem_m0_minus , mem_n0_minus , ...
                 mem_c_minus , mem_d_minus , mem_M_minus , mem_inv_M_minus , mem_dpi_ds_minus , mem_dAi_minus] ...
                 = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            end

            % Updating with the original value without any derivative vibration
            tacr_act            = tacr_act_init ;
            bvp_prop            = bvp_prop_init ;
    
        end

        for is = 1:nbP

            if strcmp(select_DF,'pm')

                mem_FD_du0(:,icol,is)           = (mem_u0_plus(1:3,is)          - mem_u0_minus(1:3,is))         /(2*tuned_eps) ;
                mem_FD_dv0(:,icol,is)           = (mem_v0_plus(1:3,is)          - mem_v0_minus(1:3,is))         /(2*tuned_eps) ;
                mem_FD_dR0(:,:,icol,is)         = (mem_T0_plus(1:3,1:3,is)      - mem_T0_minus(1:3,1:3,is))     /(2*tuned_eps) ;
                mem_FD_dp0(:,icol,is)           = (mem_T0_plus(1:3,4,is)        - mem_T0_minus(1:3,4,is))       /(2*tuned_eps) ;
                mem_FD_dm0(:,icol,is)           = (mem_m0_plus(:,is)            - mem_m0_minus(:,is))           /(2*tuned_eps) ;
                mem_FD_dn0(:,icol,is)           = (mem_n0_plus(:,is)            - mem_n0_minus(:,is))           /(2*tuned_eps) ;
                mem_FD_dc(:,icol,is)            = (mem_c_plus(:,is)             - mem_c_minus(:,is))            /(2*tuned_eps) ;
                mem_FD_dd(:,icol,is)            = (mem_d_plus(:,is)             - mem_d_minus(:,is))            /(2*tuned_eps) ;
                mem_FD_dM(:,:,icol,is)          = (mem_M_plus(:,:,is)           - mem_M_minus(:,:,is))          /(2*tuned_eps) ;
                mem_FD_dinv_M(:,:,icol,is)      = (mem_inv_M_plus(:,:,is)       - mem_inv_M_minus(:,:,is))      /(2*tuned_eps) ;
                mem_FD_ddpi_ds(:,:,icol,is)     = (mem_dpi_ds_plus(:,:,is)      - mem_dpi_ds_minus(:,:,is))     /(2*tuned_eps) ;
                mem_FD_dAi(:,:,:,icol,is)       = (mem_dAi_plus(:,:,:,is)       - mem_dAi_minus(:,:,:,is))      /(2*tuned_eps) ;
                
            elseif strcmp(select_DF,'pn')

                mem_FD_du0(:,icol,is)       = (mem_u0_plus(1:3,is)          - mem_u0_normal(1:3,is))        /tuned_eps ;
                mem_FD_dv0(:,icol,is)       = (mem_v0_plus(1:3,is)          - mem_v0_normal(1:3,is))        /tuned_eps ;
                mem_FD_dR0(:,:,icol,is)     = (mem_T0_plus(1:3,1:3,is)      - mem_T0_normal(1:3,1:3,is))    /tuned_eps ;
                mem_FD_dp0(:,icol,is)       = (mem_T0_plus(1:3,4,is)        - mem_T0_normal(1:3,4,is))      /tuned_eps ;
                mem_FD_dm0(:,icol,is)       = (mem_m0_plus(:,is)            - mem_m0_normal(:,is))          /tuned_eps ;
                mem_FD_dn0(:,icol,is)       = (mem_n0_plus(:,is)            - mem_n0_normal(:,is))          /tuned_eps ;
                mem_FD_dc(:,icol,is)        = (mem_c_plus(:,is)             - mem_c_normal(:,is))           /tuned_eps ;
                mem_FD_dd(:,icol,is)        = (mem_d_plus(:,is)             - mem_d_normal(:,is))           /tuned_eps ;
                mem_FD_dM(:,:,icol,is)      = (mem_M_plus(:,:,is)           - mem_M_normal(:,:,is))         /tuned_eps ;
                mem_FD_dinv_M(:,:,icol,is)  = (mem_inv_M_plus(:,:,is)       - mem_inv_M_normal(:,:,is))     /tuned_eps ;
                mem_FD_ddpi_ds(:,:,icol,is) = (mem_dpi_ds_plus(:,:,is)      - mem_dpi_ds_normal(:,:,is))    /tuned_eps ;
                mem_FD_dAi(:,:,:,icol,is)   = (mem_dAi_plus(:,:,:,is)       - mem_dAi_normal(:,:,:,is))     /tuned_eps ;
            
            elseif strcmp(select_DF,'nm')
        
                mem_FD_du0(:,icol,is)       = (mem_u0_normal(1:3,is)        - mem_u0_minus(1:3,is))         /tuned_eps ;
                mem_FD_dv0(:,icol,is)       = (mem_v0_normal(1:3,is)        - mem_v0_minus(1:3,is))         /tuned_eps ;
                mem_FD_dR0(:,:,icol,is)     = (mem_T0_normal(1:3,1:3,is)    - mem_T0_minus(1:3,1:3,is))     /tuned_eps ;
                mem_FD_dp0(:,icol,is)       = (mem_T0_normal(1:3,4,is)      - mem_T0_minus(1:3,4,is))       /tuned_eps ;
                mem_FD_dm0(:,icol,is)       = (mem_m0_normal(:,is)          - mem_m0_minus(:,is))           /tuned_eps ;
                mem_FD_dn0(:,icol,is)       = (mem_n0_normal(:,is)          - mem_n0_minus(:,is))           /tuned_eps ;
                mem_FD_dc(:,icol,is)        = (mem_c_normal(:,is)           - mem_c_minus(:,is))            /tuned_eps ;
                mem_FD_dd(:,icol,is)        = (mem_d_normal(:,is)           - mem_d_minus(:,is))            /tuned_eps ;
                mem_FD_dM(:,:,icol,is)      = (mem_M_normal(:,:,is)         - mem_M_minus(:,:,is))          /tuned_eps ;
                mem_FD_dinv_M(:,:,icol,is)  = (mem_inv_M_normal(:,:,is)     - mem_inv_M_minus(:,:,is))      /tuned_eps ;
                mem_FD_ddpi_ds(:,:,icol,is) = (mem_dpi_ds_normal(:,:,is)    - mem_dpi_ds_minus(:,:,is))     /tuned_eps ;
                mem_FD_dAi(:,:,:,icol,is)   = (mem_dAi_normal(:,:,:,is)     - mem_dAi_normal(:,:,:,is))     /tuned_eps ;

            end

        end

        if strcmp(select_DF,'pm')

            mem_FD_dB(:,icol)    = (BC_plus - BC_minus)/(2*tuned_eps)    ;

        elseif strcmp(select_DF,'pn')

            mem_FD_dB(:,icol)    = (BC_plus - BC_normal)/tuned_eps       ;

        elseif strcmp(select_DF,'nm')

            mem_FD_dB(:,icol)    = (BC_normal - BC_minus)/tuned_eps      ;

        end

    end

end