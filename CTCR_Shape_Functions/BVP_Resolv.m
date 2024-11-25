function [mem_bvp , bvp_prop , ctcr_shape , mem_deriv_propag_low , bool_problem_opt , exitflag , output] ...
          = BVP_Resolv( ...
          IC , select_opt, ctcr_construc , simulation_param , ctcr_carac , ctcr_act , ctcr_load , bool_disp_terminal)


% ======================================================================= %
% ======================================================================= %

% This function solves the BVP

% ====================
% ====== INPUTS ====== 

% IC                    : Initial value for yu(0) (see Table 5) 
% select_opt            : Method for solving the BVP
% ctcr_construc         : Robot features related to the model settings
% simulation_param      : Model settings
% ctcr_carac            : Robot features
% ctcr_act              : Robot actuation
% ctcr_load             : Robot loads
% bool_disp_terminal    : [boolean] Display the results in the terminal ?

% ====================
% ===== OUTPUTS ====== 

% mem_bvp               : Memory of the BVP variables 
% bvp_prop              : Results of the BVP resolution
% ctcr_shape            : Robot shape
% mem_deriv_propag_low  : Memory of the low-level derivatives 
% bool_problem_opt      : [boolean] Is there a problem solving the BVP ?
% exitflag              : exitflag of fsolve describing the stopping condition of fsolve
% output                : output of fsolve giving information about the optimization process

