 




% ============================================================== %
% ==================== Preparing the script ==================== %

disp(' ')
clear all
close all
delete all
clc

addpath('CTCR_Maths_Functions', 'CTCR_Shape_Functions', 'CTCR_Shape_Class', 'CTCR_Deriv_Propag_Class', 'CTCR_Deriv_Propag_Functions', 'CTCR_Graphic', 'DATA') ; 



% ============================================================== %
% ======================= Informations ========================= %
%
% Equation implementations are indicated by their numbers with respect to the paper : 
%
% Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, 
% Exact derivative propagation method to compute the generalized compliance matrix for continuum robots : Application to concentric tubes continuum robots, 
% Mechanism and Machine Theory, Volume 200, 15 September 2024
%
% ============================================================== %




% ============================================================== %
% ======================== Configuration ======================= %


% ================
% =============== File ===============

name = 'RTC_demo' ;                             % Name of the folder created to store the results and the graphs

if exist(strcat('DATA/',name),'dir') == 0
   mkdir(strcat('DATA/',name)) ;
end

cd(['DATA/',name]) ;
diary(strcat(name,'_log.txt')) ;
cd ../..



% ================
% ======== Geometric features ========

nbT         = 3 ;                               % Number of tubes of the CTCR (nbT in the paper)
Lr          = [65  , 120 , 180]*1e-3 ;          % [m] Vecttor of the straight lengths of the tubes (index i for tube i)
Lc          = [50  , 50  , 47 ]*1e-3 ;          % [m] Vector of the curved lengths of the tubes (index i for tube i)
Rc          = [100 , 80 , 70]*1e-3 ;          % [m] Vector of the radii of curvature of the tubes (index i for tube i)

% ================
% ======== Stiffness features ========

coeff_poiss = 0.3 ;                             % Poisson's ratio
R           = [0.978 , 0.762 , 0.59]*1e-3 ;     % [m] External radius of the tubes (index i for tube i)
r           = [0.884 , 0.648 , 0.445]*1e-3 ;    % [m] Internal radius of the tubes (index i for tube i)
E           = 6.5e10 ;                         % [Pa] Young modulus (the same for all the tubes)
stiff       = CTCR_Geom_2_Stiff(nbT,E,R,r) ;    % [N.m2] Computation of the vector of the transversal bending stiffness (index i for tube i)

% ================
% ============ Actuation =============

theta_c     = [pi , pi/2 , -pi/2] ;             % [rad] Rotation of the tubes (index i for tube i)
beta_c      = [90 , 126  , 161  ]*1e-3  ;       % [m] Translation of the tubes (index i for tube i)

% ================
% ============== Loads ===============

tau_tip     = [0 , 0 , 0] ;                     % [N.m] Bending moment applied on the tip of the robot  
f_tip       = [0.1 , 0 , 0] ;                   % [N] Force applied on the tip of the robot 
load_lim_1  = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
tau_dist_1  = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
f_dist_1    = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
load_lim_2  = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
tau_dist_2  = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
f_dist_2    = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 

% ================
% ======== Solving parameters ========

nb_digits       = 64 ;                          % Precision of symbolic computations involving variable-precision arithmetic
tol_opt         = 1e-15 ;                       % Stopping criterion for solving the BVP (𝜖 in the paper see Table 5)
resolution      = 0.005 ;                       % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
nb_pt_dict      = 3 ;                           % Number of points before and after each discontinuity points (see Table 5)
resol_pt_disct  = 1e-05 ;                       % [m] Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)






% ============================================================== %
% ======================== Initialization ====================== %
 
simulation_param    = SimulationParam(resolution , tol_opt , nb_digits , resol_pt_disct , nb_pt_dict , []) ;
ctcr_carac          = CTCRCarac(nbT , stiff , coeff_poiss , Rc , Lr , Lc , Lr+Lc) ;
ctcr_act            = CTCRAct(beta_c , theta_c) ;
ctcr_load           = CTCRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
flag_ctcr           = CTCR_Setting_OK(ctcr_carac , ctcr_act , false) ;
ctcr_construc       = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ;




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

