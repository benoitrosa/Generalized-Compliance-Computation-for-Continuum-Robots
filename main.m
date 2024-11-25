 




% ============================================================== %
% ==================== Preparing the script ==================== %
% ============================================================== %

disp(' ')
clear all
close all
delete all
clc

addpath('CTCR_Maths_Functions', 'CTCR_Shape_Functions', 'CTCR_Shape_Class', 'CTCR_Deriv_Propag_Class', 'CTCR_Deriv_Propag_Functions', 'CTCR_Graphic') ; 




% ============================================================== %
% ======================== Configuration ======================= %
% ============================================================== %



% ================
% =============== File ===============

name = 'RTC_demo' ;                             % Name of the folder created to store the results and the graphs

if exist(strcat('DATA/',name),'dir') == 0
   mkdir(strcat('DATA/',name)) ;
else
    addpath('DATA') ;
end

cd(['DATA/',name]) ;
diary(strcat(name,'_log.txt')) ;
cd ../..
% ====================================
% ================



% ================
% ======== Geometric features ========

nbT         = 3 ;                               % Number of tubes of the CTCR (nbT in the paper)
Lr          = [95  , 215 , 353]*1e-3 ;          % [m] Vecttor of the straight lengths of the tubes (index i for tube i)
Lc          = [50  , 50  , 47 ]*1e-3 ;          % [m] Vector of the curved lengths of the tubes (index i for tube i)
Rc          = [160 , 242 , 118]*1e-3 ;          % [m] Vector of the radii of curvature of the tubes (index i for tube i)

% ====================================
% ================




% ================
% ======== Stiffness features ========

coeff_poiss = 0.3 ;                             % Poisson's ratio

% 2 options (not both)

% ==== option n°1
R           = [0.978 , 0.762 , 0.59]*1e-3 ;     % [m] External radius of the tubes (index i for tube i)
r           = [0.884 , 0.648 , 0.445]*1e-3 ;    % [m] Internal radius of the tubes (index i for tube i)
E           = 6.5e+10 ;                         % [Pa] Young modulus (the same for all the tubes)
stiff       = CTCR_Geom_2_Stiff(nbT,E,R,r) ;    % [N.m2] Computation of the vector of the transversal bending stiffness (index i for tube i)

% ==== option n°2
%stiff       = [0.0155 , 0.0082 , 0.0042] ;     % [N.m2] Direct entry of the vector of transversal bending stiffness (index i for tube i)

% ====================================
% ================




% ================
% ============ Actuation =============

theta_c     = [pi , pi/2 , -pi/2] ;             % [rad] Rotation of the tubes (index i for tube i)
beta_c      = [90 , 126  , 161  ]*1e-3  ;       % [m] Translation of the tubes (index i for tube i)

% ====================================
% ================



% ================
% ============= Preloads ==============

tau_tip     = [0 , 0 , 0] ;                     % [N.m] Bending moment applied on the tip of the robot  
f_tip       = [0 , 0 , 0] ;                     % [N] Force applied on the tip of the robot 

load_lim_1  = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
tau_dist_1  = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
f_dist_1    = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
    
load_lim_2  = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
tau_dist_2  = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
f_dist_2    = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 

% ====================================
% ================




% ================
% ======== Solving parameters ========

nb_digits       = 64 ;                          % Precision of symbolic computations involving variable-precision arithmetic

select_opt      = 'fsolve_Bu_lit' ;             % Method for solving the BVP : 'fsolve_Bu_lit' = Using fsolve function and the optimization jacobian computed by the LLDPM
                                                %                              'fsolve_Bu_num' = Using fsolve function and the optimization jacobian computed by the finite diffrences
                                                %                              'manual'        = Using a custom solver

tol_opt         = 1e-15 ;                       % Stopping criterion for solving the BVP (𝜖 in the paper see Table 5)

resolution      = 0.01 ;                        % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
nb_pt_dict      = 3 ;                           % Number of points before and after each discontinuity points (see Table 5)
resol_pt_disct  = 1e-05 ;                       % [m] Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)
    
% ====================================
% ================








% ============================================================== %
% ======================== Initialization ====================== %
% ============================================================== %

    
simulation_param    = SimulationParam(resolution , tol_opt , nb_digits , resol_pt_disct , nb_pt_dict , [] , []) ;

ctcr_carac          = CTCRCarac(nbT , stiff , coeff_poiss , Rc , Lr , Lc , Lr+Lc) ;
ctcr_act            = CTCRAct(beta_c , theta_c) ;
ctcr_load           = CTCRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
    
flag_ctcr           = CTCR_Setting_OK(ctcr_carac , ctcr_act , false) ;
 




% ============================================================== %
% =================== Quasi-static shape model ================= %
% ============================================================== %

if flag_ctcr

    IC = zeros(ctcr_carac.nbT+6,1) ;            % Initial value for yu(0) (see Table 5) 

    [ctcr_construc , ctcr_shape , mem_bvp , bvp_prop , mem_deriv_propag_low , simulation_param , bool_problem_opt] ...
    = CTCR_Shape( ...
    IC , select_opt , simulation_param , ctcr_carac , ctcr_act , ctcr_load , true) ;
    
end





% ============================================================== %
% ==================== Plot tubes and robot ==================== %
% ============================================================== %


Global_Plot(flag_ctcr,bool_problem_opt,name,ctcr_carac,ctcr_construc,ctcr_shape,ctcr_load) ;



    
      


% ============================================================== %
% =========== Compute generalized compliance matrix ============ %
% ============================================================== %



% ================
% ==== Jacobian and/or compliance ====

bool_J      = true ;                            % [boolean] Compute the joint Jacobian ?  
bool_Cs0    = true ;                            % [boolean] Compute the generalized compliance matrix ?

% ====================================
% ================    





% ================
% ====== Discretization points =======

% 3 options

% ==== option n°1 : compute the compliance on every points
bool_full_LIT = true ;                          % [boolean] Compute the generalized compliance matrix on all the discretization points (all s and all s0) ?  

% ==== option n°2 : compute the compliance on a percentage of the points
bool_pourc_LIT  = false ;                       % [boolean] Compute the generalized compliance matrix on a percentage of the robot discretization points (all s and percentage of s0) ?  
pourc_s0_LIT    = 0 ; %20 ;                     % [%] Percentage of the robot discretization points on which the generalized compliance matrix will be computed

% ==== option n°3 : compute the compliance on specific points
bool_custom_LIT  = false ;                      % [boolean] Compute the generalized compliance matrix on specific points of the robot discretization (all s and specific s0) ?  
index_s0_LIT    = [0,0] ;                       % Vector of the point indexes (s0) on which the generalized compliance matrix will be computed

% ====================================
% ================     
        

        
    
simulation_param = ...
CTCR_S0_Manag( ...
bool_full_LIT,bool_pourc_LIT,bool_custom_LIT,[],[],[], ...
index_s0_LIT,[],pourc_s0_LIT,[],ctcr_construc,simulation_param) ;


if bool_J || bool_Cs0
        
    [mem_CJ , mem_deriv_propag_high , mem_deriv_propag_low , time_comp_CJ] ...
    = CTCR_Deriv_Propag(...
    bool_J , bool_Cs0 , ctcr_carac , ctcr_construc , ctcr_act , ctcr_load , mem_bvp , bvp_prop , simulation_param , mem_deriv_propag_low , true) ;
        
end
                
        
    

    
% ============================= %
% =========== Save ============ %
% ============================= %
    
cd(['DATA/',name]) ;
save(strcat(name,'_data.mat'))
cd ../..




