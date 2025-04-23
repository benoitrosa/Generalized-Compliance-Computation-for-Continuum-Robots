 




% ============================================================== %
% ==================== Preparing the script ==================== %

disp(' ')
clear all
close all
clc

addpath('TACR_Maths_Functions', 'TACR_Shape_Functions', ...
    'TACR_Shape_Class', 'TACR_Deriv_Propag_Class', 'TACR_Deriv_Propag_Functions', ...
    'TACR_FD_Deriv_Propag_Class', 'TACR_FD_Deriv_Propag_Functions', ...
    'TACR_Graphic', 'TACR_Config' , 'TACR_CPP' , 'DATA') ; 


% ============================================================== %
% ======================= Informations ========================= %
%
% This code is a quasi-static model of a Tendon Actuated Continuum
% Robot (TACR) under external loads. This model computes the shape 
% of the robot, the joint Jacobian and the Generalized Compliance
% Matrix thanks to the Low-Level Derivatives Propagation Method (LLDPM).
% This code has been developed in 2025 by Guillaume Lods and 
% Benoit Rosa, members of the RDH Team of the ICube Lab at Strasbourg
% in France.
%
% This work is based on several existing works :
%
% The TACR quasi-static model :
%
% Rucker, D. C., and Webster III, R. J. (2011),
% Statics and dynamics of continuum robots with general tendon routing and external loading,
% IEEE Transactions on Robotics, 27(6), 1033-1044.
%
% The LLDPM and the Generalized Compliance Matrix :
%
% Lods, G., Rosa, B., Bayle, B. and Nageotte, F. (2024), 
% Exact derivative propagation method to compute the generalized compliance matrix for continuum robots : 
% Application to concentric tubes continuum robots, 
% Mechanism and Machine Theory, Volume 200, 15 September 2024, 105696.
%
% ============================================================== %




% ============================================================== %
% ======================== Configuration ======================= %


% ================
% =============== File ===============

name = 'TACR_mex' ;             % Name of the folder created to store the results and the graphs


fprintf('\n ============= \n ==== LOADING THE CONFIG FILE \n') ;
fprintf([' == ',name,'_config.mat \n']) ;

[simulation_param , tacr_carac , tacr_act , tacr_load , ...
    tacr_construc , prc_s0 , delta_f0] = Load_Config(name) ;


fprintf('\n ============= \n ==== COMPUTING THE TACR SHAPE \n') ;


IC = rand(6,1)*1e-3 ;

[tacr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , ...
mem_deriv_propag_high , mem_CJ , simulation_param , tacr_construc ,  ~ , ~] ...
= TACR_Shape_mex( ...
IC , simulation_param , tacr_carac , tacr_act , tacr_load , tacr_construc) ;



% ================
% ==== Display in the terminal ====

if simulation_param.bool_disp_terminal
    fprintf(' == Time for TACR shape : %.2e [s] \n', bvp_prop.clk_bvp) ;
    fprintf(' == Number of iterations : %.2e \n', bvp_prop.nb_iter) ;
    fprintf(' == Optimization norm error : %.2e \n', bvp_prop.norm_tol) ;
    fprintf(' == Number of discretization points : %.2e \n', tacr_construc.nbP) ;
end





% ============================================================== %
% =============== Compute generalized compliance =============== %
% ===============   and joint Jacobian matrix    =============== %
% ============================================================== %



% ================
% ====== Computation of the Low-Level Derivative Propagation Method =======

