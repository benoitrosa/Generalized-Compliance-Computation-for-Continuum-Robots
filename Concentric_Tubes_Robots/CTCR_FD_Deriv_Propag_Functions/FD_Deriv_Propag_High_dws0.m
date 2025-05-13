function mem_FD_dB ...
    = FD_Deriv_Propag_High_dws0(...
    bool_deriv_propag , select_DF , epsJ , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , bvp_prop)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ======== Save the initial properties ======== %
    ctcr_construc_init  = ctcr_construc ;

    global select_opt ctcr_load ctcr_act bvp_prop ctcr_construc


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ; 
    nbP             = ctcr_construc.nbP ;

    
    ctcr_construc       = ctcr_construc_init ;
    ctcr_act_init       = ctcr_act ;
    ctcr_load_init      = ctcr_load ;

    mem_FD_dB           = zeros(nbT+6,6,nbP)    ;

    dispstat('','init') ;
    
    for tp_is0 = 1:length(simulation_param.pt_s0_FD)
        is0 = simulation_param.pt_s0_FD(tp_is0) ;

        dispstat(sprintf('Progress %d%%',floor(tp_is0/length(simulation_param.pt_s0_FD)*100))) ;

        x = [ctcr_construc.vect_tau_dist(:,is0), ctcr_construc.vect_f_dist(:,is0)] ;

        % For loop to consider every derivatives of C : tau(s0) and f(s0)
        for icol = 1:6
            
            tuned_eps = epsJ  ;

            % Adding the vibration only on the current derivative
            x_plus = x ;
            x_minus = x ;
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
                
                if ~(is0 == ctcr_construc.vect_ind_iT(nbT,3))
                    ctcr_construc.vect_tau_dist(:,is0)  = x_perturb(:,1)/ctcr_construc.vect_res(is0) ; 
                    ctcr_construc.vect_f_dist(:,is0)    = x_perturb(:,2)/ctcr_construc.vect_res(is0) ;

%                     % NEW
%                     ctcr_construc.vect_tau_dist(:,is0+1)    = -x_perturb(:,1)/ctcr_construc.vect_res(is0+1) ; 
%                     ctcr_construc.vect_f_dist(:,is0+1)      = -x_perturb(:,2)/ctcr_construc.vect_res(is0+1) ;
                else
                    ctcr_load.tau_tip = x_perturb(:,1)' ;
                    ctcr_load.f_tip   = x_perturb(:,2)' ;
                end
        
                % BVP memories initialization
                [mem_bvp , mem_deriv_propag_low] = BVP_Init_Mem(ctcr_construc , ctcr_carac , simulation_param) ;
    
                % Construction of the CTCR
                %ctcr_construc = FD_Deriv_Propag_CTCR_Construc_dws0(simulation_param , ctcr_carac , ctcr_act , ctcr_construc) ;
        
                % Integration of IC in BVP memories
                mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;
            
                % IVP integration
                [mem_bvp , ~] = IVP_Int(bool_deriv_propag, ctcr_construc , ctcr_carac , simulation_param , mem_bvp , mem_deriv_propag_low) ;
              
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
                ctcr_load           = ctcr_load_init ;
        
            end
    
            for is0_2 = 1:ctcr_construc.vect_ind_iT(nbT,3)
    
                if strcmp(select_DF,'pm')
    
                    mem_FD_dB(:,icol,is0)       = (BC_plus - BC_minus)/(2*tuned_eps) ;

                elseif strcmp(select_DF,'pn')

                    mem_FD_dB(:,icol,is0)       = (BC_plus - BC_normal)/tuned_eps ;

                elseif strcmp(select_DF,'nm')

                    mem_FD_dB(:,icol,is0)       = (BC_normal - BC_minus)/tuned_eps ;

                end
    
            end
   
        end

    end

end