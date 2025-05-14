function [tacr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , ...
          mem_deriv_propag_high , mem_CJ , simulation_param , tacr_construc , exitflag , output] ...
          = TACR_Shape( ...
          simulation_param , tacr_carac , tacr_act , tacr_load , tacr_construc)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the robot shape
%
% ====================
% ====== INPUTS ====== 
%
% IC                    : (6 x 1)       Initial value for yu(0)
% simulation_param      : (class)       Model settings
% tacr_carac            : (class)       Robot features
% tacr_act              : (class)       Robot actuation
% tacr_load             : (class)       Robot loads
% tacr_construc         : (class)       Robot features related to the model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% tacr_shape            : (3 x nbP)     Robot 3D shape
% mem_bvp               : (class)       Memory of the BVP variables 
% bvp_prop              : (class)       Results of the BVP resolution
% mem_deriv_propag_low  : (class)       Memory of the low-level derivatives 
% mem_deriv_propag_high : (class)       Memory of the high-level partial derivatives
% mem_CJ                : (class)       Memory of the Generalized Compliance Matrix and the Joint Jacobian
% simulation_param      : (class)       Model settings
% tacr_construc         : (class)       Robot features related to the model settings
% exitflag              : (sign int)    Exitflag of fsolve
% output                : (object)      Output of fsolve giving information about the optimization process
%
% ======================================================================= %
% ======================================================================= %
    
    
    fprintf('\n ============= \n ==== SMART INITIAL GUESS : %s \n' , string(simulation_param.bool_SIC)) ;
    
    if simulation_param.bool_SIC
        n0_init = - tacr_load.f_tip' - tacr_load.f_dist_1' - tacr_load.f_dist_2' - sum([zeros(2,tacr_carac.nbT);tacr_act.ti],2) ;
        m0_init = - tacr_load.tau_tip' - tacr_load.tau_dist_1' - tacr_load.tau_dist_2' ...
                  - hat([0;0;tacr_carac.L])*tacr_load.f_tip' ...
                  - hat([0;0;mean(tacr_load.load_lim_1)])*tacr_load.f_dist_1' ...
                  - hat([0;0;mean(tacr_load.load_lim_2)])*tacr_load.f_dist_2' ;
        IC      = [m0_init;n0_init] ;
    else
        IC      = zeros(6,1) ;
    end


    
    % ================
    % ==== Solving the BVP ====

    [mem_bvp , bvp_prop , tacr_shape , tacr_construc , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , simulation_param , exitflag , output] ...
    = BVP_Resolv( ...
    IC , tacr_construc , simulation_param , tacr_carac , tacr_act , tacr_load) ;

    
end