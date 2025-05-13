function [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] = ...
    BVP_BC_Comp_Fsolve( ...
    IC , ctcr_construc , ctcr_carac , ctcr_load , bvp_prop , ...
    mem_bvp , mem_deriv_propag_low , simulation_param)


% ======================================================================= %
% ======================================================================= %
%
% This function is used in the fsolve function to integrate the IVP, to compute the residual
% and optionally to compute manually the optimization Jacobian 
%
% ====================
% ====== INPUTS ====== 
%
% IC                    : (nbT+6 x 1)       Initial value for yu(0) (see Table 5) 
% ctcr_construc         : (class)           Robot features related to the model settings
% ctcr_carac            : (class)           Robot features
% ctcr_load             : (class)           Robot loads
% ctcr_act              : (class)           Robot actuation
% bvp_prop              : (class)           Results of the BVP resolution
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
% simulation_param      : (class)           Model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% error                 : (nbT+6 x 1)       Residual vector (b in the paper)
% jacobianMatrix        : (nbT+6 x nbT+6)   Optimization Jacobian
% bvp_prop              : (class)           Results of the BVP resolution
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %


    bvp_prop.IC_opt                     = IC ;
    mem_bvp                             = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;
    [mem_bvp , mem_deriv_propag_low]    = IVP_Int(ctcr_construc , ctcr_carac , mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;
    if simulation_param.bool_opt_lit
        bvp_prop.Bu                     = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_load) ;
    end
    bvp_prop                            = BVP_Comp_BC(mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load) ;
    error                               = bvp_prop.vect_tol ;

    % Setting the manually computed optimization jacobian
    if nargout>1
        jacobianMatrix = bvp_prop.Bu ;
    else
        jacobianMatrix = [] ;
    end
    
end