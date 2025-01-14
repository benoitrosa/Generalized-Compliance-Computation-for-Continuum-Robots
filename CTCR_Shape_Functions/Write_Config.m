function [] = Write_Config(name)

       
% ======================================================================= %
% ======================================================================= %
%
% // ! \\         This function must be run in the root folder         // ! \\
% // ! \\   "Generalized-Compliance-Computaion-for-Continuum-Robots"   // ! \\
%
% This function creates a configuration file named "<name>_config.mat" 
% saved in the "CTCR_Config" folder.
%
% ====================
% ====== INPUTS ====== 
%
% name                  : (string) Name of the configuration
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %
    
    
    % ================
    % ======== Geometric features ========
    
    nbT             = 3 ;                               % Number of tubes of the CTCR (nbT in the paper)
    Lr              = [65  , 120 , 180]*1e-3 ;          % [m] Vecttor of the straight lengths of the tubes (index i for tube i)
    Lc              = [50  , 50 , 50]*1e-3 ;            % [m] Vector of the curved lengths of the tubes (index i for tube i)
    Rc              = [60 , 40 , 30]*1e-3 ;             % [m] Vector of the radii of curvature of the tubes (index i for tube i)
    
    % ================
    % ======== Stiffness features ========
    
    coeff_poiss     = 0.3 ;                             % Poisson's ratio
    R               = [0.978 , 0.762 , 0.591]*1e-3 ;    % [m] External radius of the tubes (index i for tube i)
    r               = [0.884 , 0.648 , 0.445]*1e-3 ;    % [m] Internal radius of the tubes (index i for tube i)
    E               = 6.5e10 ;                          % [Pa] Young modulus (the same for all the tubes)
    stiff           = CTCR_Geom_2_Stiff(nbT,E,R,r) ;    % [N.m2] Computation of the vector of the transversal bending stiffness (index i for tube i)
    
    % ================
    % ============ Actuation =============
    
    theta_c         = [3*pi/4 , 3*pi/4 , -pi/4] ;       % [rad] Rotation of the tubes (index i for tube i)
    beta_c          = [70 , 110 , 150]*1e-3  ;          % [m] Translation of the tubes (index i for tube i)
    
    % ================
    % ============== Loads ===============
    
    tau_tip         = [0 , 0 , 0] ;                     % [N.m] Bending moment applied on the tip of the robot  
    f_tip           = [0 , 0 , 0] ;                     % [N] Force applied on the tip of the robot 
    load_lim_1      = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_1      = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
    f_dist_1        = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
    load_lim_2      = [0 , 0] ;                         % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_2      = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
    f_dist_2        = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
    
    % ================
    % ======== Solving parameters ========
    
    tol_opt         = 1e-15 ;                           % Stopping criterion for solving the BVP (𝜖 in the paper see Table 5)
    resolution      = 0.001 ;                           % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
    nb_pt_dict      = 3 ;                               % Number of points before and after each discontinuity points (see Table 5)
    resol_pt_disct  = 1e-05 ;                           % [m] Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)
    
    
    % ================
    % ==== Joint Jacobian and/or Genrealized Compliance Matrix ====
    
    bool_J              = true ;                        % (boolean) Compute the Joint Jacobian ?  
    bool_Cs0            = true ;                        % (boolean) Compute the Generalized Compliance Matrix ?


    % ================
    % ==== Display in the terminal ====

    bool_disp_terminal  = true ;



    % ================
    % ============== Extra : Force variation ===============

    % [%] Vector of the curvilinear abscissa of the contact points
    % /!\ in pourcentage of the CTCR length /!\ (row i for force i) 
    prc_s0              = [30 ; 60] ;                        
    
    % [N] Matrix of the forces applied on the CTCR
    % (row i for vector force i)
    delta_f0            = [[-1 , 1 , 0] ; [0.5 , 1 , -1]] ;           
    
    
    % ============================================================== %
    % ======================== Initialization ====================== %
     
    ctcr_carac                  = CTCRCarac(nbT , stiff , coeff_poiss , Rc , Lr , Lc , Lr+Lc) ;
    ctcr_act                    = CTCRAct(beta_c , theta_c) ;
    ctcr_load                   = CTCRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
    flag_ctcr                   = CTCR_Setting_OK(ctcr_carac , ctcr_act , bool_disp_terminal) ;
    simulation_param            = SimulationParam(resolution , tol_opt , resol_pt_disct , nb_pt_dict , 1 , bool_J , bool_Cs0 , flag_ctcr , false , bool_disp_terminal) ;
    ctcr_construc               = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ;
    simulation_param.pt_s0_LIT  = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,ctcr_construc.nbP-ctcr_construc.ind_origin+1) ; 


    
    % ================
    % ==== Save the config file ====

    cd('CTCR_Config/') ;
    save(strcat(name,'_config.mat'))
    cd ..

    disp(' ') ; disp(' ') ; disp(' Configuration file successfully saved ')


end