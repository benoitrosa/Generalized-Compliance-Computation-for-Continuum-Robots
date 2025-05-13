function [] = Write_Config_mex(name)

       
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
    
    Lr              = [80,90,100,110,120,130,140]*1e-3 ;                      % [m] Vecttor of the straight lengths of the tubes (index i for tube i)
    Lc              = [80,80,80,80,80,80,80]*1e-3 ;                        % [m] Vector of the curved lengths of the tubes (index i for tube i)
    Rc              = [100,100,100,100,100,100,100]*1e-3 ;                         % [m] Vector of the radii of curvature of the tubes (index i for tube i)    
    nbT             = length(Lr) ;                                  % Number of tubes of the CTCR (nbT in the paper)



    % ================
    % ======== Stiffness features ========
    
    coeff_poiss     = 0.3 ;                                         % Poisson's ratio
    R               = [0.9,0.8,0.7,0.6,0.5,0.4,0.3]*1e-3 ;                      % [m] External radius of the tubes (index i for tube i)
    r               = [0.8,0.7,0.6,0.5,0.4,0.3,0.2]*1e-3 ;                      % [m] Internal radius of the tubes (index i for tube i)
    E               = 65e9 ;                                        % [Pa] Young modulus (the same for all the tubes)
    stiff           = CTCR_Geom_2_Stiff(nbT,E,R,r) ;                % [N.m2] Computation of the vector of the transversal bending stiffness (index i for tube i)
    


    % ================
    % ============ Actuation =============
    
    theta_c         = linspace(0,pi,7) ;      % [rad] Rotation of the tubes (index i for tube i)
    beta_c          = [100,105,110,115,120,125,130]*1e-3  ;                     % [m] Translation of the tubes (index i for tube i)
    



    % ================
    % ============== Loads ===============
    
    % tau_tip         = [0 , 0 , 0] ;                                 % [N.m] Bending moment applied on the tip of the robot  
    % f_tip           = [0 , 0 , 0] ;                                 % [N] Force applied on the tip of the robot 
    % load_lim_1      = [0 , 0]/100*L ;                               % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_1      = [0 , 0 , 0] ;                                 % [N.m] Distributed bending moment applied on the robot  
    % f_dist_1        = [0 , 0 , 0] ;                                 % [N] Distributed force applied on the robot 
    % load_lim_2      = [0 , 0]/100*L ;                               % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_2      = [0 , 0 , 0] ;                                 % [N.m] Distributed bending moment applied on the robot  
    % f_dist_2        = [0 , 0 , 0] ;                                 % [N] Distributed force applied on the robot 
    

    tau_tip         = [-0.005 , 0.02 , -0.01] ;                     % [N.m] Bending moment applied on the tip of the robot  
    f_tip           = [-0.2 , -0.2 , 0.04] ;                        % [N] Force applied on the tip of the robot 
    load_lim_1      = [20 , 40]/100*beta_c(end) ;                   % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_1      = [0.001 , -0.005 , 0.01] ;                     % [N.m] Distributed bending moment applied on the robot  
    f_dist_1        = [-1.2 , -0.8 , 0.03] ;                        % [N] Distributed force applied on the robot 
    load_lim_2      = [60 , 80]/100*beta_c(end) ;                   % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_2      = [0.07 , -0.01 , -0.02] ;                      % [N.m] Distributed bending moment applied on the robot  
    f_dist_2        = [0.15 , -0.5 , -0.09] ;                       % [N] Distributed force applied on the robot 
    



    % ================
    % ======== Solving parameters ========
    
    resolution              = 0.004  ;                              % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
    bool_display_iter       = false  ;                              % (boolean) Display the iteration of fsolve ?
    FunctionTolerance       = 10*eps ;                              % 'FunctionTolerance' options of optimoptions
    StepTolerance           = 10*eps ;                              % 'StepTolerance' options of optimoptions
    MaxIter                 = 5e0    ;                              % 'MaxIter' options of optimoptions
    MaxFunctionEvaluations  = 1e2    ;                              % 'MaxFunctionEvaluations' options of optimoptions
    bool_opt_lit            = true   ;                              % Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
    bool_SIC                = true   ;                              % Using the Smart Initial Guess ?
    nb_pt_dict              = 5      ;                              % Number of points before and after each discontinuity points
    resol_pt_disct          = 1e-7   ;                              % [m] Discretization step near discontinuity points
    pt_s0_LIT               = 1      ;                              % Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
    bool_J                  = true   ;                              % (boolean) Compute the Joint Jacobian ?  
    bool_Cs0                = true   ;                              % (boolean) Compute the Generalized Compliance Matrix ?
    bool_problem_opt        = false  ;                              % Is there a problem solving the BVP ?
    bool_disp_terminal      = true   ;                              % Do you want to print the results in the terminal ?


   



    % ================
    % ============== Extra : Force variation for linearized deformations ===============

    prc_s0              = [30, 70] ;                        % [% of the CTCR length] Vector of the curvilinear abscissa of the contact points (row i for force i)                   
    delta_f0            = [[-0.8, 0.1 , 0];[0.1, -0.2 , 0]] ;   % [N] Matrix of the forces applied on the CTCR (row i for vector force i)  
    
    


    % ============================================================== %
    % ======================== Initialization ====================== %
     
    ctcr_carac                  = CTCRCarac(nbT , stiff , coeff_poiss , Rc , Lr , Lc , Lr+Lc) ;
    ctcr_act                    = CTCRAct(beta_c , theta_c) ;
    ctcr_load                   = CTCRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
    flag_ctcr                   = CTCR_Setting_OK(ctcr_carac , ctcr_act , bool_disp_terminal) ;
    simulation_param            = SimulationParam(resolution , bool_display_iter , FunctionTolerance , StepTolerance , MaxIter , MaxFunctionEvaluations , bool_opt_lit , bool_SIC , nb_pt_dict , resol_pt_disct , pt_s0_LIT , bool_J , bool_Cs0 , flag_ctcr , bool_problem_opt , bool_disp_terminal) ;
    ctcr_construc               = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ;
    simulation_param.pt_s0_LIT  = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,ctcr_construc.nbP-ctcr_construc.ind_origin+1) ; 




    





    
    % ================
    % ==== Save the config file ====

    cd('CTCR_Config/') ;
    save(strcat(name,'_config.mat'))
    cd ..

    disp(' ') ; disp(' ') ; disp(' Configuration file successfully saved ')


end