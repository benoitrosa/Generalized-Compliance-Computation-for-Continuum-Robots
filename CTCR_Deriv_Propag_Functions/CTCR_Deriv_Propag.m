function [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = CTCR_Deriv_Propag(...
    bool_J , bool_Cs0 , ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , bvp_prop , ...
    simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , bool_disp_terminal)


% ======================================================================= %
% ======================================================================= %

% This function computes the Generalized Compliance Matrix and
% the Joint Jacobian using the Low-Level Derivative Propagation Method 

% ====================
% ====== INPUTS ====== 

% bool_J                : [boolean] Compute the Joint Jacobian ?
% bool_Cs0              : [boolean] Compute the Generalized Compliance Matrix ?
% ctcr_carac            : Robot features
% ctcr_construc         : Robot features related to the model settings
% ctcr_act              : Robot actuation
% ctcr_load             : Robot loads
% mem_bvp               : Memory of the BVP variables 
% bvp_prop              : Results of the BVP resolution
% simulation_param      : Model settings
% mem_deriv_propag_low  : Memory of the low-level derivatives 
% mem_deriv_propag_high : Memory of the high-level partial derivatives
% mem_CJ                : Memory of the Generalized Compliance Matrix and the Joint Jacobian
% bool_disp_terminal    : [boolean] Display results in the terminal ?

% ====================
% ===== OUTPUTS ====== 

% mem_CJ                : Memory of the Generalized Compliance Matrix and the Joint Jacobian
% mem_deriv_propag_high : Memory of the high-level partial derivatives
% mem_deriv_propag_low  : Memory of the low-level partial derivatives
% time_comp_CJ          : Computation time

% ======================================================================= %
% ======================================================================= %
    
    

    tic_CJ = tic ;

    for is = 1:ctcr_construc.nbP
        
        % =========================================================== %
        % ====== Computation of complementary derivatives du0 ======= %
        % == and assembly of the dT0 derivatives using dR0 and dp0 == %

        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        bool_J , bool_Cs0 , is , ctcr_construc , ctcr_carac , ctcr_act , simulation_param , ...
        mem_bvp , mem_deriv_propag_low) ;

        

        % =========================================================== %
        % ====== Computation of Low-Level partial derivatives ======= %
        
        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_ODE( ...
        bool_J , bool_Cs0 , is , mem_bvp , ctcr_carac , ctcr_act , ctcr_construc , ...
        simulation_param , mem_deriv_propag_low) ;


        % ========================================== %
        % ============ Memories updating =========== %

        mem_deriv_propag_low ...
        = Deriv_Propag_MaJ_Mem( ...
        bool_J , bool_Cs0 , is , ctcr_carac , ctcr_construc , mem_bvp , mem_deriv_propag_low , ...
        simulation_param) ;

    end

    % ========================================== %
    % ============== B computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DBDX_Construc(...
    bool_J , bool_Cs0 , mem_bvp , ctcr_construc , ctcr_carac , ctcr_load , ...
    bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high) ;



    % ========================================== %
    % ============== E computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DEDX_Construc(...
    bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , ...
    simulation_param , mem_deriv_propag_low , mem_deriv_propag_high ) ;
    

    
    % ========================================== %
    % =========== C and J computation ========== %

    mem_CJ ...
    = Deriv_Propag_Comp_CJ(...
    bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , simulation_param , bvp_prop , mem_CJ , mem_deriv_propag_high) ;



    % Display computation time
    time_comp_CJ = toc(tic_CJ) ;
    if bool_disp_terminal
        disp(' ') ; disp(' ') ; disp(' ============ Computation time for Cs0 and J ') ; disp([' ====  ' , num2str(time_comp_CJ), '  [s]'])
    end


    % [mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] ...
    % = Deriv_Propag_Init_Mem(...
    % ctcr_carac , ctcr_construc , mem_deriv_propag_low , bvp_prop) ;
    
    % [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    % = Deriv_Propag_Int(...
    % bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , mem_bvp , bvp_prop , simulation_param , ...
    % mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , bool_disp_terminal) ;
    
end