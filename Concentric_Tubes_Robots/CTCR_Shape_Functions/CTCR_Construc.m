function ctcr_construc ...
         = CTCR_Construc( ...
         simulation_param , ctcr_carac , ctcr_act , ctcr_load)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the robot features which depend on the model settings
%
% ====================
% ====== INPUTS ====== 
%
% simulation_param      : (class) Model settings
% ctcr_carac            : (class) Robot features
% ctcr_act              : (class) Robot actuation
% ctcr_load             : (class) Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% ctcr_construc         : (class) Robot features related to the model settings
%
% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ================== Getting input values ================== %
    
    res_step                = simulation_param.res_step ;
    resol_pt_disct          = simulation_param.resol_pt_disct ;
    nb_pt_dict              = simulation_param.nb_pt_dict ;
    nbT                     = ctcr_carac.nbT ;
    stiff                   = ctcr_carac.stiff ;
    coeff_poiss             = ctcr_carac.coeff_poiss ;
    Rc                      = ctcr_carac.Rc ;
    Lc                      = ctcr_carac.Lc ;
    L                       = ctcr_carac.L ;
    theta_c                 = ctcr_act.theta_c ;
    beta_c                  = ctcr_act.beta_c ;
    load_lim_1              = ctcr_load.load_lim_1 ;
    tau_dist_1              = ctcr_load.tau_dist_1 ;
    f_dist_1                = ctcr_load.f_dist_1 ;
    load_lim_2              = ctcr_load.load_lim_2 ;
    tau_dist_2              = ctcr_load.tau_dist_2 ;
    f_dist_2                = ctcr_load.f_dist_2 ;

    % ========================================================== %
    % ========================================================== %





    % ========================================================== %

    % Construction of discretization points with regular steps
    % and reference on the origin of the base frame

    % ========================================================== %

    % Initialization of the discontinuity points
    disct_pt = zeros(1,(2*nb_pt_dict+1)*(nbT*3+1)) ;

    mem_lim_z = NaN*zeros(3*nbT,2) ;

    for iT = 1:nbT

        % Lower end
        disct_pt(((iT-1)*3+0)*(2*nb_pt_dict+1)+1 : ((iT-1)*3+1)*(2*nb_pt_dict+1)) = (beta_c(iT)-L(iT))*ones(1,2*nb_pt_dict+1) + linspace(-nb_pt_dict,nb_pt_dict,2*nb_pt_dict+1)*resol_pt_disct ;

        % Upper end
        disct_pt(((iT-1)*3+1)*(2*nb_pt_dict+1)+1 : ((iT-1)*3+2)*(2*nb_pt_dict+1)) = (beta_c(iT))*ones(1,2*nb_pt_dict+1) + linspace(-nb_pt_dict,nb_pt_dict,2*nb_pt_dict+1)*resol_pt_disct ;
        
        % Curvature
        disct_pt(((iT-1)*3+2)*(2*nb_pt_dict+1)+1 : ((iT-1)*3+3)*(2*nb_pt_dict+1)) = (max(0,beta_c(iT)-Lc(iT)))*ones(1,2*nb_pt_dict+1) + linspace(-nb_pt_dict,nb_pt_dict,2*nb_pt_dict+1)*resol_pt_disct ;
        
        % Memorize the limit z for each discontinuity point
        mem_lim_z((iT-1)*3+1,:) = (beta_c(iT)-L(iT))*ones(1,2) + [-nb_pt_dict,nb_pt_dict]*resol_pt_disct ;
        mem_lim_z((iT-1)*3+2,:) = (beta_c(iT))*ones(1,2) + [-nb_pt_dict,nb_pt_dict]*resol_pt_disct ;
        mem_lim_z((iT-1)*3+3,:) = (beta_c(iT)-Lc(iT))*ones(1,2) + [-nb_pt_dict,nb_pt_dict]*resol_pt_disct ;

    end

    % Adding the origin
    disct_pt(end-(2*nb_pt_dict+1)+1:end) = linspace(-nb_pt_dict,nb_pt_dict,2*nb_pt_dict+1)*resol_pt_disct ;

    % Remaining positive points
    nbP_plus = floor(max(beta_c)/res_step) ;

    % Remaining negative points
    nbP_minus = floor((max(L)-max(beta_c))/res_step) ;

    % Initialization
    vect_z = 0 ;

    % s < 0
    vect_z = [vect_z , -res_step*linspace(1,nbP_minus,nbP_minus)] ;

    % s > 0
    vect_z = [vect_z , res_step*linspace(1,nbP_plus,nbP_plus)] ;
    
    % Removing points generated if they are between high resolution ones
    for iz_lim = 1:length(mem_lim_z(:,1))
        temp_vect_z = vect_z((vect_z >= mem_lim_z(iz_lim,1))) ;
        temp_vect_z = temp_vect_z((temp_vect_z <= mem_lim_z(iz_lim,2))) ;
        
        vect_z      = sort(vect_z) ;
        temp_vect_z = sort(temp_vect_z) ;
        
        vect_z = setdiff(vect_z,temp_vect_z) ;
    end

    % Adding discontinuity points
    vect_z = [vect_z , disct_pt] ;

    % Removing points outside the robot except the first outside the robot
    vect_z = vect_z( vect_z >= - (L(nbT) - beta_c(nbT)) & vect_z <= beta_c(nbT) + resol_pt_disct) ;

    % Sort by ascending order
    vect_z = sort(vect_z) ;

    % Remove duplicates
    vect_z = unique(vect_z) ;

    % Finding the origin index
    ind_origin = find(vect_z>=0,1,'first') ;

    % Differential computation
    vect_res = diff(vect_z) ;

    % Deleting points too close
    tp_vect_z   = [vect_z(vect_res     > resol_pt_disct),vect_z(end)] ;
    tp_vect_res = vect_res(vect_res    > resol_pt_disct) ;
    %clear vect_z vect_res
    vect_z      = tp_vect_z ;
    vect_res    = tp_vect_res ;

    % Total number of points
    nbP = length(vect_z) ;





    % ========================================================== % 
    
    % Construction of the torque/force applied to the CTCR due
    % to the constant distributed torque/force

    % ========================================================== % 


    % ========================================================== %
    % ===================== DISTRIBUTION 1 ===================== %

    % Finding the index of the limits
    idx_load_lim_1 = [find(vect_z >= load_lim_1(1) , 1,'first') , find(vect_z <= load_lim_1(2) , 1,'last') ] ;
    
    if length(idx_load_lim_1) == 2 && (~isequal(tau_dist_1,zeros(1,3)) || ~isequal(f_dist_1,zeros(1,3)))

        % Checking if the idx were founded
        idx_load_lim_1(isempty(idx_load_lim_1)) = 1 ;
        
        % Construction of the matrix
        vect_tau_dist_1 = [zeros(3,idx_load_lim_1(1)-1) , ...
                           tau_dist_1'/(vect_z(idx_load_lim_1(2))-vect_z(idx_load_lim_1(1))).*ones(3,idx_load_lim_1(2)-idx_load_lim_1(1)) , ...
                           zeros(3,nbP-idx_load_lim_1(2)+1)] ;
            

        vect_f_dist_1 = [zeros(3,idx_load_lim_1(1)-1) , ...
                           f_dist_1'/(vect_z(idx_load_lim_1(2))-vect_z(idx_load_lim_1(1))).*ones(3,idx_load_lim_1(2)-idx_load_lim_1(1)) , ...
                           zeros(3,nbP-idx_load_lim_1(2)+1)] ;

       
    else
        vect_tau_dist_1 = zeros(3,nbP) ;
        vect_f_dist_1   = zeros(3,nbP) ;
    end

    % ========================================================== %
    % ===================== DISTRIBUTION 2 ===================== %

    % Finding the index of the limits
    idx_load_lim_2 = [find(vect_z >= load_lim_2(1) , 1,'first') , find(vect_z <= load_lim_2(2) , 1,'last') ] ;
    
    if length(idx_load_lim_2) == 2 && (~isequal(tau_dist_2,zeros(1,3)) || ~isequal(f_dist_2,zeros(1,3)))
        % Checking if the idx were founded
        idx_load_lim_2(isempty(idx_load_lim_2)) = 1 ;
        
        % Construction of the matrix
        vect_tau_dist_2 = [zeros(3,idx_load_lim_2(1)-1) , ...
                           tau_dist_2'/(vect_z(idx_load_lim_2(2))-vect_z(idx_load_lim_2(1))).*ones(3,idx_load_lim_2(2)-idx_load_lim_2(1)) , ...
                           zeros(3,nbP-idx_load_lim_2(2)+1)] ;

        vect_f_dist_2 = [zeros(3,idx_load_lim_2(1)-1) , ...
                           f_dist_2'/(vect_z(idx_load_lim_2(2))-vect_z(idx_load_lim_2(1))).*ones(3,idx_load_lim_2(2)-idx_load_lim_2(1)) , ...
                           zeros(3,nbP-idx_load_lim_2(2)+1)] ;

    else
        vect_tau_dist_2 = zeros(3,nbP) ;
        vect_f_dist_2   = zeros(3,nbP) ;
    end


    % ========================================================== %
    % =================== GLOBAL DISTRIBUTION ================== %

    vect_tau_dist = vect_tau_dist_1 + vect_tau_dist_2 ;
    vect_f_dist   = vect_f_dist_1 + vect_f_dist_2 ;



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

        ind_inf   = find(vect_z   >= beta_c(iT)-L(iT)      ,1,'first') ;
        ind_courb = find(vect_z   >= beta_c(iT)-Lc(iT)     ,1,'first') ;
        ind_sup   = find(vect_z   <= beta_c(iT)            ,1,'last') ;

        % Memorization
        % ============ NEW ============ %
        vect_ind_iT(iT,:) = [ind_inf , ind_courb , ind_sup] ;

        % Initial curvature matrix construction
        ui_init(1,max(ind_origin(1),ind_courb(1)):ind_sup(1),iT) = C(iT)*ones(1,ind_sup(1)-(max(ind_origin(1),ind_courb(1)))+1) ; % OLD:1*(iT==nbT)

        % Initial positions matrix construction
        pos_init(1,ind_inf(1):ind_sup(1),iT) = zeros(1,ind_sup(1)-ind_inf(1)+1) ;

        pos_init(2,ind_inf(1):ind_sup(1),iT) = [zeros(1,max(ind_origin(1),ind_courb(1))-ind_inf(1)+1) , ...
                                          -1/C(iT)+1/C(iT)*cos(C(iT)*(vect_z(max(ind_origin(1),ind_courb(1))+1:ind_sup(1))-vect_z(max(ind_origin(1),ind_courb(1))+1)) )] ;
        
        pos_init(3,ind_inf(1):ind_sup(1),iT) = [vect_z(ind_inf(1):max(ind_origin(1),ind_courb(1))) , ...
                                          vect_z(max(ind_origin(1),ind_courb(1)))+1/C(iT)*sin(C(iT)*(vect_z(max(ind_origin(1),ind_courb(1))+1:ind_sup(1))-vect_z(max(ind_origin(1),ind_courb(1))+1)) )] ;

        % Rotation of the whole tube iT because of the actuation
        mat_rot = rotz(theta_c(iT)) ;

        for iP = max(ind_origin(1),ind_courb(1)):ind_sup(1) %1*(iT==nbT)
            pos_init(:,iP,iT) = mat_rot*pos_init(:,iP,iT) ;

            ui_init(:,iP,iT) = mat_rot*ui_init(:,iP,iT) ;
        end

        % Construction of the stiffness matrix
        K(:,:,iT) = diag([stiff(iT), stiff(iT), stiff(iT)/(1+coeff_poiss)]) ;
    
    end

    vect_ind_iT(end,end) = nbP ;


    % ========================================================== %
    % ================== Setting output values ================= %

    ctcr_construc = CTCRConstruc(nbP , K , vect_ind_iT , ind_origin , ...
        vect_z , vect_res , ui_init , pos_init , vect_tau_dist , vect_f_dist ) ;

    % ========================================================== %
    % ========================================================== %







end