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
    
    L               = 300e-3 ;                              % Length of the robot [m]
    Li              = linspace(10,100,7)/100*L ;            % Lengths of the tendon w.r.t the central backbone [m] (index i for tendon i)
    Di              = [0,linspace(10,100,7)/100*L] ;        % Positions of the disks w.r.t the central backbone [m] (index i for disk i)
    nbT             = length(Li) ;                          % Number of tendons
    nbD             = length(Di) ;                          % Number of disks
    E               = 100e9 ;                               % Young modulus [Pa]
    
    nu              = 0.3 ;                                 % Poisson's ratio [Ø]
    rad             = 1e-3 ;                                % Backbone radius [m]
    rho             = 0 ;                                   % Equivalent mass density [kg/m^3]
    td_offset       = 10e-3 ;                               % Tendon offset [m]
    td_angle        = linspace(0,1,nbT)*(2*pi*(1-1/nbT)) ;  % Tendon angle [rad]

    bool_back_st    = false ;
    bool_tendon_st  = false ;
   


    % ================
    % ============ Actuation =============
    
    ti = [5,5,5,5,5,5,5] ;                            % [N] Vector of the tension in the tendons (index i for tendon i)
    

    
    % ================
    % ============== Loads ===============

    % tau_tip         = [0 , 0 , 0] ;                   % [N.m] Bending moment applied on the tip of the robot  
    % f_tip           = [0 , 0 , 0] ;                   % [N] Force applied on the tip of the robot 
    % load_lim_1      = [0 , 0]/100*L ;                 % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_1      = [0 , 0 , 0] ;                   % [N.m] Distributed bending moment applied on the robot  
    % f_dist_1        = [0 , 0 , 0] ;                   % [N] Distributed force applied on the robot 
    % load_lim_2      = [0 , 0]/100*L ;                 % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    % tau_dist_2      = [0 , 0 , 0] ;                   % [N.m] Distributed bending moment applied on the robot  
    % f_dist_2        = [0 , 0 , 0] ;                   % [N] Distributed force applied on the robot 
    
    tau_tip         = [-0.05 , -0.02 , 0.1] ;         % [N.m] Bending moment applied on the tip of the robot  
    f_tip           = [0.5 , -1 , 0.75] ;             % [N] Force applied on the tip of the robot 
    load_lim_1      = [20 , 40]/100*L ;               % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_1      = [0.5 , -0.2 , 0.05] ;           % [N.m] Distributed bending moment applied on the robot  
    f_dist_1        = [-1 , 1 , 0.5] ;                % [N] Distributed force applied on the robot 
    load_lim_2      = [70 , 80]/100*L ;               % [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
    tau_dist_2      = [-0.5 , 0.2 , -0.05] ;          % [N.m] Distributed bending moment applied on the robot  
    f_dist_2        = [1 , -1 , -0.5] ;               % [N] Distributed force applied on the robot  



    % ================
    % ======== Solving parameters ========
    
    resolution              = 0.001  ;       % [m] Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
    Display                 = 'iter' ;       % 'Display' options of optimoptions
    FunctionTolerance       = 1e-6   ;       % 'FunctionTolerance' options of optimoptions
    StepTolerance           = 1e-6   ;       % 'StepTolerance' options of optimoptions
    MaxIter                 = 1000   ;       % 'MaxIter' options of optimoptions
    MaxFunctionEvaluations  = 10000  ;       % 'MaxFunctionEvaluations' options of optimoptions
    bool_opt_lit            = true   ;       % Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
    bool_SIC                = true   ;       % Using the Smart Initial Guess ?
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
     
    prc_s0              = [80] ;  
    
    % [N] Matrix of the forces applied on the CTCR
    % (row i for vector force i)
    delta_f0            = [-1 , 0.75 , 0.5] ;



    
    
    % ============================================================== %
    % ======================== Initialization ====================== %
     
    tacr_carac                  = TACRCarac(nbT , nbD , L , Li , Di , E , nu , rad , rho , td_offset , td_angle) ;
    tacr_act                    = TACRAct(ti) ;
    tacr_load                   = TACRLoad(tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2) ;
    simulation_param            = SimulationParam(resolution , Display , FunctionTolerance , StepTolerance , MaxIter , MaxFunctionEvaluations , ...
                                                  bool_opt_lit , bool_SIC , nb_pt_dict , resol_pt_disct , pt_s0_LIT , bool_J , bool_Cs0 , ...   
                                                  bool_problem_opt , bool_disp_terminal) ;
    tacr_construc               = TACR_Construc(simulation_param , tacr_carac , tacr_load , bool_back_st , bool_tendon_st) ;
    simulation_param.pt_s0_LIT  = linspace(1,tacr_construc.nbP,tacr_construc.nbP) ; 
    


    
    % ================
    % ==== Save the config file ====

    cd('TACR_Config/') ;
    save(strcat(name,'_config.mat'))
    cd ..

    disp(' ') ; disp(' ') ; disp(' Configuration file successfully saved ')


end