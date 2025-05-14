function [FD_J] = FD_Deriv_Propag_J(select_DF , epsJ , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ...
                        ctcr_act , ctcr_load , bvp_prop)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

   


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT     = ctcr_carac.nbT            ;    
    nbP     = ctcr_construc.nbP         ;
    


    % ========================================================== %
    % ===================== Initialization ===================== %

    FD_J    = zeros(6,2*nbT,nbP)        ;

    memT_plus       = zeros(4,4,nbP)    ;
    memT_normal     = zeros(4,4,nbP)    ;
    memT_minus      = zeros(4,4,nbP)    ;


    % ========================================================== %
    % ================= Save the initial values ================ %
    
    ctcr_construc_init  = ctcr_construc ;
    ctcr_act_init       = ctcr_act      ;
    bvp_prop_init       = bvp_prop      ;

    x       = [ctcr_act.theta_c' ; ctcr_act.beta_c'] ;
    
    
    % For loop to consider every derivatives of C : tau(L0) and f(L0)
    for icol = 1:2*nbT

        if nbT+1 <= icol

            % Special case for beta_c
            if strcmp(select_DF,'pn')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(nbT+1)+1,1)) ;
            elseif strcmp(select_DF,'pm')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(nbT+1)+1,1)) ...
                            + ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(nbT+1)+1,1)-1) ;
            else % strcmp(select_DF,'nm')
                tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(nbT+1)+1,1)-1) ;
            end

        else
            tuned_eps = epsJ ;
        end

        % ================================================================ %
        % ================================================================ %


        
        % Adding the vibration only on the current derivative
        x_plus = x ;
        x_minus = x ;
        x_plus(icol) = x(icol) + tuned_eps ;
        x_minus(icol) = x(icol) - tuned_eps ;
        
    
        % For loop the selected vibrations : + / - / 0 
        for iJ_tp = 1:length(vect_iJ)
            iJ = vect_iJ(iJ_tp) ;

            if iJ == 1
                x_perturb = x_plus ;
            elseif iJ == 2
                x_perturb = x ;
            else % iJ == 3
                x_perturb = x_minus ;
            end

            ctcr_act.theta_c  = x_perturb(1:nbT)'  ;
            ctcr_act.beta_c   = x_perturb(nbT+1:2*nbT)'    ;

    
            % BVP memories initialization
            [mem_bvp , mem_deriv_propag_low] = Init_Mem(ctcr_construc , ctcr_carac , bvp_prop) ;

            if nbT+1 <= icol
                                
                % Construction of the CTCR (Special case for beta_c)
                ctcr_construc = FD_Deriv_Propag_CTCR_Construc_Betac(ctcr_construc_init , ctcr_carac , ctcr_act , iJ , icol-nbT) ;
    
            else
    
                % Construction of the CTCR
                ctcr_construc = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ; 
    
            end
    
            if simulation_param.bool_opt_lit
            
                % ======= Computing the optimization jacobian using the LLDPM ======= %
        
                opts = optimoptions('fsolve','Display','iter','Algorithm','levenberg-marquardt', ...
                       'MaxIter',1000, 'FunctionTolerance',10*eps, 'StepTolerance',10*eps , ...
                       'MaxFunctionEvaluations',6000, ...
                       'ScaleProblem','jacobian' , 'SpecifyObjectiveGradient',true) ; 
                
            else
        
                % ======= Computing the optimization jacobian using the DF ======= %
        
                opts = optimoptions('fsolve','Display','iter','Algorithm','levenberg-marquardt', ...
                       'MaxIter',1000, 'FunctionTolerance',10*eps, 'StepTolerance',10*eps , ...
                       'MaxFunctionEvaluations',6000, ...
                       'ScaleProblem','jacobian') ;
        
            end
    
            
            % Custom optimization settings
            if simulation_param.bool_display_iter
                opts.Display = 'iter'                                               ;
            else
                opts.Display = 'off'                                                ;
            end 
            opts.FunctionTolerance      = simulation_param.FunctionTolerance        ;
            opts.StepTolerance          = simulation_param.FunctionTolerance        ; 
            opts.MaxIter                = simulation_param.MaxIter                  ;
            opts.MaxFunctionEvaluations = simulation_param.MaxFunctionEvaluations   ;
        
        
            % ========================================= %
            % ============ Solving the BVP ============ % 
        
            IC = zeros(nbT+6,1) ;

            myfun = @(IC) BVP_BC_Comp_Fsolve( ...
                        IC , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
                        mem_bvp , mem_deriv_propag_low , simulation_param) ;
        
            [IC_opt,~,exitflag,output,jacobian_num] = fsolve(myfun,IC,opts) ;

            [error , jacobian_lit , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
            = BVP_BC_Comp_Fsolve( ...
            IC_opt , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
            mem_bvp , mem_deriv_propag_low , simulation_param) ;
            

            % Memorizing the values depending on the DF vibration
            if iJ == 1
                [~ , ~ , ~ , ~ , memT_plus , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 2
                [~ , ~ , ~ , ~ , memT_normal , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            else % iJ == 3
                [~ , ~ , ~ , ~ , memT_minus , ~] ...
                = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
            end

            % Updating with the original value without any derivative vibration
            ctcr_construc       = ctcr_construc_init ;
            ctcr_act            = ctcr_act_init ;
            bvp_prop            = bvp_prop_init ;
    
        end

        for is = 1:ctcr_construc.nbP

            if strcmp(select_DF,'pm')

                FD_J(:,icol,is) = inv_hat6((memT_plus(:,:,is) - memT_minus(:,:,is))/(2*tuned_eps)) ;
        
            elseif strcmp(select_DF,'pn')
        
                FD_J(:,icol,is) = inv_hat6((memT_plus(:,:,is) - memT_normal(:,:,is))/tuned_eps) ;

            else % strcmp(select_DF,'nm')
        
                FD_J(:,icol,is) = inv_hat6((memT_normal(:,:,is) - memT_minus(:,:,is))/tuned_eps) ;

            end        
        end

    end

end