function [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] = ...
    BVP_BC_Comp_Fsolve( ...
    IC , tacr_construc , tacr_carac , tacr_act , tacr_load , bvp_prop , ...
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
% IC                    : (6 x 1)           Initial value for yu(0) (see Table 5) 
% tacr_construc         : (class)           Robot features related to the model settings
% tacr_carac            : (class)           Robot features
% tacr_act              : (class)           Robot actuation
% tacr_load             : (class)           Robot loads
% tacr_act              : (class)           Robot actuation
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
    mem_bvp                             = BVP_Init_IC(bvp_prop , mem_bvp , tacr_construc , tacr_carac) ;
    [mem_bvp , mem_deriv_propag_low]    = IVP_Int(tacr_construc , tacr_carac , tacr_act , mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;
    if simulation_param.bool_opt_lit
        bvp_prop.Bu                     = BVP_Bu_Construc(mem_deriv_propag_low , mem_bvp , tacr_load , tacr_construc , tacr_act) ;
    end
    bvp_prop                            = BVP_Comp_BC(mem_bvp , bvp_prop , tacr_load , tacr_construc , tacr_act) ;
    error                               = bvp_prop.vect_tol ;

    % Setting the manually computed optimization jacobian
    if simulation_param.bool_opt_lit && nargout>1
        jacobianMatrix = bvp_prop.Bu ;
    else
        jacobianMatrix = [] ;
    end

    
end