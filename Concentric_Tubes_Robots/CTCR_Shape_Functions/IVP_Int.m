function [mem_bvp , mem_deriv_propag_low] ...
    = IVP_Int(...
    ctcr_construc , ctcr_carac , mem_bvp , mem_deriv_propag_low , bool_opt_lit)

% ======================================================================= %
% ======================================================================= %
%
% This function integrates the differential equations
%
% ====================
% ====== INPUTS ====== 
%
% ctcr_construc         : (class)       Robot features related to the model settings
% ctcr_carac            : (class)       Robot features
% simulation_param      : (class)       Model settings
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



    for is = 1:ctcr_construc.nbP %ctcr_construc.vect_ind_iT(ctcr_carac.nbT,3)
                                                               
        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem_curr(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low , bool_opt_lit) ;
        mem_bvp                             = IVP_ODE(is , ctcr_construc , mem_bvp) ;

        if bool_opt_lit
            mem_deriv_propag_low            = IVP_Comp_Low_ODE(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low) ;
        end

        [mem_bvp , mem_deriv_propag_low]    = IVP_MaJ_Mem(is , mem_bvp , ctcr_construc , mem_deriv_propag_low , bool_opt_lit) ;

    end
    
end