function [mem_bvp , bvp_prop , ctcr_shape , mem_deriv_propag_low , mem_deriv_propag_high , ...
          mem_CJ , bool_problem_opt , exitflag , output] ...
          = BVP_Resolv( ...
          IC , ctcr_construc , simulation_param , ctcr_carac , ...
          ctcr_load , bool_disp_terminal)


% ======================================================================= %
% ======================================================================= %

% This function solves the BVP

% ====================
% ====== INPUTS ====== 

% IC                        : Initial value for yu(0) (see Table 5) 
% select_opt                : Method for solving the BVP
% ctcr_construc             : Robot features related to the model settings
% simulation_param          : Model settings
% ctcr_carac                : Robot features
% ctcr_act                  : Robot actuation
% ctcr_load                 : Robot loads
% bool_disp_terminal        : [boolean] Display the results in the terminal ?

% ====================
% ===== OUTPUTS ====== 

% mem_bvp                   : Memory of the BVP variables 
% bvp_prop                  : Results of the BVP resolution
% ctcr_shape                : Robot shape
% mem_deriv_propag_low      : Memory of the low-level derivatives 
% mem_deriv_propag_high     : Memory of the high-level partial derivatives
% mem_CJ                    : Memory of the Generalized Compliance Matrix and the Joint Jacobian
% bool_problem_opt          : [boolean] Is there a problem solving the BVP ?
% exitflag                  : exitflag of fsolve describing the stopping condition of fsolve
% output                    : output of fsolve giving information about the optimization process

% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ======================= Preparing ======================== %


    % Specifying the float precision
    digits(simulation_param.digits_length) ;

    % Init timer
    tic_bvp = tic ;

    % ========================================================== %
    % =========== Auto optimization loop with fsolve =========== %

    bvp_prop                = BVPProp() ;           % BVP prop initialization
    bvp_prop.IC_opt         = IC ;                  % IC initialization
    bvp_prop.IC_opt_prev    = bvp_prop.IC_opt ;     % IC memory initialization        
    bvp_prop.flag_bvp       = false ;               % BVP flag initialization
    bvp_prop.nb_iter        = 0 ; % 1                   % Iteration number initialzation


    
    % Memories initialization
    [mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] = ...
    Init_Mem( ...
    ctcr_construc , ctcr_carac , bvp_prop) ;


    % ========================================= %
    % ======== Settings for the solver ======== % 
    opts = optimoptions('fsolve','Display','off','Algorithm','levenberg-marquardt', ...
           'MaxIter',500,'FunctionTolerance',10*eps, ...
           'InitDamping',1,'SpecifyObjectiveGradient',true, ...
           'MaxFunctionEvaluations',(2*ctcr_carac.nbT+6)*500) ;



    % ========================================= %
    % ============ Solving the BVP ============ % 

    myfun = @(IC) BVP_BC_Comp_Fsolve( ...
                IC , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
                mem_bvp , mem_deriv_propag_low) ;
    %try

        [IC_opt,~,exitflag,output,jacobian] = fsolve(myfun,IC,opts) ;

        [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
        = BVP_BC_Comp_Fsolve( ...
        IC_opt , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
        mem_bvp , mem_deriv_propag_low) ;

    % catch exception
    %     exitflag = -1 ;
    % end



    % ======================================= %
    % ======== Results of the solver ======== % 

    % ==================
    % ==== Case n°1 : Problem

    if exitflag <= -1 || bvp_prop.norm_tol > sqrt(simulation_param.opt_tol)

        bool_problem_opt = true ;

        if bool_disp_terminal
            disp(' ======== Optimization problem ======== ')
        end


    % ==================
    % ==== Case n°2 : BVP solved

    else

        bool_problem_opt = false ;

        bvp_prop.Bu = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_load) ;
        

        % Update the partial derivative duzi_dbcj since it depends on the optimal yu(0)
        for iT = 1:ctcr_carac.nbT
            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(iT,iT,ctcr_construc.vect_ind_iT(iT,1)) = - bvp_prop.IC_opt(iT)/ctcr_construc.vect_res(ctcr_construc.vect_ind_iT(iT,1)) ;
        end

        bvp_prop.nb_iter = output.iterations ;  % Iterations number

    end
        

    
    bvp_prop.clk_bvp    = toc(tic_bvp) ;                                % Computation time
    ctcr_shape          = reshape(mem_bvp.mem_T(1:3,4,1:end),3,[]) ;    % Extraction of the robot 3D shape

    
end