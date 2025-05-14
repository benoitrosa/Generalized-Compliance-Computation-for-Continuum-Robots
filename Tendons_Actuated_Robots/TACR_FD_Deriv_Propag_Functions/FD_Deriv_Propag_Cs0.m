function [FD_Cs0] ...
    = FD_Deriv_Propag_Cs0(...
      select_DF , epsJ , vect_iJ , tacr_construc , tacr_carac , ...
      tacr_act , tacr_load , bvp_prop , pt_s0_FD , simulation_param)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%
    
    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbP             = tacr_construc.nbP             ;
    

    % ========================================================== %
    % ===================== Initialization ===================== %
    
    FD_Cs0          = zeros(6,6,nbP,nbP)            ;

    mem_T0_plus     = zeros(4,4,nbP)  ;
    mem_T0_normal   = zeros(4,4,nbP)  ;
    mem_T0_minus    = zeros(4,4,nbP)  ;
    
    
    % ========================================================== %
    % ================= Save the initial values ================ %
    
    bvp_prop_init       = bvp_prop                  ;
    tacr_act_init       = tacr_act                  ;
    tacr_load_init      = tacr_load                 ;
    tacr_construc_init  = tacr_construc             ;
    


    for tp_is0 = 1:length(pt_s0_FD)
        is0 = pt_s0_FD(tp_is0) ;

        % For loop to consider every derivatives of C : tau(s0) and f(s0)
        for icol = 1:6
        
            x           = zeros(6,1) ;
            tuned_eps   = epsJ ;

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
                else % iJ == 3
                    x_perturb = x_minus ;
                end

                if ~(is0 == nbP)
                    tacr_construc.vect_tau_dist(:,is0)      = tacr_construc.vect_tau_dist(:,is0)    + x_perturb(1:3,1)/tacr_construc.vect_res(is0) ; 
                    tacr_construc.vect_f_dist(:,is0)        = tacr_construc.vect_f_dist(:,is0)      + x_perturb(4:6,1)/tacr_construc.vect_res(is0) ;
                else
                    tacr_load.tau_tip = tacr_load.tau_tip   + x_perturb(1:3,1)' ;
                    tacr_load.f_tip   = tacr_load.f_tip     + x_perturb(4:6,1)' ;
                end
                
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
                tacr_act        = tacr_act_init ;
                bvp_prop        = bvp_prop_init ;
                tacr_load       = tacr_load_init ;
                tacr_construc   = tacr_construc_init ;
        
            end
    
            for is = 1:tacr_construc.nbP
    
                if strcmp(select_DF,'pm')
    
                    FD_Cs0(:,icol,is,is0) = inv_hat6((mem_T0_plus(:,:,is) - mem_T0_minus(:,:,is))/(2*tuned_eps)) ;
            
                elseif strcmp(select_DF,'pn')
            
                    FD_Cs0(:,icol,is,is0) = inv_hat6((mem_T0_plus(:,:,is) - mem_T0_normal(:,:,is))/tuned_eps) ;
    
                else %strcmp(select_DF,'nm')
            
                    FD_Cs0(:,icol,is,is0) = inv_hat6((mem_T0_normal(:,:,is) - mem_T0_minus(:,:,is))/tuned_eps) ;
    
                end        
            end
    
        end

    end

end



