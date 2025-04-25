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
    
    Lr              = [60,80,100,120,140,160,180]*1e-3 ; %[60  , 100 , 140]*1e-3 ;          % [m] Vecttor of the straight lengths of the tubes (index i for tube i)
    Lc              = [50,50,50,50,50,50,50]*1e-3 ; %[50  , 50 , 50]*1e-3 ;            % [m] Vector of the curved lengths of the tubes (index i for tube i)
    Rc              = [60,60,60,60,60,60,60]*1e-3 ; %[60 , 60 , 60]*1e-3 ;             % [m] Vector of the radii of curvature of the tubes (index i for tube i)
    
    L               = (Lr(end)+Lc(end)) ; 
    nbT             = length(Lr) ; %3 ;                               % Number of tubes of the CTCR (nbT in the paper)

    % ================
    % ======== Stiffness features ========
    
    coeff_poiss     = 0.3 ;                             % Poisson's ratio
    R               = [1.2,1.1,1.0,0.9,0.8,0.7,0.6]*1e-3 ; %[0.9 , 0.8 , 0.7]*1e-3 ;          % [m] External radius of the tubes (index i for tube i)
    r               = [1.1,1.0,0.9,0.8,0.7,0.6,0.5]*1e-3 ; %[0.8 , 0.7 , 0.6]*1e-3 ;          % [m] Internal radius of the tubes (index i for tube i)
    E               = 6.5e10 ;                          % [Pa] Young modulus (the same for all the tubes)
    stiff           = CTCR_Geom_2_Stiff(nbT,E,R,r) ;    % [N.m2] Computation of the vector of the transversal bending stiffness (index i for tube i)
    
    % ================
    % ============ Actuation =============
    
    theta_c         = linspace(0,1,nbT)*(2*pi*(1-1/nbT)) ; %[3*pi/4 , 3*pi/4+pi/6 , 3*pi/4+2*pi/6] ;        % [rad] Rotation of the tubes (index i for tube i)
    beta_c          = [70,80,90,100,110,120,130]*1e-3 ; %[80 , 100 , 120]*1e-3  ;          % [m] Translation of the tubes (index i for tube i)
    
    % ================
    % ============== Loads ===============
    
    % tau_tip         = [0 , 0 , 0] ;                     % [N.m] Bending moment applied on the tip of the robot  
    % f_tip           = [0 , 0 , 0] ;                     % [N] Force applied on the tip of the robot 
    % load_lim_1      = [0 , 0]/100*L ;                   % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_1      = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
    % f_dist_1        = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
    % load_lim_2      = [0 , 0]/100*L ;                   % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_2      = [0 , 0 , 0] ;                     % [N.m] Distributed bending moment applied on the robot  
    % f_dist_2        = [0 , 0 , 0] ;                     % [N] Distributed force applied on the robot 
    

    tau_tip         = [-0.5,0.1,-0.3] ;                 % [N.m] Bending moment applied on the tip of the robot  
    f_tip           = [1 , -2 , 0.6] ;                  % [N] Force applied on the tip of the robot 
    load_lim_1      = [30 , 50]/100*L ;                 % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_1      = [-0.2 , 0.1 , 0.6] ;              % [N.m] Distributed bending moment applied on the robot  
    f_dist_1        = [-1.5 , 0.4 , 0.3] ;              % [N] Distributed force applied on the robot 
    load_lim_2      = [60 , 80]/100*L ;                 % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_2      = [0.2 , -0.1 , -0.6] ;             % [N.m] Distributed bending moment applied on the robot  
    f_dist_2        = [1.5 , -0.4 , -0.3] ;             % [N] Distributed force applied on the robot 
    



    % ================
    % ======== Solving parameters ========
    
    resolution              = 0.001  ;       % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
    Display                 = 'iter' ;       % 'Display' options of optimoptions
    FunctionTolerance       = 1e-1   ;       % 'FunctionTolerance' options of optimoptions
    StepTolerance           = 1e-1   ;       % 'StepTolerance' options of optimoptions
    MaxIter                 = 1000   ;       % 'MaxIter' options of optimoptions
    MaxFunctionEvaluations  = 10000  ;       % 'MaxFunctionEvaluations' options of optimoptions
    bool_opt_lit            = true   ;       % Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
    bool_SIC                = false   ;       % Using the Smart Initial Guess ?
    nb_pt_dict              = 3      ;       % Number of points before and after each discontinuity points
    resol_pt_disct          = 1e-05  ;       % [m] Discretization step near discontinuity points
    pt_s0_LIT               = 1      ;       % Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
    bool_J                  = true   ;       % (boolean) Compute the Joint Jacobian ?  
    bool_Cs0                = true   ;       % (boolean) Compute the Generalized Compliance Matrix ?
    bool_problem_opt        = false  ;       % Is there a problem solving the BVP ?
    bool_disp_terminal      = true   ;       % Do you want to print the results in the terminal ?


   



    % ================
    % ============== Extra : Force variation ===============

    % [%] Vector of the curvilinear abscissa of the contact points
    % /!\ in pourcentage of the CTCR length /!\ (row i for force i) 
    prc_s0              = [30, 70] ; %[30 ; 60] ;                        
    
    % [N] Matrix of the forces applied on the CTCR
    % (row i for vector force i)
    delta_f0            = [[-9, 1 , 0];[1.5, -3.5 , 0]] ; %[[-1 , 1 , 0] ; [0.5 , 1 , -1]] ;           
    
    
    % ============================================================== %
    % ======================== Initialization ====================== %
     
    ctcr_carac                  = CTCRCarac(nbT , stiff , coeff_poiss , Rc , Lr , Lc , Lr+Lc) ;
    ctcr_act                    = CTCRAct(beta_c , theta_c) ;
    ctcr_load                   = CTCRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
    flag_ctcr                   = CTCR_Setting_OK(ctcr_carac , ctcr_act , bool_disp_terminal) ;
    simulation_param            = SimulationParam(resolution , Display , FunctionTolerance , StepTolerance , MaxIter , MaxFunctionEvaluations , ...
                                                  bool_opt_lit , bool_SIC , nb_pt_dict , resol_pt_disct , pt_s0_LIT , bool_J , bool_Cs0 , ...   
                                                  flag_ctcr , bool_problem_opt , bool_disp_terminal) ;
    ctcr_construc               = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ;
    simulation_param.pt_s0_LIT  = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,ctcr_construc.nbP-ctcr_construc.ind_origin+1) ; 




    





    
    % ================
    % ==== Save the config file ====

    cd('CTCR_Config/') ;
    save(strcat(name,'_config.mat'))
    cd ..

    disp(' ') ; disp(' ') ; disp(' Configuration file successfully saved ')


end