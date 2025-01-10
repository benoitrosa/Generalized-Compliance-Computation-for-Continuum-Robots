function [mem_bvp , mem_deriv_propag_low] ...
    = IVP_Int(...
    ctcr_construc , ctcr_carac , mem_bvp , mem_deriv_propag_low)

% ======================================================================= %
% ======================================================================= %
%
% This function integrates the differential equations
%
% ====================
% ====== INPUTS ====== 
%
% ctcr_construc         : (class)   Robot features related to the model settings
% ctcr_carac            : (class)   Robot features
% simulation_param      : (class)   Model settings
% mem_bvp               : (class)   Memory of the BVP variables 
% mem_deriv_propag_low  : (class)   Memory of the low-level derivatives 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)   Memory of the BVP variables 
% mem_deriv_propag_low  : (class)   Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %



    for is = 1:ctcr_construc.nbP

        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem_curr(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low) ;
        mem_bvp                             = IVP_ODE(is , ctcr_construc , mem_bvp) ;

        mem_deriv_propag_low                = IVP_Comp_Low_ODE(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low) ;
        
        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem(is , mem_bvp , ctcr_construc , mem_deriv_propag_low) ;

    end
    
end