if simulation_param.bool_J || simulation_param.bool_Cs0

    fprintf('\n ============= \n ==== COMPUTING THE JOINT JACOBIAN AND THE GENERALIZED COMPLIANCE MATRIX \n') ;

    [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = TACR_Deriv_Propag_mex(...
    tacr_carac , tacr_construc , tacr_act , tacr_load , mem_bvp , ...
    bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ) ;

end


% ================
% ==== Display in the terminal ====

if simulation_param.bool_disp_terminal
    fprintf(' == Computation time for Cs0 and J : %.2e [s] \n', time_comp_CJ) ;
end








% ============================================================== %
% =================== Generating some graphs =================== %
% ============================================================== %


% ================
% ====== Plot initial shape =======
% ====== (Before actuation and loads) =======

if ~simulation_param.bool_problem_opt

    fprintf('\n ============= \n ==== PLOTTING THE INITIAL TACR SHAPE \n') ;

    fig_init_shape                = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_init_shape.Color          = 'w';
    fig_init_shape.WindowState    = 'fullscreen' ;
    ax_fig                        = axes(fig_init_shape) ;

    TACR_Plot(ax_fig , tacr_carac , tacr_construc.mem_p0_init , tacr_construc.mem_pi_init , tacr_construc.mem_R0_init , tacr_construc.vect_ind_iT , tacr_construc.vect_ind_iD)
    cd(['DATA/',name])
    saveas(fig_init_shape,strcat(name,'_init_shape.fig')) ;
    saveas(fig_init_shape,strcat(name,'_init_shape.png')) ;
    cd ../..
    close gcf

end



% ================
% ====== Plot robot shape =======

if ~simulation_param.bool_problem_opt

    fprintf('\n ============= \n ==== PLOTTING THE ACTUATED TACR SHAPE \n') ;

    fig_act_shape                = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_act_shape.Color          = 'w';
    fig_act_shape.WindowState    = 'fullscreen' ;
    ax_fig                       = axes(fig_act_shape) ;

    TACR_Plot(ax_fig , tacr_carac , tacr_construc.mem_p0 , tacr_construc.mem_pi , mem_bvp.mem_y.mem_R0 , tacr_construc.vect_ind_iT , tacr_construc.vect_ind_iD)
    cd(['DATA/',name])
    saveas(fig_act_shape,strcat(name,'_act_shape.fig')) ;
    saveas(fig_act_shape,strcat(name,'_act_shape.png')) ;
    cd ../..
    close gcf

end


% ================
% ========== Plot robot shape with loads =========

if ~simulation_param.bool_problem_opt && ...
   (~isequal(tacr_load.tau_tip, zeros(1,3)) || ...
   ~isequal(tacr_load.f_tip, zeros(1,3)) || ...
   ~isequal(tacr_load.tau_dist_1, zeros(1,3)) || ...
   ~isequal(tacr_load.f_dist_1, zeros(1,3)) || ...
   ~isequal(tacr_load.tau_dist_2, zeros(1,3)) || ...
   ~isequal(tacr_load.f_dist_2, zeros(1,3)))

    fprintf('\n ============= \n ==== PLOTTING THE TACR 3D SHAPE AND THE EXTERNAL LOADS \n') ;

    cd(['DATA/',name])
    filename        = strcat(name,'_act_shape.fig') ;
    fig_robot_load  = TACR_Load_Plot(filename,simulation_param,tacr_carac,tacr_load,tacr_construc,tacr_shape) ;

    cd ../..
    cd(['DATA/',name])
    saveas(fig_robot_load,strcat(name,'_act_shape_loads.fig')) ;
    saveas(fig_robot_load,strcat(name,'_act_shape_loads.png')) ;
    cd ../..
    close gcf

end





% 
% 
% % % ============================================================== %
% % % =============== TACR FD COMPLIANCE & JACOBIAN ================ %
% % 
% % select_DF           = 'pn' ;
% % ampl_vibr           = 1e-6 ;
% % 
% % pt_s0_FD        = floor([1,20,40,60,80,100]/100*tacr_construc.nbP) ;
% % pt_s0_FD        = [pt_s0_FD , tacr_construc.vect_ind_iT'] ;
% % pt_s0_FD        = sort(pt_s0_FD) ;
% % pt_s0_FD        = unique(pt_s0_FD) ;
% % 
% % bool_opt_lit    = false ;
% % 
% % [mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low , problem_opt] ...
% % = TACR_FD_Deriv_Propag( ...
% % select_DF , ampl_vibr , tacr_carac , tacr_construc , tacr_act , ...
% % tacr_load , bvp_prop , pt_s0_FD , bool_opt_lit) ;
% % 
% % 
% % % ================================ %
% % % ===== Listes de sélection ====== %
% % 
% % % 'Cs0(s)' , 'J(s)' , 'B' , 'u0' , 'v0' , 'R0' , 'p0' , 'm0' , 'n0' , 'c' , 'd' , 'M' , 'inv_M' , 'dpi_ds' 
% % % 'm0(0)' , 'n0(0)' , 'tj' , 'tau(s0)' , 'f(s0)'
% % 
% % numerateur = {'Cs0(s)' , 'J(s)' , 'B'} ; 
% % derivateur = {'m0(0)' , 'n0(0)'} ;
% % 
% % 
% % [vect_select_quant , vect_select_deriv] = ...
% % TACR_3D_Comp_Manag(numerateur,derivateur) ;
% % 
% % 
% % % ============================================================== %
% % % ==================== 3D LIT vs FD GRAPHS ===================== %
% % 
% % TACR_3D_Graph_Comp( ...
% %     name               ,  vect_select_quant       , ...
% %     vect_select_deriv  , tacr_construc            , tacr_carac              , ...
% %     simulation_param   , ...
% %     mem_CJ             , mem_deriv_propag_high    , mem_deriv_propag_low    , ...
% %     mem_FD_CJ          , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low , ...
% %     pt_s0_FD) ;
% 
% 
% 
% 
% 
% 
% 
% 
% 
% 
% % ============================================================= %
% % ============================================================== %
% % =========================== Extra ============================ %
% %                                                                %
% %                  For a given force variation                   %
% %     visualize the shape deformation computed by the model      %
% %                             versus                             %
% %         the shape deformation computed by linearization        %
% %            using the Generalized Compliance Matrix             %
% %                                                                %
% % ============================================================== %
% % ============================================================== %
% 
% if ~isempty(prc_s0) && ~isempty(delta_f0)
% 
% 
%     % ================
%     % ============== Adding the vector force to tacr_construc ===============
% 
%     fprintf('\n ============= \n ==== ADDIND THE FORCE VARIATION \n') ;
% 
%     [tacr_construc_def_mod , tacr_load_new , mem_is0] ...
%     = Add_Force_var( ...
%     prc_s0 , delta_f0 , tacr_construc , tacr_load) ;
% 
% 
% 
%     % ================
%     % ============== Compute the model again ===============
% 
%     fprintf('\n ============= \n ==== COMPUTING THE DEFORMED TACR SHAPE USING THE SHAPE MODEL \n') ;
% 
%     [tacr_shape_def_mod , mem_bvp_def_mod , bvp_prop_def_mod , mem_deriv_propag_low_def_mod , ...
%     mem_deriv_propag_high_def_mod , mem_CJ_def_mod , simulation_param_def_mod , tacr_construc_def_mod , ~ , ~] ...
%     = TACR_Shape( ...
%     IC , simulation_param , tacr_carac , tacr_act , tacr_load_new , tacr_construc_def_mod) ;
% 
% 
%     % ================
%     % ==== Display in the terminal ====
% 
%     if simulation_param.bool_disp_terminal
%         fprintf(' == Time for TACR shape : %.2e [s] \n', bvp_prop.clk_bvp) ;
%         fprintf(' == Number of iterations : %.2e \n', bvp_prop.nb_iter) ;
%         fprintf(' == Optimization norm error : %.2e \n', bvp_prop.norm_tol) ;
%         fprintf(' == Number of discretization points : %.2e \n', tacr_construc_def_mod.nbP) ;
%     end
% 
% 
% 
%     % ================
%     % ============== Compute the deformation using the Generalized Compliance Matrix ===============
% 
%     fprintf('\n ============= \n ==== COMPUTING THE DEFORMED TACR SHAPE BY LINEARIZATION USING THE GENERALIZED COMPLIANCE MATRIX \n') ;
% 
%     [tacr_shape_def_jacob , time_comp_lin_deform , tacr_construc_def_jacob , mem_bvp_def_jacob] ...
%     = Lin_Deform( ...
%     mem_is0 , delta_f0 , tacr_carac , tacr_shape , tacr_construc , mem_CJ.mem_Cs0 , mem_bvp) ;
% 
% 
%     % ================
%     % ==== Display in the terminal ====
% 
%     if simulation_param.bool_disp_terminal
%         fprintf(' == Computation time for linearized deformations : %.2e [s] \n', time_comp_lin_deform) ;
%     end
% 
% 
%     % ================
%     % ============== Visualize the two shapes on the same graph ===============
% 
%     fprintf('\n ============= \n ==== PLOTTING THE TACR 3D DEFORMED SHAPES \n') ;
% 
%     fig_deform                  = figure('units','normalized','outerposition',[0 0 1 1]) ;
%     fig_deform.Color            = 'w';
%     fig_deform.WindowState      = 'fullscreen' ;
%     curr_ax                     = axes(fig_deform) ;
% 
%     TACR_Plot_3(curr_ax , ...
%                 mem_bvp.mem_y.mem_R0 , mem_bvp_def_mod.mem_y.mem_R0 , mem_bvp_def_jacob.mem_y.mem_R0 , ...
%                 tacr_construc , tacr_construc_def_mod , tacr_construc_def_jacob , ...
%                 tacr_carac , mem_is0 , delta_f0) ;  
% 
%     cd(['DATA/',name])
%     saveas(fig_deform,strcat(name,'_deform_shape.fig')) ;  
%     saveas(fig_deform,strcat(name,'_deform_shape.png')) ;
%     cd ../..
%     close gcf
% 
% end



% ======================================= %
% ========== Saving the data ============ %
% ======================================= %

fprintf('\n ============= \n ==== SAVING THE DATA \n') ;

cd(['DATA/',name]) ;
save(strcat(name,'_data.mat'))
cd ../..

% ======================================= %
% ======================================= %



