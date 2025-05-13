function ctcr_construc ...
         = FD_Deriv_Propag_CTCR_Construc_Betac( ...
         ctcr_construc , ctcr_carac , ctcr_act , iJ , icol)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%



    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;
    theta_c         = ctcr_act.theta_c ;
    nbP             = ctcr_construc.nbP ;

    % ========================================================== %
    % ========================================================== %

    
    % ============================================================================== %
    % ====== Adapting vect_ind_iT for the current beta_c derivative vibration ====== %

    vect_ind_iT = ctcr_construc.vect_ind_iT ;

    % ===== Change the first index ===== %
    if iJ == 1 % Cas vibratio +
        %if ~(icol == nbT)
            vect_ind_iT(icol,1) = vect_ind_iT(icol,1) + 1 ;
        %end
    elseif iJ == 3 % Cas vibratio -
        if ~(icol == nbT)
            vect_ind_iT(icol,1) = vect_ind_iT(icol,1) - 1 ;
        end
    end



    % ===== Change the curvature index ===== %
    if iJ == 1 % Cas vibratio +
        vect_ind_iT(icol,2) = vect_ind_iT(icol,2) + 1 ;
    elseif iJ == 3 % Cas vibratio -
        vect_ind_iT(icol,2) = vect_ind_iT(icol,2) - 1 ;
    end

    % ===== Change the ending index ===== %
    if iJ == 1 % Cas vibratio +
        if ~(icol == nbT)
            vect_ind_iT(icol,3) = vect_ind_iT(icol,3) + 1 ;
        end
    elseif iJ == 3 % Cas vibratio -
        vect_ind_iT(icol,3) = vect_ind_iT(icol,3) - 1 ;
    end

%     % NEW
%     if icol == nbT
%         if iJ == 1
%             tp_vect_z = ctcr_construc.vect_z ;
%             ctcr_construc.vect_z = [tp_vect_z(2:end),tp_vect_z(end)+simulation_param.epsilon_disct_pt] ;
%     
%             tp_vect_res = ctcr_construc.vect_res ;
%             ctcr_construc.vect_res = [tp_vect_res(2:end),simulation_param.epsilon_disct_pt] ;
%         end
%     end



    % ====================================================================== %
    % ====================================================================== %


    ui_init     = ctcr_construc.ui_init             ;
    ind_sup     = vect_ind_iT(icol,3)               ;
    ind_courb   = vect_ind_iT(icol,2)               ;
    ind_origin  = ctcr_construc.ind_origin          ;
    Rc          = ctcr_carac.Rc(icol)               ;

    % Initial curvature matrix construction
    ui_init(:,:,icol) = zeros(3,nbP) ;
    ui_init(1,max(ind_origin,ind_courb):ind_sup,icol) = 1/Rc*ones(1,ind_sup-(max(ind_origin,ind_courb))+1) ; % OLD +1*(icol==nbT)

    % Rotation of the whole tube iT because of the actuation
    mat_rot = rotz(theta_c(icol)) ;

    for iP = max(ind_origin,ind_courb):ind_sup  %1*(iT==nbT)
        ui_init(:,iP,icol) = mat_rot*ui_init(:,iP,icol) ;
    end

    ctcr_construc.ui_init = ui_init ;
    ctcr_construc.vect_ind_iT = vect_ind_iT ;

