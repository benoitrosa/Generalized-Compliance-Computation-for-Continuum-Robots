function [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = Deriv_Propag_Int(...
    bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , mem_bvp , bvp_prop , simulation_param , ...
    mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , bool_disp_terminal)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbP             = ctcr_construc.nbP ;
    
    % ========================================================== %
    % ========================================================== %

    tic_CJ = tic ;
    %pt_s0_LIT_curr = ctcr_construc.ind_origin ;

    for is = 1:nbP
        
        [mem_deriv_propag_low , mem_deriv_propag_high] ...
        = Deriv_Propag_MaJ_Mem_curr( ...
        bool_J , bool_Cs0 , is , ctcr_construc , ctcr_carac , ctcr_act , simulation_param , ...
        mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high) ;

        
        % ========================================== %
        % == du0_ds, dR_ds and dP_ds computation === %

        mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_ODE( ...
        bool_J , bool_Cs0 , is , mem_bvp , ctcr_carac , ctcr_act , ctcr_construc , ...
        simulation_param , mem_deriv_propag_low) ;


        % ========================================== %
        % ============ Memories updating =========== %

        [mem_deriv_propag_low , mem_deriv_propag_high] ...
        = Deriv_Propag_MaJ_Mem( ...
        bool_J , bool_Cs0 , is , ctcr_carac , ctcr_construc , mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , ...
        simulation_param) ;

    end

    % ========================================== %
    % ============== B computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DBDX_Construc(...
    bool_J , bool_Cs0 , mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ...
    ctcr_load , bvp_prop , simulation_param , mem_deriv_propag_high) ;



    % ========================================== %
    % ============== E computation ============= %

    mem_deriv_propag_high ...
    = Deriv_Propag_DEDX_Construc(...
    bool_J , bool_Cs0 , mem_deriv_propag_low , ctcr_construc , ctcr_carac , mem_deriv_propag_high , ...
    simulation_param) ;
    
    % ========================================== %
    % =========== C and J computation ========== %

    for is = ctcr_construc.ind_origin:nbP

        mem_CJ ...
        = Deriv_Propag_Comp_CJ(...
        bool_J , bool_Cs0 , is , ctcr_carac , simulation_param , bvp_prop , mem_CJ , mem_deriv_propag_high) ;

    end

    time_comp_CJ = toc(tic_CJ) ;
    if bool_disp_terminal
        disp(' ') ; disp(' ') ; disp(' ============ Time for CTCR extension') ; disp([' ====  ' , num2str(time_comp_CJ), '  [s]'])
    end

end