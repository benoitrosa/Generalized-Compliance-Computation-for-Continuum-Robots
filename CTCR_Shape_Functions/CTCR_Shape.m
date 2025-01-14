function [ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , ...
          mem_deriv_propag_high , mem_CJ , simulation_param , ctcr_construc , exitflag , output] ...
          = CTCR_Shape( ...
          IC , simulation_param , ctcr_carac , ctcr_load , ctcr_construc)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the robot shape
%
% ====================
% ====== INPUTS ====== 
%
% IC                    : (nbT+6 x 1)   Initial value for yu(0)
% simulation_param      : (class)       Model settings
% ctcr_carac            : (class)       Robot features
% ctcr_load             : (class)       Robot loads
% ctcr_construc         : (class)       Robot features related to the model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% ctcr_shape            : (3 x nbP)     Robot 3D shape
% mem_bvp               : (class)       Memory of the BVP variables 
% bvp_prop              : (class)       Results of the BVP resolution
% mem_deriv_propag_low  : (class)       Memory of the low-level derivatives 
% mem_deriv_propag_high : (class)       Memory of the high-level partial derivatives
% mem_CJ                : (class)       Memory of the Generalized Compliance Matrix and the Joint Jacobian
% simulation_param      : (class)       Model settings
% ctcr_construc         : (class)       Robot features related to the model settings
% exitflag              : (sign int)    Exitflag of fsolve
% output                : (object)      Output of fsolve giving information about the optimization process
%
% ======================================================================= %
% ======================================================================= %
    
    
    % ================
    % ==== Solving the BVP ====

    [mem_bvp , bvp_prop , ctcr_shape , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , simulation_param , exitflag , output] ...
    = BVP_Resolv( ...
    IC , ctcr_construc , simulation_param , ctcr_carac , ctcr_load) ;
    
end