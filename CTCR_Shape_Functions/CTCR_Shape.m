function [ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , ...
          mem_deriv_propag_high , mem_CJ , simulation_param , bool_problem_opt , exitflag , output] ...
          = CTCR_Shape( ...
          IC , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , bool_disp_terminal)


% ======================================================================= %
% ======================================================================= %

% This function computes the robot shape

% ====================
% ====== INPUTS ====== 

% IC                    : Initial value for yu(0) (see Table 5) 
% simulation_param      : Model settings
% ctcr_carac            : Robot features
% ctcr_load             : Robot loads
% ctcr_construc         : Robot features related to the model settings
% bool_disp_terminal    : [boolean] Display the results in the terminal ?

% ====================
% ===== OUTPUTS ====== 

% ctcr_shape            : Robot 3D shape
% mem_bvp               : Memory of the BVP variables 
% bvp_prop              : Results of the BVP resolution
% mem_deriv_propag_low  : Memory of the low-level derivatives 
% mem_deriv_propag_high : Memory of the high-level partial derivatives
% mem_CJ                : Memory of the Generalized Compliance Matrix and the Joint Jacobian
% simulation_param      : Model settings
% bool_problem_opt      : [boolean] Is there a problem solving the BVP ?
% exitflag              : exitflag of fsolve describing the stopping condition of fsolve
% output                : output of fsolve giving information about the optimization process


% ======================================================================= %
% ======================================================================= %
    
    
    [mem_bvp , bvp_prop , ctcr_shape , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , bool_problem_opt , exitflag , output] ...
    = BVP_Resolv( ...
    IC , ctcr_construc , simulation_param , ctcr_carac , ctcr_load , bool_disp_terminal) ;

    if bool_disp_terminal
        disp(' ') ; disp(' ') ; disp(' ============ Time for CTCR shape') ; disp([' ====  ' , num2str(bvp_prop.clk_bvp), '  [s]'])
        disp(' ') ; disp(' ') ; disp(' ============ Number of iterations') ; disp([' ====  ' , num2str(bvp_prop.nb_iter)])
        disp(' ') ; disp(' ') ; disp(' ============ Optimization norm error') ; disp([' ====  ' , num2str(bvp_prop.norm_tol)])
        disp(' ') ; disp(' ') ; disp(' ============ Number of discretization points') ; disp([' ====  ' , num2str(ctcr_construc.nbP)])
    end
    
end