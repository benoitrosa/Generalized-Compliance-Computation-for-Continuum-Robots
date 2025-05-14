 




% ============================================================== %
% ============================================================== %
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




disp(' ')
clear all
close all
clc

addpath('TACR_Shape_Functions'      , 'TACR_Shape_Class'              , ...
        'TACR_Deriv_Propag_Class'   , 'TACR_Deriv_Propag_Functions'   , ...
        'TACR_FD_Deriv_Propag_Class', 'TACR_FD_Deriv_Propag_Functions', ...
        'TACR_Graphic'              , 'TACR_Maths_Functions'          , ...
        'TACR_Config'               , 'TACR_CPP'                      , ...
        'TACR_Write_Config'         , 'DATA') ; 


name = 'TACR_test' ;             % Name of the folder created to store the results and the graphs



fprintf('\n ============= \n ==== LOADING THE CONFIG FILE \n') ;

[simulation_param , tacr_carac , tacr_act , tacr_load , tacr_construc , prc_s0 , delta_f0] = ...
Load_Config( ...
name) ;




fprintf('\n ============= \n ==== COMPUTING THE TACR SHAPE \n') ;

[tacr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , simulation_param , tacr_construc ,  ~ , ~] ...
= TACR_Shape_mex( ...
simulation_param , tacr_carac , tacr_act , tacr_load , tacr_construc) ;

if simulation_param.bool_disp_terminal
    fprintf(' == Time for TACR shape : %.2e [s] \n', bvp_prop.clk_bvp) ;
    fprintf(' == Number of iterations : %.2e \n', bvp_prop.nb_iter) ;
    fprintf(' == Optimization norm error : %.2e \n', bvp_prop.norm_tol) ;
    fprintf(' == Number of discretization points : %.2e \n', tacr_construc.nbP) ;
end



if simulation_param.bool_J || simulation_param.bool_Cs0
    fprintf('\n ============= \n ==== COMPUTING THE JOINT JACOBIAN AND THE GENERALIZED COMPLIANCE MATRIX \n') ;
    [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = TACR_Deriv_Propag_mex(...
    tacr_carac , tacr_construc , tacr_act , tacr_load , mem_bvp , bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ) ;

    if simulation_param.bool_disp_terminal
        fprintf(' == Computation time for Cs0 and J : %.2e [s] \n', time_comp_CJ) ;
    end

end



fprintf('\n ============= \n ==== COMPUTING THE LINEARIZED DEFORMATIONS \n') ;
[tacr_shape_def_mod , tacr_shape_def_jacob , mem_bvp_def_mod , mem_bvp_def_jacob , tacr_construc_def_mod , tacr_construc_def_jacob , mem_is0] = ...
TACR_Lin_Deform( ...
prc_s0 , delta_f0 , tacr_carac , tacr_construc , tacr_load , tacr_shape , tacr_act , simulation_param , mem_bvp , mem_CJ) ;





% ======================== // ! \\ ======================== %
% ===== This function can take a long time to proceed ===== %
% ======================== // ! \\ ======================== %

fprintf('\n ============= \n ==== COMPUTING THE JOINT JACOBIAN AND THE GENERALIZED COMPLIANCE MATRIX USING DF \n') ;
select_DF                       = 'pn' ;
ampl_vibr                       = 1e-6 ;
simulation_param.bool_opt_lit   = true ;
pt_s0_FD                        = [1,floor([10,20,40,50,60,80,100]/100*tacr_construc.nbP)] ;
[mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low] ...
= TACR_FD_Deriv_Propag_mex(select_DF , ampl_vibr , tacr_carac , tacr_construc , tacr_act , tacr_load , simulation_param , bvp_prop , pt_s0_FD) ;







% % ======================================================================================== %
% % ===============================    GENERATING GRAPHS    ================================ %
% % ======================================================================================== %


if ~simulation_param.bool_problem_opt
    fprintf('\n ============= \n ==== PLOTTING THE INITIAL TACR SHAPE \n') ;
    Plot_Initial_Shape(name , tacr_carac , tacr_construc) ;
end


if ~simulation_param.bool_problem_opt
    fprintf('\n ============= \n ==== PLOTTING THE ACTUATED TACR SHAPE \n') ;
    Plot_Actuated_Shape(name , tacr_carac , tacr_construc , mem_bvp) ;
end


% tot_load = cat(2,tacr_load.tau_tip,tacr_load.f_tip,tacr_load.tau_dist_1,tacr_load.f_dist_1,tacr_load.tau_dist_2,tacr_load.f_dist_2) ;
% if ~simulation_param.bool_problem_opt && ~isequal(tot_load, zeros(1,6*3))
%     fprintf('\n ============= \n ==== PLOTTING THE TACR 3D SHAPE AND THE EXTERNAL LOADS \n') ;
%     Plot_Shape_Loads(name , simulation_param , tacr_carac , tacr_load , tacr_construc , tacr_shape) ;
% end


if ~simulation_param.bool_problem_opt && ~isempty(prc_s0) && ~isempty(delta_f0)
    fprintf('\n ============= \n ==== PLOTTING A FIGURE TO COMPARE THE DEFORMED SHAPES \n') ;
    Plot_Comp_Deform(name , mem_bvp , mem_bvp_def_mod , mem_bvp_def_jacob , tacr_construc , tacr_construc_def_mod , tacr_construc_def_jacob , tacr_carac , mem_is0 , delta_f0) ;
end




% ======================== // ! \\ ======================== %
% ===== This function can take a long time to proceed ===== %
% ======================== // ! \\ ======================== %

fprintf('\n ============= \n ==== PLOTTING THE 3D GRAPHS TO COMPARE DF AND LLDPM DERIVATIVES \n') ;
% ===== Selection of the derivatives to show
% options : 'Cs0(s)' , 'J(s)' , 'B' , 'u0' , 'v0' , 'R0' , 'p0' , 'm0' , 'n0' , 'c' , 'd' , 'M' , 'inv_M' , 'dpi_ds' 
% options : 'm0(0)' , 'n0(0)' , 'tj' , 'tau(s0)' , 'f(s0)'
numerateur = {'Cs0(s)' , 'J(s)'} ; 
derivateur = {'m0(0)' , 'n0(0)'} ;
Plot_Comp_Deriv(numerateur , derivateur , name , tacr_construc , tacr_carac , simulation_param , mem_CJ , ...
                mem_deriv_propag_high , mem_deriv_propag_low , mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low , pt_s0_FD)




% ======================================= %
% ========== Saving the data ============ %
% ======================================= %

fprintf('\n ============= \n ==== SAVING THE DATA \n') ;

cd(['DATA/',name]) ;
save(strcat(name,'_data.mat'))
cd ../..




