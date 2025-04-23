function [mem_bvp , bvp_prop , ctcr_shape , mem_deriv_propag_low , mem_deriv_propag_high , ...
          mem_CJ , simulation_param , exitflag , output] ...
          = BVP_Resolv( ...
          IC , ctcr_construc , simulation_param , ctcr_carac , ...
          ctcr_load)


% ======================================================================= %
% ======================================================================= %
%
% This function solves the BVP
%
% ====================
% ====== INPUTS ====== 
%
% IC                        : (nbT+6 x 1)   Initial value for yu(0)
% ctcr_construc             : (class)       Robot features related to the model settings
% simulation_param          : (class)       Model settings
% ctcr_carac                : (class)       Robot features
% ctcr_act                  : (class)       Robot actuation
% ctcr_load                 : (class)       Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp                   : (class)       Memory of the BVP variables 
% bvp_prop                  : (class)       Results of the BVP resolution
% ctcr_shape                : (3 x nbP)     Robot shape
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
    ctcr_construc , ctcr_carac , bvp_prop) ;


    % ========================================= %
    % ======== Settings for the solver ======== % 
    opts = optimoptions('fsolve','Display','off','Algorithm','levenberg-marquardt', ...
           'MaxIter',500,'FunctionTolerance',10*eps, ...
           'InitDamping',1,'SpecifyObjectiveGradient',true, ...
           'MaxFunctionEvaluations',1000) ;


    % ========================================= %
    % ============ Solving the BVP ============ % 

    myfun = @(IC) BVP_BC_Comp_Fsolve( ...
                IC , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
                mem_bvp , mem_deriv_propag_low) ;

    [IC_opt,~,exitflag,output,jacobian_num] = fsolve(myfun,IC,opts) ;

    [error , jacobian_lit , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
    = BVP_BC_Comp_Fsolve( ...
    IC_opt , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
    mem_bvp , mem_deriv_propag_low) ;





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

        simulation_param.bool_problem_opt               = false ;
        mem_deriv_propag_high.mem_B(1:nbT+6,1:nbT+6)    = BVP_Bu_Construc(mem_deriv_propag_low , mem_bvp , tacr_load , tacr_construc , tacr_act) ;
        bvp_prop.Bu                                     = mem_deriv_propag_high.mem_B(1:nbT+6,1:nbT+6) ;
        
        % Update the partial derivative duzi_dbcj since it depends on the optimal yu(0)
        for iT = 1:ctcr_carac.nbT
            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(iT,iT,ctcr_construc.vect_ind_iT(iT,1)) = - bvp_prop.IC_opt(iT)/ctcr_construc.vect_res(ctcr_construc.vect_ind_iT(iT,1)) ;
        end

    end
        

    
    bvp_prop.clk_bvp    = toc(tic_bvp) ;                                % Computation time
    ctcr_shape          = reshape(mem_bvp.mem_T(1:3,4,1:end),3,[]) ;    % Extraction of the robot 3D shape

    
end