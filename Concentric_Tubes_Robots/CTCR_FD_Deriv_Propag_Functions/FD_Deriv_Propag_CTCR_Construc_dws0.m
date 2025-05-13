function ctcr_construc ...
         = FD_Deriv_Propag_CTCR_Construc_dws0( ...
         simulation_param , ctcr_carac , ctcr_act , ctcr_construc_init)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%



    % ========================================================== %
    % ================== Getting input values ================== %
    
    res_step            = simulation_param.res_step ;
    digits_length       = simulation_param.digits_length ;
    epsilon_disct_pt    = simulation_param.epsilon_disct_pt ;
    nb_disct_pt         = simulation_param.nb_disct_pt ;

    nbT                 = ctcr_carac.nbT ;
    stiff               = ctcr_carac.stiff ;
    coeff_poiss         = ctcr_carac.coeff_poiss ;
    Rc                  = ctcr_carac.Rc ;
    L                   = ctcr_carac.L ;
    Lc                  = ctcr_carac.Lc ;

    theta_c             = ctcr_act.theta_c ;
    beta_c              = ctcr_act.beta_c ;

    % ========================================================== %
    % ========================================================== %




    digits(digits_length) ;

    % ========================================================== %

    % Construction of discretization points with regular steps
    % and reference on the origin of the base frame

    % ========================================================== %

    % Initialization of the discontinuity points
    disct_pt = zeros(1,(2*nb_disct_pt+1)*nbT*3+2*nb_disct_pt+1) ;

    for iT = 1:nbT

        % Lower end
        disct_pt((iT-1)*(2*nb_disct_pt+1)*nbT+1:(iT-1)*(2*nb_disct_pt+1)*nbT+(2*nb_disct_pt+1)) = (beta_c(iT)-L(iT))*ones(1,2*nb_disct_pt+1) + linspace(-nb_disct_pt,nb_disct_pt,2*nb_disct_pt+1)*epsilon_disct_pt ;

        % Upper end
        disct_pt((iT-1)*(2*nb_disct_pt+1)*nbT+(2*nb_disct_pt+1)+1:(iT-1)*(2*nb_disct_pt+1)*nbT+2*(2*nb_disct_pt+1)) = (beta_c(iT))*ones(1,2*nb_disct_pt+1) + linspace(-nb_disct_pt,nb_disct_pt,2*nb_disct_pt+1)*epsilon_disct_pt ;
        
        % Début de courbure
        disct_pt((iT-1)*(2*nb_disct_pt+1)*nbT+2*(2*nb_disct_pt+1)+1:(iT-1)*(2*nb_disct_pt+1)*nbT+3*(2*nb_disct_pt+1)) = (max(0,beta_c(iT)-Lc(iT)))*ones(1,2*nb_disct_pt+1) + linspace(-nb_disct_pt,nb_disct_pt,2*nb_disct_pt+1)*epsilon_disct_pt ;
        
    end

    % Adding the origin
    disct_pt(end-(2*nb_disct_pt+1)+1:end) = linspace(-nb_disct_pt,nb_disct_pt,2*nb_disct_pt+1)*epsilon_disct_pt ;

    % Remaining positive points
    nbP_plus = floor(max(beta_c)/res_step) ;

    % Remaining negative points
    nbP_minus = floor((max(L)-max(beta_c))/res_step) ;

    % Initialization
    vect_z = [] ;

    % s < 0
    vect_z = [vect_z , -res_step*linspace(1,nbP_minus,nbP_minus)] ;

    % s > 0
    vect_z = [vect_z , res_step*linspace(1,nbP_plus,nbP_plus)] ;

    % Adding discontinuity points
    vect_z = [vect_z , disct_pt] ;

    % Removing points outside the robot except the first outside the robot
    vect_z = vect_z( vect_z >= - (L(nbT) - beta_c(nbT)) & vect_z <= beta_c(nbT) + epsilon_disct_pt) ;

    % Sort by ascending order
    vect_z = sort(vect_z) ;

    % Remove duplicates
    vect_z = unique(vect_z) ;

    % Finding the origin index
    ind_origin = find(vect_z>=0,1,'first') ;

    % Differential computation
    vect_res = diff(vect_z) ;

    % Deleting points too close
    tp_vect_z   = [vect_z(vect_res     > simulation_param.opt_tol),vect_z(end)] ;
    tp_vect_res = vect_res(vect_res   > simulation_param.opt_tol) ;
    clear vect_z vect_res
    vect_z      = tp_vect_z ;
    vect_res    = tp_vect_res ;

    % Total number of points
    nbP = length(vect_z) ;





    % ========================================================== % 
    
    % Construction of the torque/force applied to the CTCR due to the 
    % constant distributed torque/force

    % ========================================================== % 

    % Construction of the matrix
    vect_tau_dist = ctcr_construc_init.vect_tau_dist ;
    vect_f_dist   = ctcr_construc_init.vect_f_dist ;





    % ========================================================== %

    % Construction of the matrix of discontinuity points index and the
    % initial curvature and positions matrix

    % ========================================================== %

    % Initialisation
    ui_init = zeros(3,nbP,nbT) ;
    pos_init = NaN*zeros(3,nbP,nbT) ;
    vect_ind_iT = zeros(nbT,3) ;
   
    % Initialisation of the stiffness matrix 
    K = zeros(3,3,nbT) ;

    % Curvature computation
    C = 1./Rc ;

    % Finding the index of the discontinuity points for each tube
    for iT = 1:nbT

        ind_inf = find(vect_z   >= beta_c(iT)-L(iT)        ,1,'first') ;
        ind_courb = find(vect_z >= beta_c(iT)-Lc(iT) ,1,'first') ;
        ind_sup = find(vect_z   >= beta_c(iT)              ,1,'first') ;

        % Memorization
        % ============ NEW ============ %
        vect_ind_iT(iT,:) = [ind_inf , ind_courb , ind_sup] ;

        % Initial curvature matrix construction
        ui_init(1,max(ind_origin,ind_courb):ind_sup,iT) = [C(iT)*ones(1,ind_sup-(max(ind_origin,ind_courb))),0] ;

        % Initial positions matrix construction
        pos_init(1,ind_inf:ind_sup,iT) = zeros(1,ind_sup-ind_inf+1) ;

        pos_init(2,ind_inf:ind_sup,iT) = [zeros(1,max(ind_origin,ind_courb)-ind_inf+1) , ...
                                          -1/C(iT)+1/C(iT)*cos(C(iT)*(vect_z(max(ind_origin,ind_courb)+1:ind_sup)-vect_z(max(ind_origin,ind_courb)+1)) )] ;

        pos_init(3,ind_inf:ind_sup,iT) = [vect_z(ind_inf:max(ind_origin,ind_courb)) , ...
                                          vect_z(max(ind_origin,ind_courb))+1/C(iT)*sin(C(iT)*(vect_z(max(ind_origin,ind_courb)+1:ind_sup)-vect_z(max(ind_origin,ind_courb)+1)) )] ;

        % Rotation of the whole tube iT because of the actuation
        mat_rot = rotz(theta_c(iT)) ;

        for iP = max(ind_origin,ind_courb):ind_sup
            pos_init(:,iP,iT) = mat_rot*pos_init(:,iP,iT) ;

            ui_init(:,iP,iT) = mat_rot*ui_init(:,iP,iT) ;
        end

        % Construction of the stiffness matrix
        K(:,:,iT) = diag([stiff(iT), stiff(iT), stiff(iT)/(1+coeff_poiss)]) ;
    
    end


    % ========================================================== %
    % ================== Setting output values ================= %

    ctcr_construc = CTCRConstruc(nbP , K , vect_ind_iT , ind_origin , ...
        vect_z , vect_res , ui_init , pos_init , vect_tau_dist , ...
        [] , vect_f_dist , [] ) ;

    % ========================================================== %
    % ========================================================== %








end