% ======================================================================= %
% ======================================================================= %



    output = [] ;

    % ========================================================== %
    % ======================= Preparing ======================== %

    if strcmp(select_opt,'fsolve_Bu_num')
        bool_deriv_propag = false ;
    else
        bool_deriv_propag = true ;
    end

    % Init timer
    tic_bvp = tic ;


    % ========================================================== %
    % ================== Getting input values ================== %
        
    nbT = ctcr_carac.nbT ;



    if strcmp(select_opt,'manual')

        % ========================================================== %
        % ================ Manual optimization loop ================ %

        % BVP properties initialization
        bvp_prop = BVPProp() ;

        % IC initialization
        bvp_prop.IC_opt = IC ;
        bvp_prop.IC_opt_prev = bvp_prop.IC_opt ;

        % BVP flag initialization
        bvp_prop.flag_bvp = false ;

        % Iteration number initialzation
        bvp_prop.nb_iter = 0 ;

        % BVP memories initialization
        [mem_bvp , mem_deriv_propag_low] ...
        = BVP_Init_Mem( ...
        ctcr_construc , ctcr_carac) ;

        % Start clock
        tic_bvp = tic ;


        while ~bvp_prop.flag_bvp

            % Counting number of iterations
            bvp_prop.nb_iter = bvp_prop.nb_iter + 1 ;

            % Integration of IC in BVP memories
            mem_bvp ...
            = BVP_Init_IC( ...
            bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;

            % IVP integration
            [mem_bvp , mem_deriv_propag_low] ...
            = IVP_Int( ...
            bool_deriv_propag , ctcr_construc , ctcr_carac , simulation_param , ctcr_act , mem_bvp , mem_deriv_propag_low) ;

            % Distal boundaries conditions comparaison expected / calculated from IC
            bvp_prop ...
            = BVP_Comp_BC( ...
            mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load) ;

            % ====== Checking the error on every BC coefficient ====== %
            if bvp_prop.norm_tol <= simulation_param.opt_tol
                bvp_prop.flag_bvp = true ;
            end


            % ==== Optimization not reached ==== %
            if ~bvp_prop.flag_bvp

                % Assignation of Bu matrix
                bvp_prop.Bu = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load) ;

                % Computation of next IC to reached the expected BC
                bvp_prop = BVP_Comp_IC(bvp_prop) ;

                % Limit number of iterations
                if bvp_prop.nb_iter >= 50
                    bvp_prop.flag_bvp = true ;
                end

                % Display
                disp(' ')
                disp(' ======== ')
                disp(' ')
                disp('|  iter   |  iter time   |  error norm  |  opt scale  |')
                disp(['|    ' , num2str(bvp_prop.nb_iter) , '    |   ' , num2str(toc(tic_bvp)) , '   |   ' , num2str(bvp_prop.norm_tol) ,'   |  ', num2str(bvp_prop.opt_scale),'  |'])
                disp(' ')
                disp('|    IC    |')
                disp(bvp_prop.IC_opt)
                disp(' ')
                disp('|  error vect  |')
                disp(bvp_prop.vect_tol)
                disp(' ')    
                disp(' ======== ')
                disp(' ')

                tic_bvp = tic ;
            end

        end

        % Final Bu computation
        bvp_prop.Bu = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load) ;

        mem_temps(bvp_prop.nb_iter)         = toc(tic_bvp) ;


    else


        % ========================================================== %
        % =========== Auto optimization loop with fsolve =========== %
    

        % BVP properties initialization
        bvp_prop = BVPProp() ;
    
        % BVP flag initialization
        bvp_prop.flag_bvp = false ;
    
        % Iteration number initialzation
        bvp_prop.nb_iter = 1 ;
    
        % BVP memories initialization
        [mem_bvp , mem_deriv_propag_low] = BVP_Init_Mem(ctcr_construc , ctcr_carac) ;
    
        % ==== fsolve_lit ==== %
        if strcmp(select_opt,'fsolve_Bu_lit')
                opts = optimoptions('fsolve','Display','off','Algorithm','levenberg-marquardt', ...
                       'MaxIter',100,'FunctionTolerance',10*eps, ...
                       'InitDamping',1,'SpecifyObjectiveGradient',true, ...
                       'MaxFunctionEvaluations',(2*nbT+6)*100) ;
        end
    
        % ==== fsolve_num ==== %
        if strcmp(select_opt,'fsolve_Bu_num')
            opts = optimoptions('fsolve','Display','off','Algorithm','levenberg-marquardt', ...
                       'Diagnostics','off','MaxIter',200,'FunctionTolerance',simulation_param.opt_tol,...
                       'InitDamping',1,'MaxFunctionEvaluations',(2*nbT+6)*200, ...
                       'TolX',simulation_param.opt_tol) ;
        end
        
        myfun = @(IC) BVP_BC_Comp_Fsolve(IC,...
                    simulation_param , ctcr_construc , ctcr_carac , ctcr_load , ctcr_act , bvp_prop , ...
                    mem_bvp , mem_deriv_propag_low , select_opt , bool_deriv_propag) ;
        try
            [IC_opt,~,exitflag,output,jacobian] = fsolve(myfun,IC,opts) ;
    
            [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] ...
            = BVP_BC_Comp_Fsolve( ...
            IC_opt , simulation_param , ctcr_construc , ctcr_carac , ctcr_load , ctcr_act , bvp_prop , ...
            mem_bvp , mem_deriv_propag_low , select_opt , bool_deriv_propag) ;
        catch exception
            exitflag = -1 ;
        end

        if exitflag <= -1

            bool_problem_opt = true ;

            if bool_disp_terminal
                disp(' ======== Problème optimisation ======== ')
            end

        else
            bool_problem_opt = false ;

            if strcmp(select_opt,'fsolve_Bu_num')
                bvp_prop.Bu = jacobian ;
            end

             % Final integration and Bu computation
            if strcmp(select_opt,'fsolve_Bu_num')
                [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] = ...
                    BVP_BC_Comp_Fsolve(bvp_prop.IC_opt,...
                        simulation_param , ctcr_construc , ctcr_carac , ctcr_load , ctcr_act , bvp_prop , ...
                        mem_bvp , mem_deriv_propag_low , 'fsolve_Bu_lit' , bool_deriv_propag) ;
            end
            bvp_prop.Bu = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load) ;

            % Iterations number
            bvp_prop.nb_iter = output.iterations ;


        end
        
    end

    % ========================================================== %
    % ========================================================== %

    % Computation time
    bvp_prop.clk_bvp = toc(tic_bvp) ;

    % Extraction of the robot 3D shape
    ctcr_shape = reshape(mem_bvp.mem_T(1:3,4,1:end),3,[]) ;

    
end