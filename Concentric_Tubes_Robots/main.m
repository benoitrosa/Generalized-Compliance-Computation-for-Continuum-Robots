 

% ============================================================== %
% ============================================================== %
%
% Computation based on the Low-Level Derivative Propagation Method 
% presented in the paper :
%
% Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, 
% Exact derivative propagation method to compute the generalized 
% compliance matrix for continuum robots : Application to concentric 
% tubes continuum robots, 
% Mechanism and Machine Theory, Volume 200, 15 September 2024
%
% Equation implementations are indicated by their numbers with 
% respect to the paper.
%
% ======================
%
% The quasi-static model used here is based on the following papers :
%
% Lock, J., Laing, G., Mahvash, M., and Dupont, P. E. (2010), 
% Quasistatic modeling of concentric tube robots with external loads, 
% 2010 IEEE/RSJ International Conference on Intelligent Robots and Systems, pages 2325–2332
%
% and
%
% Rucker, D. C., Jones, B. A., and Webster III, R. J. (2010),
% A geometrically exact model for externally loaded concentric-tube continuum robots,
% IEEE transactions on robotics, 26(5), pages 769–780
%
% ============================================================== %
% ============================================================== %




disp(' ')
clear all
close all
clc

addpath('CTCR_Shape_Functions'      , 'CTCR_Shape_Class'              , ...
        'CTCR_Deriv_Propag_Class'   , 'CTCR_Deriv_Propag_Functions'   , ...
        'CTCR_FD_Deriv_Propag_Class', 'CTCR_FD_Deriv_Propag_Functions', ...
        'CTCR_Graphic'              , 'CTCR_Maths_Functions'          , ...
        'CTCR_Config'               , 'CTCR_CPP'                      , ...
        'DATA') ; 


name = 'CTCR_test' ;    % Name of the folder created to store the results and the graphs


fprintf('\n ============= \n ==== LOADING THE CONFIG FILE \n') ;
[simulation_param , ctcr_carac , ctcr_act , ctcr_load , ctcr_construc , prc_s0 , delta_f0] = ...
Load_Config( ...
name) ;


if simulation_param.flag_ctcr

    fprintf('\n ============= \n ==== COMPUTING THE CTCR SHAPE \n') ;
    [ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , simulation_param , ctcr_construc ,  ~ , ~] ...
    = CTCR_Shape( ...
    simulation_param , ctcr_carac , ctcr_load , ctcr_construc) ;
    
    if simulation_param.bool_disp_terminal
        fprintf(' == Time for CTCR shape : %.2e [s] \n', bvp_prop.clk_bvp) ;
        fprintf(' == Number of iterations : %.2e \n', bvp_prop.nb_iter) ;
        fprintf(' == Optimization norm error : %.2e \n', bvp_prop.norm_tol) ;
        fprintf(' == Number of discretization points : %.2e \n', ctcr_construc.nbP) ;
    end


    if simulation_param.bool_J || simulation_param.bool_Cs0
        fprintf('\n ============= \n ==== COMPUTING THE JOINT JACOBIAN AND THE GENERALIZED COMPLIANCE MATRIX USING LLDPM \n') ;
        [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
        = CTCR_Deriv_Propag(...
        ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ) ;
    end


    % fprintf('\n ============= \n ==== COMPUTING THE LINEARIZED DEFORMATIONS \n') ;
    % [ctcr_shape_def_mod , ctcr_shape_def_jacob , mem_is0] = ...
    % CTCR_Lin_Deform(prc_s0 , delta_f0 , ctcr_carac , ctcr_construc , ctcr_load , ...
    % ctcr_shape , simulation_param , mem_CJ) ;




    % ======================== // ! \\ ======================== %
    % ===== This function can take a long time to proceed ===== %
    % ======================== // ! \\ ======================== %

    fprintf('\n ============= \n ==== COMPUTING THE JOINT JACOBIAN AND THE GENERALIZED COMPLIANCE MATRIX USING DF \n') ;
    select_DF                       = 'pn' ;
    ampl_vibr                       = 1e-6 ;
    simulation_param.bool_opt_lit   = true ;
    pt_s0_FD                        = ctcr_construc.ind_origin + [floor([0,20,40,50,60,80,100]/100*(ctcr_construc.nbP-ctcr_construc.ind_origin))] ;
    [mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low] ...
    = CTCR_FD_Deriv_Propag( ...
    select_DF , ampl_vibr , ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , simulation_param , bvp_prop , pt_s0_FD) ;



    







    % ======================================================================================== %
    % ===============================    GENERATING GRAPHS    ================================ %
    % ======================================================================================== %


    if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt
        fprintf('\n ============= \n ==== PLOTTING THE INITIAL TUBES \n') ;
        Plot_Initial_Tubes(name , ctcr_carac , ctcr_construc) ;
    end



    if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt
        fprintf('\n ============= \n ==== PLOTTING THE CTCR 3D SHAPE \n') ;
        Plot_Actuated_Shape(name , ctcr_shape , ctcr_carac , ctcr_construc) ;
    end



    % tot_load = cat(2,ctcr_load.tau_tip,ctcr_load.f_tip,ctcr_load.tau_dist_1,ctcr_load.f_dist_1,ctcr_load.tau_dist_2,ctcr_load.f_dist_2) ;
    % if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt && ~isequal(tot_load, zeros(1,6*3))
    %     fprintf('\n ============= \n ==== PLOTTING THE CTCR 3D SHAPE AND THE EXTERNAL LOADS \n') ;
    %     Plot_Shape_Loads(name , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , ctcr_shape) ;
    % end



    % if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt && ~isempty(prc_s0) && ~isempty(delta_f0)
    %     fprintf('\n ============= \n ==== PLOTTING A FIGURE TO COMPARE THE DEFORMED SHAPES \n') ;
    %     Plot_Comp_Deform(name , ctcr_shape , ctcr_shape_def_mod , ctcr_shape_def_jacob , ctcr_carac , ctcr_construc , mem_is0 , delta_f0) ;
    % end



    % ======================== // ! \\ ======================== %
    % ===== This function can take a long time to proceed ===== %
    % ======================== // ! \\ ======================== %

    % fprintf('\n ============= \n ==== PLOTTING THE 3D GRAPHS TO COMPARE DF AND LLDPM DERIVATIVES \n') ;
    % % ===== Selection of the derivatives to show
    % % options numerateur : 'Cs0(s)' , 'J(s)' , 'B' , 'uzi' , 'ti' , 'm0' , 'n0' , 'u0' , 'R0' , 'p0'
    % % options derivateur : 'uzj(0)' , 'm0(0)' , 'n0(0)' , 'tcj' , 'bcj' , 'tau(s0)' , 'f(s0)'
    % numerateur = {'Cs0(s)' , 'J(s)' , 'B'} ; 
    % derivateur = {'uzj(0)' , 'm0(0)' , 'n0(0)'} ;
    % Plot_Comp_Deriv(numerateur , derivateur , name , ctcr_construc , ctcr_carac , simulation_param , mem_CJ , ...
    %                 mem_deriv_propag_high , mem_deriv_propag_low , mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low , pt_s0_FD) ;


else
    fprintf('CTCR not compatible with the given actuation \n') ;
end





% ======================================= %
% ========== Saving the data ============ %
% ======================================= %
    
fprintf('\n ============= \n ==== SAVING THE DATA \n') ;
cd(['DATA/',name]) ;
save(strcat(name,'_data.mat'))
cd ../..




