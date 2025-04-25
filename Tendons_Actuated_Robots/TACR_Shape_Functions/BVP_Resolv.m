function [mem_bvp , bvp_prop , tacr_shape , tacr_construc , mem_deriv_propag_low , mem_deriv_propag_high , ...
          mem_CJ , simulation_param , exitflag , output] ...
          = BVP_Resolv( ...
          IC , tacr_construc , simulation_param , tacr_carac , ...
          tacr_act , tacr_load)


% ======================================================================= %
% ======================================================================= %
%
% This function solves the BVP
%
% ====================
% ====== INPUTS ====== 
%
% IC                        : (6 x 1)       Initial value for yu(0)
% tacr_construc             : (class)       Robot features related to the model settings
% simulation_param          : (class)       Model settings
% tacr_carac                : (class)       Robot features
% tacr_act                  : (class)       Robot actuation
% tacr_load                 : (class)       Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp                   : (class)       Memory of the BVP variables 
% bvp_prop                  : (class)       Results of the BVP resolution
% tacr_shape                : (3 x nbP)     Robot shape
% mem_deriv_propag_low      : (class)       Memory of the low-level derivatives 
% mem_deriv_propag_high     : (class)       Memory of the high-level partial derivatives
% mem_CJ                    : (class)       Memory of the Generalized Compliance Matrix and the Joint Jacobian
% simulation_param          : (class)       Model settings
% exitflag                  : (sign int)    Exitflag of fsolve
% output                    : (object)      Output of fsolve giving information about the optimization process
%
% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ======================= Preparing ======================== %

    % Init timer
    tic_bvp = tic ;

    % ========================================================== %
    % =========== Auto optimization loop with fsolve =========== %

    bvp_prop                = BVPProp() ;           % BVP prop initialization
    bvp_prop.IC_opt         = IC ;                  % IC initialization
    bvp_prop.nb_iter        = 0 ;                   % Iteration number initialzation

    
    % Memories initialization
    [mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] = ...
    Init_Mem( ...
    tacr_construc , tacr_carac) ;


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
    opts.Display                = simulation_param.Display                  ;
    opts.FunctionTolerance      = simulation_param.FunctionTolerance        ;
    opts.StepTolerance          = simulation_param.FunctionTolerance        ; 
    opts.MaxIter                = simulation_param.MaxIter                  ;
    opts.MaxFunctionEvaluations = simulation_param.MaxFunctionEvaluations   ;
    


    
    % ========================================= %
    % ============ Solving the BVP ============ % 

    myfun = @(IC) BVP_BC_Comp_Fsolve( ...
                IC , tacr_construc , tacr_carac , tacr_act , tacr_load , bvp_prop , ...
                mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;

    [IC_opt,~,exitflag,output,jacobian_num] = fsolve(myfun,IC,opts) ;


    [error , jacobian_lit , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
    = BVP_BC_Comp_Fsolve( ...
    IC_opt , tacr_construc , tacr_carac , tacr_act , tacr_load , bvp_prop , ...
    mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;


    % ======================================= %
    % ======== Results of the solver ======== % 
    
    bvp_prop.nb_iter = output.iterations ;  % Iterations number

    % ==================
    % ==== Case n°1 : Problem

    if exitflag <= -1

        simulation_param.bool_problem_opt = true ;

        if simulation_param.bool_disp_terminal
            fprintf(' == Optimization problem \n') ;
        end


    % ==================
    % ==== Case n°2 : BVP solved

    else

        simulation_param.bool_problem_opt = false ;

        if simulation_param.bool_opt_lit
            mem_deriv_propag_high.mem_B(:,1:6)  = BVP_Bu_Construc(mem_deriv_propag_low , mem_bvp , tacr_load , tacr_construc , tacr_act) ;
            bvp_prop.Bu                         = mem_deriv_propag_high.mem_B(:,1:6) ; 
        else
            bvp_prop.Bu = jacobian_num ;
        end

    end
        
    
    bvp_prop.clk_bvp            = toc(tic_bvp)                                       ; % Computation time
    tacr_shape                  = reshape(mem_bvp.mem_T(1:3,4,:),3,[])               ; % Extraction of the robot 3D shape
    tacr_construc.mem_p0(1:3,:) = tacr_shape                                         ; % Saving the robot shape

    % Re-computing the tendon routings
    for iT = 1:tacr_carac.nbT
        for is = 1:tacr_construc.nbP
            tacr_construc.mem_pi(1:3,iT,is) = tacr_shape(1:3,is) + mem_bvp.mem_y.mem_R0(1:3,1:3,is)*tacr_construc.mem_ri(1:3,iT,is) ;
        end
    end
    
end