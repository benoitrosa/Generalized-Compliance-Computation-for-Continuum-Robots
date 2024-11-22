function [mem_bvp , mem_deriv_propag_low] ...
    = IVP_Int(...
    bool_deriv_propag, ctcr_construc , ctcr_carac , simulation_param , mem_bvp , mem_deriv_propag_low , select_opt)

% ======================================================================= %
% ======================================================================= %

% This function integrates the differential equations

% ====================
% ====== INPUTS ====== 

% bool_deriv_propag     : [boolean] (True only if select_opt = 'fsolve_Bu_lit') Does the solver need to compute the low-level derivatives related to the optimization jacobian computation ?
% ctcr_construc         : Robot features related to the model settings
% ctcr_carac            : Robot features
% simulation_param      : Model settings
% mem_bvp               : Memory of the BVP variables 
% mem_deriv_propag_low  : Memory of the low-level derivatives 
% select_opt            : Method for solving the BVP


% ====================
% ===== OUTPUTS ====== 

% mem_bvp               : Memory of the BVP variables 
% mem_deriv_propag_low  : Memory of the low-level derivatives 

% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbP             = ctcr_construc.nbP ;
    
    % ========================================================== %
    % ========================================================== %

    for is = 1:nbP

        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem_curr(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low,select_opt) ;

        [mem_bvp , Trans]                   = IVP_ODE(is , simulation_param , ctcr_carac , ctcr_construc , mem_bvp) ;

        if bool_deriv_propag

            mem_deriv_propag_low            = IVP_Comp_Low_ODE(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low) ;
        
        end
        
        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem(is , Trans , mem_bvp , ctcr_construc , mem_deriv_propag_low,select_opt) ;

    end
    
end