function mem_FD_B ...
    = FD_Deriv_Propag_High(...
      bool_deriv_propag , select_DF , epsJ , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , bvp_prop)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    

    % ========================================================== %
    % ========================================================== %


    x = [bvp_prop.IC_opt ; ctcr_act.theta_c' ; ctcr_act.beta_c'] ;

    % ======== Save the initial properties ======== %
    ctcr_construc_init  = ctcr_construc ;
    ctcr_act_init       = ctcr_act ;
    bvp_prop_init       = bvp_prop ;

    mem_FD_B    = zeros(nbT+6,3*nbT+6) ;

    % For loop to consider every derivatives of C : tau(L0) and f(L0)
    for icol = 1:3*nbT+6

        % ====== /!\ Special case for beta_c for which the only /!\ ====== %
        % ================== vibration applied is on Lc ================== %

        if 2*nbT+7 <= icol
            tuned_eps_b = simulation_param.epsilon_disct_pt ;

            if strcmp(select_DF,'pn')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)) ;
            elseif strcmp(select_DF,'pm')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)) ...
                            + ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)-1) ;
            elseif strcmp(select_DF,'nm')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)-1) ;
            end

        else
            tuned_eps = epsJ ;
        end

        % ================================================================ %
        % ================================================================ %
        


        % Adding the vibration only on the current derivative
        x_plus          = x ;
        x_minus         = x ;
        x_plus(icol)    = x(icol) + tuned_eps ;
        x_minus(icol)   = x(icol) - tuned_eps ;
        
    
        % For loop the selected vibrations : + / - / 0 
        for iJ_tp = 1:length(vect_iJ)
            iJ = vect_iJ(iJ_tp) ;

            if iJ == 1
                x_perturb = x_plus ;
            elseif iJ == 2
                x_perturb = x ;
            elseif iJ == 3
                x_perturb = x_minus ;
            end

            bvp_prop.IC_opt   = x_perturb(1:nbT+6)         ;
            ctcr_act.theta_c  = x_perturb(nbT+7:2*nbT+6)'  ;
            ctcr_act.beta_c   = x_perturb(2*nbT+7:end)'    ;

    
            % BVP memories initialization
            [mem_bvp , mem_deriv_propag_low] = BVP_Init_Mem(ctcr_construc , ctcr_carac , simulation_param) ;




            % ====== /!\ Special case for beta_c for which the only /!\ ====== %
            % ================== vibration applied is on Lc ================== %
            
            if 2*nbT+7 <= icol
    
                % Construction of the CTCR
                ctcr_construc = FD_Deriv_Propag_CTCR_Construc_Betac(simulation_param , ctcr_construc , ctcr_carac , ctcr_act , iJ , icol-(2*nbT+6)) ;
    
            else

                % Construction of the CTCR
                ctcr_construc = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ; 
    
            end
    
            % ================================================================ %
            % ================================================================ %


            % Integration of IC in BVP memories
            mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;
        
            % IVP integration
            [mem_bvp , ~] = IVP_Int(bool_deriv_propag, ctcr_construc , ctcr_carac , simulation_param , mem_bvp , mem_deriv_propag_low) ;
          
            if icol == 3*nbT+6
                ctcr_construc       = ctcr_construc_init ;
            end

            % Distal boundaries conditions comparaison expected / calculated from IC
            bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load) ;
            
            % Memorizing the values depending on the DF vibration
            if iJ == 1
                [~ , BC_plus , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 2
                [~ , BC_normal , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 3
                [~ , BC_minus , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            end

            % Updating with the original value without any derivative vibration
            ctcr_construc       = ctcr_construc_init ;
            ctcr_act            = ctcr_act_init ;
            bvp_prop            = bvp_prop_init ;
    
        end

        for is = 1:ctcr_construc.nbP

            if strcmp(select_DF,'pm')

                mem_FD_B(:,icol) = (BC_plus - BC_minus)/(2*tuned_eps) ;
        
            elseif strcmp(select_DF,'pn')
        
                mem_FD_B(:,icol) = (BC_plus - BC_normal)/(tuned_eps) ;

            elseif strcmp(select_DF,'nm')
        
                mem_FD_B(:,icol) = (BC_normal - BC_minus)/(tuned_eps) ;
            end

        end

    end

end