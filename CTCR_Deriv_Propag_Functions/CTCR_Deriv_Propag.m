function [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = CTCR_Deriv_Propag(...
    ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , bvp_prop , ...
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
% ctcr_carac            : (class) Robot features
% ctcr_construc         : (class) Robot features related to the model settings
% ctcr_act              : (class) Robot actuation
% ctcr_load             : (class) Robot loads
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
    
    
    % ================
    % ============ Preparing =============
    
    simulation_param = CTCR_S0_Manag(ctcr_construc,simulation_param) ;


    tic_CJ = tic ;

    for is = 1:ctcr_construc.nbP
        
        % =========================================================== %
        % ====== Computation of complementary derivatives du0 ======= %
        % == and assembly of the dT0 derivatives using dR0 and dp0 == %

        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        is , ctcr_construc , ctcr_carac , ctcr_act , simulation_param , ...
        mem_bvp , mem_deriv_propag_low) ;

        

        % =========================================================== %
        % ====== Computation of Low-Level partial derivatives ======= %
        
        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_ODE( ...
        is , mem_bvp , ctcr_carac , ctcr_act , ctcr_construc , ...
        simulation_param , mem_deriv_propag_low) ;


        % ========================================== %
        % ============ Memories updating =========== %

        mem_deriv_propag_low ...
        = Deriv_Propag_MaJ_Mem( ...
        is , ctcr_carac , ctcr_construc , mem_bvp , mem_deriv_propag_low , ...
        simulation_param) ;

    end

    % ========================================== %
    % ============== B computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DBDX_Construc(...
    mem_bvp , ctcr_construc , ctcr_carac , ctcr_load , ...
    bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high) ;



    % ========================================== %
    % ============== E computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DEDX_Construc(...
    ctcr_construc , ctcr_carac , ...
    simulation_param , mem_deriv_propag_low , mem_deriv_propag_high ) ;
    

    
    % ========================================== %
    % =========== C and J computation ========== %

    mem_CJ ...
    = Deriv_Propag_Comp_CJ(...
    ctcr_construc , ctcr_carac , simulation_param , bvp_prop , mem_CJ , mem_deriv_propag_high) ;



    % ================
    % ==== Display in the terminal ====

    time_comp_CJ = toc(tic_CJ) ;

    if simulation_param.bool_disp_terminal

        disp(' ====== Computation time for Cs0 and J ') ; disp([' ==  ' , num2str(time_comp_CJ), '  [s]'])
    
    end

    
end