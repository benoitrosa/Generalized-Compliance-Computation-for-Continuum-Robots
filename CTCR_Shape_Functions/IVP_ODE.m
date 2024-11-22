function [mem_bvp , Trans] = IVP_ODE(is , simulation_param , ctcr_carac , ctcr_construc , mem_bvp)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ========================================================== %
    % ================== Getting input values ================== %
    
    opt_tol         = simulation_param.opt_tol ;
    nbT             = ctcr_carac.nbT ;    
    
    nbP             = ctcr_construc.nbP ;
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    vect_res        = ctcr_construc.vect_res ;
    ui_init         = ctcr_construc.ui_init ;
    vect_tau_dist   = ctcr_construc.vect_tau_dist ;
    vect_f_dist     = ctcr_construc.vect_f_dist ;

    theta           = mem_bvp.mem_y.mem_t(:,is) ;
    uz              = mem_bvp.mem_y.mem_uz(:,is) ;
    m0              = mem_bvp.mem_y.mem_m0(:,is) ;
    n0              = mem_bvp.mem_y.mem_n0(:,is) ;
    u0              = mem_bvp.mem_u0(:,is) ;

    Trans           = mem_bvp.mem_T(:,:,is) ;

    % ========================================================== %
    % ========================================================== %


    
    
      
    % Vector of the tubes involved on the current discretization point
    vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;


    if is < ind_origin

        % ====================================================== %
        % ======================== s < 0 ======================= %

        uixy    = zeros(2,1,nbT) ;
        m0_s    = zeros(3,1) ;
        n0_s    = zeros(3,1) ;
    
    else
        
        % ====================================================== %
        % ======================== s >= 0 ====================== %


        % ============== m0_s & n0_s computation =============== %

        if ~(is==nbP)

            % ====================================================== %
            % ================== m0_s computation ================== %

            m0_s    =  hat(u0)*m0 ...
                       - hat([0;0;1])*n0 ...
                       - Trans(1:3,1:3)'*vect_tau_dist(:,is) ;


            % ====================================================== %
            % ================== n0_s computation ================== %

            n0_s    = hat(u0)*n0 ...
                      - Trans(1:3,1:3)'*vect_f_dist(:,is) ;

        else

            m0_s = zeros(3,1) ;
            n0_s = zeros(3,1) ;

        end

    end


    % ====================================================== %
    % ============ s sign independant equations ============ %

    % Initialization
    theta_s     = zeros(nbT,1) ;
    uz_s        = zeros(nbT,1) ;
    uixy        = zeros(2,nbT) ;

    % ====================================================== %
    % ============ Loop for every involved tube ============ %
    
    

    for i = 1:length(vectT)
        iT = vectT(i) ;
        
        % Equation (4)
        theta_s(iT) = uz(iT) ;

        % Equation (16) with constant z stiffness
        temp            = rotz(theta(iT))'*u0 ;
        uixy(:,iT)      = temp(1:2,1) ;
        uz_s(iT)        = K(1,1,iT)/K(3,3,iT)*(uixy(:,iT)'*[ui_init(2,is,iT);-ui_init(1,is,iT)]) ; 

    end  

    % Rigid transformation matrix computation from vect_z(is) to vect_z(is+1)
    if ~(is==nbP)
        if is >= ind_origin
            Trans = LargeSE3(u0, [0;0;vect_res(is)],opt_tol,vect_res(is)) ;
        else
            Trans = [[1,0,0,0];[0,1,0,0];[0,0,1,vect_res(is)];[0,0,0,1]] ;
        end
    else
        Trans = zeros(4,4) ;
    end
    





    % ========================================================== %
    % ================== Setting output values ================= %

    mem_bvp.mem_ys.mem_ts(:,is)     = theta_s ;
    mem_bvp.mem_ys.mem_uzs(:,is)    = uz_s    ;
    mem_bvp.mem_ys.mem_m0s(:,is)    = m0_s    ;
    mem_bvp.mem_ys.mem_n0s(:,is)    = n0_s    ;
    
    mem_bvp.mem_uixy(:,:,is)        = uixy    ;

    % ========================================================== %
    % ========================================================== %



end