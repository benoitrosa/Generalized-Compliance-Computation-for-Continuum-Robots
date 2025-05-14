function [FD_J] = FD_Deriv_Propag_J(...
    select_DF , epsJ , vect_iJ , tacr_construc , ...
    tacr_carac , tacr_act , tacr_load , bvp_prop , simulation_param)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%


   


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT     = tacr_carac.nbT            ;    
    nbP     = tacr_construc.nbP         ;
    
    

    % ========================================================== %
    % ===================== Initialization ===================== %

    FD_J    = zeros(6,nbT,nbP)          ;

    mem_T0_plus       = zeros(4,4,nbP)  ;
    mem_T0_normal     = zeros(4,4,nbP)  ;
    mem_T0_minus      = zeros(4,4,nbP)  ;
    
    

    % ========================================================== %
    % ================= Save the initial values ================ %
    
    tacr_act_init       = tacr_act      ;
    bvp_prop_init       = bvp_prop      ;
    
    x = tacr_act.ti' ;


    % For loop to consider every derivatives of C : tau(L0) and f(L0)
    for icol = 1:nbT

        tuned_eps = epsJ ;

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
            else %iJ == 3
                x_perturb = x_minus ;
            end

            tacr_act.ti  = x_perturb' ;

            % BVP memories initialization
            [mem_bvp , mem_deriv_propag_low] = Init_Mem(tacr_construc , tacr_carac) ;
    

            % ========================================= %
            % ======== Settings for the solver ======== % 
        
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
        
            IC = zeros(6,1) ;

            myfun = @(IC) BVP_BC_Comp_Fsolve( ...
                IC , tacr_construc , tacr_carac , tacr_act , tacr_load , bvp_prop , ...
                mem_bvp , mem_deriv_propag_low , simulation_param) ;

            [IC_opt,~,exitflag,output,jacobian_num] = fsolve(myfun,IC,opts) ;
        
        
            [error , jacobian_lit , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
            = BVP_BC_Comp_Fsolve( ...
            IC_opt , tacr_construc , tacr_carac , tacr_act , tacr_load , bvp_prop , ...
            mem_bvp , mem_deriv_propag_low , simulation_param) ;


            % Memorizing the values depending on the DF vibration
            if iJ == 1
                [~ , ~ , ~ , ~ , mem_T0_plus , ~ , ~ , ~ , ~ , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            elseif iJ == 2
                [~ , ~ , ~ , ~ , mem_T0_normal , ~ , ~ , ~ , ~ , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            else %iJ == 3
                [~ , ~ , ~ , ~ , mem_T0_minus , ~ , ~ , ~ , ~ , ~ , ~ , ~ , ~] ...
                = FD_Deriv_Propag_Extrac_Values(tacr_construc , bvp_prop , mem_bvp) ;
            end

            % Updating with the original value without any derivative vibration
            tacr_act            = tacr_act_init ;
            bvp_prop            = bvp_prop_init ;
    
        end

        for is = 1:nbP

            if strcmp(select_DF,'pm')

                FD_J(:,icol,is) = inv_hat6((mem_T0_plus(:,:,is) - mem_T0_minus(:,:,is))/(2*tuned_eps)) ;
        
            elseif strcmp(select_DF,'pn')
        
                FD_J(:,icol,is) = inv_hat6((mem_T0_plus(:,:,is) - mem_T0_normal(:,:,is))/tuned_eps) ;

            else  %strcmp(select_DF,'nm')
        
                FD_J(:,icol,is) = inv_hat6((mem_T0_normal(:,:,is) - mem_T0_minus(:,:,is))/tuned_eps) ;

            end        
        end

    end

end