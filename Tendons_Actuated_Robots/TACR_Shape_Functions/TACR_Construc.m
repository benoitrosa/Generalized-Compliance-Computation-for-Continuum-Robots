function tacr_construc = TACR_Construc(simulation_param , tacr_carac , tacr_load , bool_back_st , bool_tendon_st)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the robot features which depend on the model settings
%
% ====================
% ====== INPUTS ====== 
%
% simulation_param      : (class) Model settings
% tacr_carac            : (class) Robot features
% tacr_act              : (class) Robot actuation
% tacr_load             : (class) Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% tacr_construc         : (class) Robot features related to the model settings
%
% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ================== Getting input values ================== %
    
    res_step                = simulation_param.res_step ;

    nbT                     = tacr_carac.nbT            ;
    nbD                     = tacr_carac.nbD            ;
    L                       = tacr_carac.L              ;
    Li                      = tacr_carac.Li             ;
    Di                      = tacr_carac.Di             ;
    load_lim_1              = tacr_load.load_lim_1      ;
    tau_dist_1              = tacr_load.tau_dist_1      ;
    f_dist_1                = tacr_load.f_dist_1        ;
    load_lim_2              = tacr_load.load_lim_2      ;
    tau_dist_2              = tacr_load.tau_dist_2      ;
    f_dist_2                = tacr_load.f_dist_2        ;
    

    % ========================================================== %
    % ========================================================== %





    % ========================================================== %
    % Construction of discretization points with regular steps
    %      and reference on the origin of the base frame
    % ========================================================== %

    % Remaining positive points
    tp_nbP  = floor(L/res_step) ;

    vect_z      = res_step*linspace(1,tp_nbP,tp_nbP) ;
    vect_z      = [0 , vect_z , L] ;

    % Sort by ascending order
    vect_z      = sort(vect_z) ;

    % Remove duplicates
    vect_z      = unique(vect_z) ;

    % Computation of the step size
    vect_res    = diff(vect_z) ;

    % Deleting points too close
    tp_vect_z   = [vect_z(vect_res     > simulation_param.opt_tol),vect_z(end)] ;
    tp_vect_res = vect_res(vect_res    > simulation_param.opt_tol) ;
    
    vect_z          = tp_vect_z ;
    vect_res        = tp_vect_res ;
    vect_res(end+1) = vect_res(end) ;

    % Total number of points
    nbP             = length(vect_z) ;
    



    % ========================================================== %
    %     Construction of the matrix of discontinuity points     %
    %             index for the tendons and the disks            %
    % ========================================================== %

    vect_ind_iT = zeros(nbT,1) ;
    vect_ind_iD  = zeros(nbD,1) ;
    
    for iT = 1:nbT
        vect_ind_iT(iT)   = find(vect_z   <= Li(iT) ,1,'last') ;
    end

    for iD = 1:nbD
        vect_ind_iD(iD)   = find(vect_z   <= Di(iD) ,1,'last') ;
    end

    


    % ========================================================================== % 
    %    Construction of the vectors defining the tendons and backbone routing   %
    % ========================================================================== %


    % ================================================= %
    % ============ Central backbone routing =========== %
    %          /!\/!\ In the global frame /!\/!\        %
    % ================================================= %


    if bool_back_st

        % ================================== %
        % ==== Example : Straight backbone
    
        mem_p0_init                 = [zeros(2,nbP) ; vect_z] ;

    else

        % ================================== %
        % ==== Example : Constantly curved  backbone
    
        R       = 500*1e-3 ;
        theta   = linspace(0, tacr_carac.L/R, nbP) ;
        Y       = - R + R * cos(theta) ;
        Z       = R * sin(theta) ;
    
        mem_p0_init     = [zeros(1,nbP);Y;Z] ;

    end


    mem_p0 = mem_p0_init ;




    % ================================================= %
    % ================ Tendons routing ================ %
    %         /!\/!\ In the floating frame /!\/!\       %
    % ================================================= %

    mem_ri      = zeros(3 , nbT , nbP)  ; 

    if bool_tendon_st

        % ================================== %
        % ==== Example : Straight tendons
    
        for iT = 1:nbT
            tp_ri                               = rot(tacr_carac.td_offset , tacr_carac.td_angle(iT)) ;
            mem_ri(:,iT,1:vect_ind_iT(iT))      = reshape(tp_ri.*ones(3,vect_ind_iT(iT)),3,1,[]) ;
        end

    else

        % ================================== %
        % ==== Example : Spiral tendons

        for iT = 1:nbT
            theta       = 2*pi*vect_z(1:vect_ind_iT(iT))/L ;
            Xi          = tacr_carac.td_offset * cos(theta+tacr_carac.td_angle(iT)) ;
            Yi          = tacr_carac.td_offset * sin(theta+tacr_carac.td_angle(iT)) ;

            mem_ri(:,iT,1:vect_ind_iT(iT))  = reshape([Xi;Yi;zeros(1,vect_ind_iT(iT))],3,1,[])  ; 

        end

    end




    % ================================== %
    % ==== Computing tendon routing derivatives

    mem_dri_ds = zeros(3,nbT,nbP) ;

    for iT = 1:nbT

        % Reshaping the derivatives components
        rix = reshape(mem_ri(1,iT,1:vect_ind_iT(iT)),1,[]) ;
        riy = reshape(mem_ri(2,iT,1:vect_ind_iT(iT)),1,[]) ;
        riz = reshape(mem_ri(3,iT,1:vect_ind_iT(iT)),1,[]) ;

        % Numerical derivatives
        drix_ds = gradient(rix,vect_z(1:vect_ind_iT(iT))) ;
        driy_ds = gradient(riy,vect_z(1:vect_ind_iT(iT))) ;
        driz_ds = gradient(riz,vect_z(1:vect_ind_iT(iT))) ;
        
        % Selecting the abscissa relted to the tendon iT
        s_util = vect_z(1:vect_ind_iT(iT)-1) ;
        
        % Adding the last derivative using extrapolation
        drix_ds_itp = interp1(s_util, drix_ds(:,1:end-1).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;
        driy_ds_itp = interp1(s_util, driy_ds(:,1:end-1).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;
        driz_ds_itp = interp1(s_util, driz_ds(:,1:end-1).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;

        % Concatenating the components of the vector
        mem_dri_ds(1,iT,1:vect_ind_iT(iT)) = reshape(drix_ds_itp,1,1,[]) ;
        mem_dri_ds(2,iT,1:vect_ind_iT(iT)) = reshape(driy_ds_itp,1,1,[]) ;
        mem_dri_ds(3,iT,1:vect_ind_iT(iT)) = reshape(driz_ds_itp,1,1,[]) ;

    end

    
    mem_ddri_ds = zeros(3,nbT,nbP) ;

    for iT = 1:nbT
        
        % Reshaping the derivatives components
        drix_ds = reshape(mem_dri_ds(1,iT,1:vect_ind_iT(iT)),1,[]) ;
        driy_ds = reshape(mem_dri_ds(2,iT,1:vect_ind_iT(iT)),1,[]) ;
        driz_ds = reshape(mem_dri_ds(3,iT,1:vect_ind_iT(iT)),1,[]) ;

        % Numerical derivatives
        ddrix_dsds = gradient(drix_ds,vect_z(1:vect_ind_iT(iT))) ;
        ddriy_dsds = gradient(driy_ds,vect_z(1:vect_ind_iT(iT))) ;
        ddriz_dsds = gradient(driz_ds,vect_z(1:vect_ind_iT(iT))) ;
        
        % Selecting the abscissa relted to the tendon iT
        s_util = vect_z(1:vect_ind_iT(iT)-2) ;
        
        % Adding the two last derivatives using extrapolation
        ddrix_dsds_itp = interp1(s_util, ddrix_dsds(:,1:end-2).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;
        ddriy_dsds_itp = interp1(s_util, ddriy_dsds(:,1:end-2).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;
        ddriz_dsds_itp = interp1(s_util, ddriz_dsds(:,1:end-2).', vect_z(1:vect_ind_iT(iT)), 'linear', 'extrap')' ;

        % Concatenating the components of the vector
        mem_ddri_ds(1,iT,1:vect_ind_iT(iT)) = reshape(ddrix_dsds_itp,1,1,[]) ;
        mem_ddri_ds(2,iT,1:vect_ind_iT(iT)) = reshape(ddriy_dsds_itp,1,1,[]) ;
        mem_ddri_ds(3,iT,1:vect_ind_iT(iT)) = reshape(ddriz_dsds_itp,1,1,[]) ;

    end



    % ========================================================================== % 
    %        Computing initial positions, curvatures and rotation matrices       %
    % ========================================================================== %


    [mem_u0_init, mem_R0_init]  = pos_2_curv_rot(mem_p0_init, vect_res) ;
    mem_v0_init = [0;0;1].*ones(3,nbP) ;

    mem_pi_init     = zeros(3,nbT,nbP)      ;
    mem_ui_init     = zeros(3,nbT,nbP)      ;
    mem_Ri_init     = zeros(3,3,nbT,nbP)    ;

    for iT = 1:nbT

        for is = 1:nbP
            mem_pi_init(:,iT,is) = mem_p0_init(:,is) + mem_R0_init(:,:,is)*mem_ri(:,iT,is) ;
        end

        [tp_mem_ui_init, tp_mem_Ri_init]  = pos_2_curv_rot(reshape(mem_pi_init(:,iT,:),3,[]), vect_res) ;
        mem_ui_init(:,iT,:)     = reshape(tp_mem_ui_init,3,1,[])    ;
        mem_Ri_init(:,:,iT,:)   = reshape(tp_mem_Ri_init,3,3,1,[])  ;
    end

    mem_pi = mem_pi_init ;






    






    % ========================================================== % 
    %  Construction of the torque/force applied to the TACR due  %
    %         to the constant distributed torque/force           %
    % ========================================================== % 


    % ========================================================== %
    % ===================== Distribution 1 ===================== %

    % Finding the index of the limits
    idx_load_lim_1 = [find(vect_z >= load_lim_1(1) , 1,'first') , find(vect_z <= load_lim_1(2) , 1,'last') ] ;
    
    if length(idx_load_lim_1) == 2 && (~isequal(tau_dist_1,zeros(1,3)) || ~isequal(f_dist_1,zeros(1,3)))

        % Checking if the idx were founded
        idx_load_lim_1(isempty(idx_load_lim_1)) = 1 ;
        
        % Construction of the matrix
        vect_tau_dist_1 = [zeros(3,idx_load_lim_1(1)-1) , ...
                           tau_dist_1'/(vect_z(idx_load_lim_1(2))-vect_z(idx_load_lim_1(1))).*ones(3,idx_load_lim_1(2)-idx_load_lim_1(1)) , ...
                           zeros(3,nbP-idx_load_lim_1(2)+1)] ;
            

        vect_f_dist_1   = [zeros(3,idx_load_lim_1(1)-1) , ...
                           f_dist_1'/(vect_z(idx_load_lim_1(2))-vect_z(idx_load_lim_1(1))).*ones(3,idx_load_lim_1(2)-idx_load_lim_1(1)) , ...
                           zeros(3,nbP-idx_load_lim_1(2)+1)] ;

       
    else
        vect_tau_dist_1     = zeros(3,nbP) ;
        vect_f_dist_1       = zeros(3,nbP) ;
    end

    % ========================================================== %
    % ===================== Distribution 2 ===================== %

    % Finding the index of the limits
    idx_load_lim_2 = [find(vect_z >= load_lim_2(1) , 1,'first') , find(vect_z <= load_lim_2(2) , 1,'last') ] ;
    
    if length(idx_load_lim_2) == 2 && (~isequal(tau_dist_2,zeros(1,3)) || ~isequal(f_dist_2,zeros(1,3)))
        % Checking if the idx were founded
        idx_load_lim_2(isempty(idx_load_lim_2)) = 1 ;
        
        % Construction of the matrix
        vect_tau_dist_2 = [zeros(3,idx_load_lim_2(1)-1) , ...
                           tau_dist_2'/(vect_z(idx_load_lim_2(2))-vect_z(idx_load_lim_2(1))).*ones(3,idx_load_lim_2(2)-idx_load_lim_2(1)) , ...
                           zeros(3,nbP-idx_load_lim_2(2)+1)] ;

        vect_f_dist_2   = [zeros(3,idx_load_lim_2(1)-1) , ...
                           f_dist_2'/(vect_z(idx_load_lim_2(2))-vect_z(idx_load_lim_2(1))).*ones(3,idx_load_lim_2(2)-idx_load_lim_2(1)) , ...
                           zeros(3,nbP-idx_load_lim_2(2)+1)] ;

    else
        vect_tau_dist_2     = zeros(3,nbP) ;
        vect_f_dist_2       = zeros(3,nbP) ;
    end


    % ========================================================== %
    % =================== GLOBAL DISTRIBUTION ================== %

    vect_tau_dist   = vect_tau_dist_1 + vect_tau_dist_2 ;
    vect_f_dist     = vect_f_dist_1   + vect_f_dist_2   ;



    


    % ========================================================== %
    % ================== Setting output values ================= %

                   

    tacr_construc = TACRConstruc(nbP           , vect_z            , vect_res    , ...
                                 vect_ind_iT   , vect_ind_iD       , ...
                                 mem_ri        , mem_dri_ds        , mem_ddri_ds , ...
                                 mem_u0_init   , mem_v0_init       , mem_ui_init , ...
                                 mem_p0_init   , mem_pi_init       , ...
                                 mem_p0        , mem_pi            , ...
                                 mem_R0_init   , mem_Ri_init       , ...
                                 vect_tau_dist , vect_f_dist) ;

    % ========================================================== %
    % ========================================================== %







end