if flag_ctcr

    IC = zeros(ctcr_carac.nbT+6,1) ;            % Initial value for yu(0) (see Table 5) 

    [ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , simulation_param , bool_problem_opt] ...
    = CTCR_Shape( ...
    IC , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , true) ;
    





    % ============================================================== %
    % =============== Compute generalized compliance =============== %
    % ===============   and joint Jacobian matrix    =============== %
    %
    % Computation based on the Low-Level Derivative Propagation Method presented in the paper :
    %
    % Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, 
    % Exact derivative propagation method to compute the generalized compliance matrix for continuum robots : Application to concentric tubes continuum robots, 
    % Mechanism and Machine Theory, Volume 200, 15 September 2024
    %
    % ============================================================== %
    % ============================================================== %
    
    
    % ================
    % ==== Jacobian and/or compliance ====
    
    bool_J      = true ;                            % [boolean] Compute the joint Jacobian ?  
    bool_Cs0    = true ;                            % [boolean] Compute the generalized compliance matrix ?
    
    
    
    
    % ================
    % ============ Preparing =============
    
    simulation_param = CTCR_S0_Manag(ctcr_construc,simulation_param) ;
    
    % ================
    % ====== Computation of the Low-Level Derivative Propagation Method =======
    
    if bool_J || bool_Cs0
            
        [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
        = CTCR_Deriv_Propag(...
        bool_J , bool_Cs0 , ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , ...
        bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ , true) ;
            
    end
                 
            
        
    
    
    % ============================================================== %
    % ============================================================== %
    % =================== Generating some graphs =================== %
    % ============================================================== %
    % ============================================================== %


    % ================
    % ====== Plot initial tubes =======
    
    if flag_ctcr && ~bool_problem_opt
    
        fig_init_tub                = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_init_tub.Color          = 'w';
        fig_init_tub.WindowState    = 'fullscreen' ;
        ax_fig                      = axes(fig_init_tub) ;
    
        CTCR_Plot_Tubes(ax_fig , ctcr_carac , ctcr_construc) ;
        cd(['DATA/',name])
        saveas(fig_init_tub,strcat(name,'_Init_Tubes_3D_plot.fig')) ;
        saveas(fig_init_tub,strcat(name,'_Init_Tubes_3D_plot.png')) ;
        cd ../..
        close gcf
    
    end
    
    % ================
    % ====== Plot robot shape =======
    
    if flag_ctcr && ~bool_problem_opt
        
        fig_robot               = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_robot.Color         = 'w';
        fig_robot.WindowState   = 'fullscreen' ;
        ax_fig                  = axes(fig_robot) ;
    
        CTCR_Plot_3D_Volume(ax_fig,ctcr_shape,ctcr_carac,ctcr_construc) ;
        cd(['DATA/',name])
        saveas(fig_robot,strcat(name,'_3D_plot.fig')) ;  
        saveas(fig_robot,strcat(name,'_3D_plot.png')) ;
        cd ../..
        close gcf
        
    end
    
    % ================
    % ========== Plot robot shape with loads =========
    
    if flag_ctcr && ~bool_problem_opt && ...
       (~isequal(ctcr_load.tau_tip, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_tip, zeros(1,3)) || ...
       ~isequal(ctcr_load.tau_dist_1, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_dist_1, zeros(1,3)) || ...
       ~isequal(ctcr_load.tau_dist_2, zeros(1,3)) || ...
       ~isequal(ctcr_load.f_dist_2, zeros(1,3)))
     
        cd(['DATA/',name])
        filename        = strcat(name,'_3D_plot.fig') ;
        fig_robot_load  = CTCR_Load_Plot(filename,simulation_param,ctcr_carac,ctcr_load,ctcr_construc,ctcr_shape) ;
        
        cd ../..
        cd(['DATA/',name])
        saveas(fig_robot_load,strcat(name,'_3D_plot_ext_load.fig')) ;
        saveas(fig_robot_load,strcat(name,'_3D_plot_ext_load.png')) ;
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

    % ================
    % ============== Force variation ===============

    prc_s0      = [30 ; ...                 % [%] Vector of the curvilinear abscissa of the contact points
                   70] ;                    % /!\ in pourcentage of the CTCR length /!\ (row i for force i) 
    
    delta_f0     = [[0.3  , 0.5 , 0] ; ...      % [N] Matrix of the forces applied on the CTCR
                    [-0.5 , 1 , 0] ];         % (row i for vector force i)

    % ================
    % ============== Adding the vector force to ctcr_construc ===============

    [ctcr_construc_new,ctcr_load_new,mem_is0] ...
    = Add_Force_var( ...
    prc_s0,delta_f0,ctcr_construc,ctcr_load) ;


    % ================
    % ============== Compute the model again ===============

    [ctcr_shape_def_mod , mem_bvp_def_mod , bvp_prop_def_mod , mem_deriv_propag_low_def_mod , mem_deriv_propag_high_def_mod , mem_CJ_def_mod , simulation_param_def_mod , bool_problem_opt_def_mod] ...
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
    saveas(fig_deform,strcat(name,'_deform_plot.fig')) ;  
    saveas(fig_deform,strcat(name,'_deform_plot.png')) ;
    cd ../..
    close gcf
        


    % ======================================= %
    % ========== Saving the data ============ %
    % ======================================= %
        
    cd(['DATA/',name]) ;
    save(strcat(name,'_data.mat'))
    cd ../..
    
    % ======================================= %
    % ======================================= %


else
    disp('CTCR features not compatible with the given actuation')
end
