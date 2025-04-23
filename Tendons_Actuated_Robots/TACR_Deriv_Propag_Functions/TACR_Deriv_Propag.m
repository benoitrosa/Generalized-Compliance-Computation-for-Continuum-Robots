function [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = TACR_Deriv_Propag(...
    tacr_carac , tacr_construc , tacr_act , tacr_load , mem_bvp , bvp_prop , ...
    simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the Generalized Compliance Matrix and
% the Joint Jacobian using the Low-Level Derivative Propagation Method 
%
% ====================
% ====== INPUTS ====== 
%
% tacr_carac            : (class) Robot features
% tacr_construc         : (class) Robot features related to the model settings
% tacr_act              : (class) Robot actuation
% tacr_load             : (class) Robot loads
% mem_bvp               : (class) Memory of the BVP variables 
% bvp_prop              : (class) Results of the BVP resolution
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
% mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
% mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
% time_comp_CJ          : (float) Computation time
%
% ======================================================================= %
% ======================================================================= %
    

    tic_CJ = tic ;

    for is = 1:tacr_construc.nbP
        
        % =========================================================== %
        % ===== Computation of the non-differential derivatives ===== %

        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        is , tacr_construc , tacr_carac , tacr_act , simulation_param , ...
        mem_deriv_propag_low , mem_bvp) ;
        

        % =========================================================== %
        % ====== Computation of Low-Level partial derivatives ======= %
        
        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_ODE( ...
        is , mem_bvp , tacr_construc , tacr_carac , simulation_param , mem_deriv_propag_low) ;


        % ========================================== %
        % ============ Memories updating =========== %

        mem_deriv_propag_low ...
        = Deriv_Propag_MaJ_Mem( ...
        is , tacr_construc , mem_deriv_propag_low , simulation_param) ;

    end

    % ========================================== %
    % ============== B computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DBDX_Construc(...
    mem_bvp , tacr_construc , tacr_carac , tacr_load , tacr_act , ...
    bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high) ;



    % ========================================== %
    % ============== E computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DEDX_Construc(...
    tacr_construc , tacr_carac , ...
    simulation_param , mem_deriv_propag_low , mem_deriv_propag_high ) ;
    

    
    % ========================================== %
    % =========== C and J computation ========== %

    mem_CJ ...
    = Deriv_Propag_Comp_CJ(...
    tacr_construc , tacr_carac , simulation_param , bvp_prop , mem_CJ , mem_deriv_propag_high) ;

    time_comp_CJ = toc(tic_CJ) ;
    
end