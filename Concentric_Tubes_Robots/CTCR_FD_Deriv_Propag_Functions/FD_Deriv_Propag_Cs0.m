function [mem_FD_Cs0] ...
    = FD_Deriv_Propag_Cs0(...
      select_DF , epsJ , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ...
      ctcr_load , bvp_prop , pt_s0_FD)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbP             = ctcr_construc.nbP     ;
    nbT             = ctcr_carac.nbT        ;


    % ========================================================== %
    % ===================== Initialization ===================== %
    
    mem_FD_Cs0      = zeros(6,6,nbP,nbP)    ;

    memT_plus       = zeros(4,4,nbP)        ;
    memT_normal     = zeros(4,4,nbP)        ;
    memT_minus      = zeros(4,4,nbP)        ;


    % ========================================================== %
    % ================= Save the initial values ================ %

    bvp_prop_init       = bvp_prop  ;
    ctcr_load_init      = ctcr_load ;
    ctcr_construc_init  = ctcr_construc     ;


    
    for tp_is0 = 1:length(pt_s0_FD)
        is0 = pt_s0_FD(tp_is0) ;

        x = zeros(6,1) ;

        % For loop to consider every derivatives of C : tau(s0) and f(s0)
        for icol = 1:6
        
            tuned_eps = epsJ ;
            
            % Adding the vibration only on the current derivative
            x_plus              = x ;
            x_minus             = x ;
            x_plus(icol,1)      = x_plus(icol,1)  + tuned_eps ;
            x_minus(icol,1)     = x_minus(icol,1) - tuned_eps ;
                                    
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

                if ~(is0 == ctcr_construc.vect_ind_iT(nbT,3))
                    ctcr_construc.vect_tau_dist(:,is0)  = ctcr_construc.vect_tau_dist(:,is0) + x_perturb(1:3,1)/ctcr_construc.vect_res(is0) ; 
                    ctcr_construc.vect_f_dist(:,is0)    = ctcr_construc.vect_f_dist(:,is0)   + x_perturb(4:6,1)/ctcr_construc.vect_res(is0) ;
                else
                    ctcr_load.tau_tip = ctcr_load.tau_tip + x_perturb(1:3,1)' ;
                    ctcr_load.f_tip   = ctcr_load.f_tip   + x_perturb(4:6,1)' ;
                end
                

                % BVP memories initialization
                [mem_bvp , mem_deriv_propag_low] = Init_Mem(ctcr_construc , ctcr_carac , bvp_prop) ;
    

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
                bvp_prop            = bvp_prop_init  ;
                ctcr_load           = ctcr_load_init ;
        
            end
    
            for is0_2 = 1:ctcr_construc.nbP
    
                if strcmp(select_DF,'pm')
    
                    mem_FD_Cs0(:,icol,is0_2,is0)       = inv_hat6((memT_plus(:,:,is0_2) - memT_minus(:,:,is0_2))/(2*tuned_eps)) ;

                elseif strcmp(select_DF,'pn')
    
                    mem_FD_Cs0(:,icol,is0_2,is0)       = inv_hat6((memT_plus(:,:,is0_2) - memT_normal(:,:,is0_2))/tuned_eps) ;

                else
            
                    mem_FD_Cs0(:,icol,is0_2,is0)       = inv_hat6((memT_normal(:,:,is0_2) - memT_minus(:,:,is0_2))/tuned_eps) ;

                end
    
            end
    
        end

    end

end



