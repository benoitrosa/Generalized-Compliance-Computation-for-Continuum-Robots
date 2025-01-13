 




% ============================================================== %
% ==================== Preparing the script ==================== %

disp(' ')
clear all
close all
delete all
clc

addpath('CTCR_Maths_Functions', 'CTCR_Shape_Functions', ...
    'CTCR_Shape_Class', 'CTCR_Deriv_Propag_Class', 'CTCR_Deriv_Propag_Functions', ...
    'CTCR_Graphic', 'CTCR_Config' , 'DATA') ; 



% ============================================================== %
% ======================= Informations ========================= %
%
% Equation implementations are indicated by their numbers with respect to the paper : 
%
% Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, 
% Exact derivative propagation method to compute the generalized compliance matrix 
% for continuum robots : Application to concentric tubes continuum robots, 
% Mechanism and Machine Theory, Volume 200, 15 September 2024
%
% ============================================================== %




% ============================================================== %
% ======================== Configuration ======================= %


% ================
% =============== File ===============

name = 'Demo_27' ;                               % Name of the folder created to store the results and the graphs

% Load the config file
[simulation_param , ctcr_carac , ctcr_act , ctcr_load , ...
    ctcr_construc , prc_s0 , delta_f0] = Load_Config(name) ;



% ============================================================== %
% =================== Quasi-static shape model ================= %
%
% Quasi-static shape model based on :
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

if simulation_param.flag_ctcr

    IC = zeros(ctcr_carac.nbT+6,1) ;            % Initial value for yu(0) (see Table 5) 

    [ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , ...
    mem_deriv_propag_high , mem_CJ , simulation_param , ~ , ~] ...
    = CTCR_Shape( ...
    IC , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , true) ;
    
    



    % ============================================================== %
    % =============== Compute generalized compliance =============== %
    % ===============   and joint Jacobian matrix    =============== %
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
    % ============================================================== %
    % ============================================================== %
    
    
    
    
    % ================
    % ============ Preparing =============
    
    simulation_param = CTCR_S0_Manag(ctcr_construc,simulation_param) ;
    
    % ================
    % ====== Computation of the Low-Level Derivative Propagation Method =======
    
    if simulation_param.bool_J || simulation_param.bool_Cs0
            
        [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
        = CTCR_Deriv_Propag(...
        ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , ...
        bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , true) ;
            
    end
                 
            
        
    
    
    % ============================================================== %
    % ============================================================== %
    % =================== Generating some graphs =================== %
    % ============================================================== %
    % ============================================================== %


    % ================
    % ====== Plot initial tubes =======
    
    if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt
    
        fig_init_tub                = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_init_tub.Color          = 'w';
        fig_init_tub.WindowState    = 'fullscreen' ;
        ax_fig                      = axes(fig_init_tub) ;
    
        CTCR_Plot_Tubes(ax_fig , ctcr_carac , ctcr_construc) ;
        cd(['DATA/',name])
        saveas(fig_init_tub,strcat(name,'_init_tubes.fig')) ;
        saveas(fig_init_tub,strcat(name,'_init_tubes.png')) ;
        cd ../..
        close gcf
    
    end
    
    % ================
    % ====== Plot robot shape =======
    
    if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt
        
        fig_robot               = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_robot.Color         = 'w';
        fig_robot.WindowState   = 'fullscreen' ;
        ax_fig                  = axes(fig_robot) ;
    
        CTCR_Plot_3D_Volume(ax_fig,ctcr_shape,ctcr_carac,ctcr_construc) ;
        cd(['DATA/',name])
        saveas(fig_robot,strcat(name,'_shape.fig')) ;  
        saveas(fig_robot,strcat(name,'_shape.png')) ;
        cd ../..
        close gcf
        
    end
    
    % ================
    % ========== Plot robot shape with loads =========
    
    if simulation_param.flag_ctcr && ~simulation_param.bool_problem_opt && ...
       (~isequal(ctcr_load.tau_tip, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_tip, zeros(1,3)) || ...
       ~isequal(ctcr_load.tau_dist_1, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_dist_1, zeros(1,3)) || ...
       ~isequal(ctcr_load.tau_dist_2, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_dist_2, zeros(1,3)))
     
        cd(['DATA/',name])
        filename        = strcat(name,'_shape.fig') ;
        fig_robot_load  = CTCR_Load_Plot(filename,simulation_param,ctcr_carac,ctcr_load,ctcr_construc,ctcr_shape) ;
        
        cd ../..
        cd(['DATA/',name])
        saveas(fig_robot_load,strcat(name,'_shape_loads.fig')) ;
        saveas(fig_robot_load,strcat(name,'_shape_loads.png')) ;
        cd ../..
        close gcf
        
    end
       
    
    % ============================================================== %
    % ============================================================== %
    % =========================== Extra ============================ %
    %                                                                %
    %                  For a given force variation                   %
    %     visualize the shape deformation computed by the model      %
    %                             versus                             %
    %         the shape deformation computed by linearization        %
    %            using the Generalized Compliance Matrix             %
    %                                                                %
    % ============================================================== %
    % ============================================================== %

    if ~isempty(prc_s0) && ~isempty(delta_f0)

        % ================
        % ============== Adding the vector force to ctcr_construc ===============
    
        [ctcr_construc_new,ctcr_load_new,mem_is0] ...
        = Add_Force_var( ...
        prc_s0,delta_f0,ctcr_construc,ctcr_load) ;
    
    
        % ================
        % ============== Compute the model again ===============
    
        [ctcr_shape_def_mod , mem_bvp_def_mod , bvp_prop_def_mod , mem_deriv_propag_low_def_mod , ...
        mem_deriv_propag_high_def_mod , mem_CJ_def_mod , simulation_param_def_mod , exitflag , output] ...
        = CTCR_Shape( ...
        IC , simulation_param , ctcr_carac , ctcr_load_new , ctcr_construc_new , true) ;
    
    
        % ================
        % ============== Compute the deformation using the Generalized Compliance Matrix ===============
    
        ctcr_shape_def_jacob ...
        = Lin_Deform( ...
        mem_is0,delta_f0,ctcr_shape,ctcr_construc,mem_CJ.mem_Cs0,true) ;
    
    
        % ================
        % ============== Visualize the two shapes on the same graph ===============
    
        fig_deform                  = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_deform.Color            = 'w';
        fig_deform.WindowState      = 'fullscreen' ;
        curr_ax                     = axes(fig_deform) ;
    
        CTCR_Plot_3(curr_ax , ctcr_shape , ctcr_shape_def_mod , ctcr_shape_def_jacob  , ctcr_carac , ctcr_construc , mem_is0 , delta_f0) ;   
        cd(['DATA/',name])
        saveas(fig_deform,strcat(name,'_deform_shape.fig')) ;  
        saveas(fig_deform,strcat(name,'_deform_shape.png')) ;
        cd ../..
        close gcf

    end


else
    disp('CTCR features not compatible with the given actuation')
end



% ======================================= %
% ========== Saving the data ============ %
% ======================================= %
    
cd(['DATA/',name]) ;
save(strcat(name,'_data.mat'))
cd ../..

% ======================================= %
% ======================================= %
