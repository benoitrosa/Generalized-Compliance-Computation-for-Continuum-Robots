function [mem_bvp , mem_deriv_propag_low] ...
    = IVP_Int(...
    tacr_construc , tacr_carac , tacr_act , mem_bvp , mem_deriv_propag_low , bool_opt_lit)

% ======================================================================= %
% ======================================================================= %
%
% This function integrates the differential equations
%
% ====================
% ====== INPUTS ====== 
%
% tacr_construc         : (class)       Robot features related to the model settings
% tacr_carac            : (class)       Robot features
% tacr_act              : (class)       Robot actuation
% mem_bvp               : (class)       Memory of the BVP variables 
% mem_deriv_propag_low  : (class)       Memory of the low-level derivatives
% bool_opt_lit          : (boolean)     Compute the derivatives thanks to the LLDPM ?
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)       Memory of the BVP variables 
% mem_deriv_propag_low  : (class)       Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %


    for is = 1:tacr_construc.nbP

        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem_curr(is , mem_bvp , tacr_carac , tacr_construc , tacr_act , mem_deriv_propag_low , bool_opt_lit) ;
        
        mem_bvp                             = IVP_ODE(is , mem_bvp) ;

        if bool_opt_lit
            mem_deriv_propag_low            = IVP_Comp_Low_ODE(is , mem_bvp , mem_deriv_propag_low) ;
        end

        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem(is , mem_bvp , tacr_construc , mem_deriv_propag_low , bool_opt_lit) ;

    end
    
end