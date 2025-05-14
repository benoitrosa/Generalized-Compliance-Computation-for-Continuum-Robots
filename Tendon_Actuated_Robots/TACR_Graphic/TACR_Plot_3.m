function TACR_Plot_3(curr_ax , ...
                     mem_R0_init , mem_R0_def_1 , mem_R0_def_2 , ...
                     tacr_construc_init , tacr_construc_def_1 , tacr_construc_def_2 , ...
                     tacr_carac , mem_is0 , delta_f0)

% ======================================================================= %
% ======================================================================= %
%
% This function plot 3 3D shapes of a TACR with one color per tube :
% 1) A initial shape, eventually already deformed by a preload
%
% One (or multiple) forces variations are then applied on the TACR and two other shapes are computed :
%
% 2) A deform shape, computed by the model
% 3) A deform shape, computed by deformation linearization thanks to the Generalized Compliance Matrix
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax               : (axes object) Axes of the figure on which the graph is plotted
% mem_R0_init           : (3 x 3 x nbP) Memory of the rotation matrix for the initial TACR shape
% mem_R0_def_1          : (3 x 3 x nbP) Memory of the rotation matrix for the deformed TACR shape, computed using the model
% mem_R0_def_2          : (3 x 3 x nbP) Memory of the rotation matrix for the deformed TACR shape, computed using the Generalized Compliance Matrix
% tacr_construc_init    : (class) Robot features related to the model settings for the initial TACR shape
% tacr_construc_def_1   : (class) Robot features related to the model settings for the deformed TACR shape, computed using the model
% tacr_construc_def_2   : (class) Robot features related to the model settings for the deformed TACR shape, computed using the Generalized Compliance Matrix
% tacr_carac            : (class)       Robot features
% mem_is0               : (nbF x 1)     Vector with the index of the loaded points
% delta_f0              : (nbF x 3)     Matrix with the force variaitons vectors (row i for force i)
%                       | with nbF : the number of forces applied on the TACR
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %



    % ======== Preparing ======== %

    numPointsCircle         = 50 ;
    color_init              = [[35,51,99]    ; ...
                               [44,66,126]   ; ...
                               [51,75,145]   ; ...
                               [54,81,155]   ; ...
                               [61,90,174]   ; ...
                               [71,105,203]  ; ...
                               [82,121,232]]/255 ;

    color_1                 = [[61,100,49]   ; ...
                               [76,126,61]   ; ...
                               [88,146,71]   ; ...
                               [100,165,80]  ; ...
                               [108,180,87]  ; ...
                               [124,206,100] ; ...
                               [141,235,114]]/255 ;

    color_2                 = [[101,48,28]   ; ...
                               [127,60,36]   ; ...
                               [145,69,41]   ; ...
                               [156,74,44]   ; ...
                               [179,84,50]   ; ...
                               [208,98,59]   ; ...
                               [235,111,66]]/255 ;



    thick = 4 ; % Thickness of the disks [mm]

    global fig ax
    fig     = gcf ;
    ax      = gca ;

    hold(curr_ax,'on') ;
    




    % ================================================================== %
    % =============== TACR shape before force variation ================ %


    % ================================
    % ======= Initialization

    mem_p0_init      = tacr_construc_init.mem_p0*1e3 ;
    mem_pi_init      = tacr_construc_init.mem_pi*1e3 ;


    % ================================
    % ======= Plot central backbone

    Plot_Tube_3D(curr_ax,mem_p0_init',tacr_carac.rad*1e3,numPointsCircle,color_init(1,:)) ;


    % ================================
    % ======= Plot tendons

    for iT = 1:tacr_carac.nbT

        curr_mem_pi     = reshape(mem_pi_init(:,iT,:),3,[]) ;
        curr_mem_pi     = curr_mem_pi(:,~isnan(curr_mem_pi(1,:))) ;

        Plot_Tube_3D(curr_ax,curr_mem_pi',tacr_carac.rad*1e3,numPointsCircle,color_init(2,:)) ;

    end


    % ================================
    % ======= Plot disks

    [X_disk, Y_disk, Z_disk] = cylinder(1.5*tacr_carac.td_offset*1e3 , numPointsCircle) ;
    
    Z_disk  = Z_disk * thick - thick / 2 ;
    disk    = [X_disk(:), Y_disk(:), Z_disk(:)]' ; 

    for iD = 1:tacr_carac.nbD

        is          = tacr_construc_init.vect_ind_iD(iD) ;
        rot_disk    = mem_R0_init(:,:,is) * disk + mem_p0_init(:,is) ;
    
        % Reshaper les matrices pour correspondre aux dimensions initiales
        X_rot = reshape(rot_disk(1, :), size(X_disk)) ;
        Y_rot = reshape(rot_disk(2, :), size(Y_disk)) ;
        Z_rot = reshape(rot_disk(3, :), size(Z_disk)) ;
            
        % Plot the obtained cross sections
        surf( curr_ax , X_rot(:,1:end) , Y_rot(:,1:end) , Z_rot(:,1:end)  , 'FaceColor' , color_init(3,:) , 'EdgeColor' , 'none' , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(1,:)     , Y_rot(1,:)     , Z_rot(1,:)      , color_init(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(end,:)   , Y_rot(end,:)   , Z_rot(end,:)    , color_init(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;

    end

    % Add a virtual square for beautiful legend
    lgd(1)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),color_init(1,:),'DisplayName','TACR initial') ;









    % ================================================================== %
    % ================ TACR shape after force variation ================ %


    % ======================================= %
    % =============== Shape 1 =============== %


    % ================================
    % ======= Initialization

    mem_p0_def_1      = tacr_construc_def_1.mem_p0*1e3 ;
    mem_pi_def_1      = tacr_construc_def_1.mem_pi*1e3 ;

    % ================================
    % ======= Plot central backbone

    Plot_Tube_3D(curr_ax,mem_p0_def_1',tacr_carac.rad*1e3,numPointsCircle,color_1(1,:)) ;


    % ================================
    % ======= Plot tendons

    for iT = 1:tacr_carac.nbT

        curr_mem_pi     = reshape(mem_pi_def_1(:,iT,:),3,[]) ;
        curr_mem_pi     = curr_mem_pi(:,~isnan(curr_mem_pi(1,:))) ;

        Plot_Tube_3D(curr_ax,curr_mem_pi',tacr_carac.rad*1e3,numPointsCircle,color_1(2,:)) ;

    end


    % ================================
    % ======= Plot disks

    [X_disk, Y_disk, Z_disk] = cylinder(1.5*tacr_carac.td_offset*1e3 , numPointsCircle) ;
    
    Z_disk  = Z_disk * thick - thick / 2 ;
    disk    = [X_disk(:), Y_disk(:), Z_disk(:)]' ; 

    for iD = 1:tacr_carac.nbD

        is          = tacr_construc_def_1.vect_ind_iD(iD) ;
        rot_disk    = mem_R0_def_1(:,:,is) * disk + mem_p0_def_1(:,is) ;
    
        % Reshaper les matrices pour correspondre aux dimensions initiales
        X_rot = reshape(rot_disk(1, :), size(X_disk)) ;
        Y_rot = reshape(rot_disk(2, :), size(Y_disk)) ;
        Z_rot = reshape(rot_disk(3, :), size(Z_disk)) ;
            
        % Plot the obtained cross sections
        surf( curr_ax , X_rot(:,1:end) , Y_rot(:,1:end) , Z_rot(:,1:end)  , 'FaceColor' , color_1(3,:) , 'EdgeColor' , 'none' , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(1,:)     , Y_rot(1,:)     , Z_rot(1,:)      , color_1(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(end,:)   , Y_rot(end,:)   , Z_rot(end,:)    , color_1(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;

    end

    % Add a virtual square for beautiful legend
    lgd(2)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),color_1(1,:),'DisplayName','TACR deformed model') ;






    % ======================================= %
    % =============== Shape 2 =============== %


    % ================================
    % ======= Initialization

    mem_p0_def_2      = tacr_construc_def_2.mem_p0*1e3 ;
    mem_pi_def_2      = tacr_construc_def_2.mem_pi*1e3 ;


    % ================================
    % ======= Plot central backbone

    Plot_Tube_3D(curr_ax,mem_p0_def_2',tacr_carac.rad*1e3,numPointsCircle,color_2(1,:)) ;


    % ================================
    % ======= Plot tendons

    for iT = 1:tacr_carac.nbT

        curr_mem_pi     = reshape(mem_pi_def_2(:,iT,:),3,[]) ;
        curr_mem_pi     = curr_mem_pi(:,~isnan(curr_mem_pi(1,:))) ;

        Plot_Tube_3D(curr_ax,curr_mem_pi',tacr_carac.rad*1e3,numPointsCircle,color_2(2,:)) ;

    end


    % ================================
    % ======= Plot disks

    [X_disk, Y_disk, Z_disk] = cylinder(1.5*tacr_carac.td_offset*1e3 , numPointsCircle) ;
    
    Z_disk  = Z_disk * thick - thick / 2 ;
    disk    = [X_disk(:), Y_disk(:), Z_disk(:)]' ; 

    for iD = 1:tacr_carac.nbD

        is          = tacr_construc_def_2.vect_ind_iD(iD) ;
        rot_disk    = mem_R0_def_2(:,:,is) * disk + mem_p0_def_2(:,is) ;
    
        % Reshaper les matrices pour correspondre aux dimensions initiales
        X_rot = reshape(rot_disk(1, :), size(X_disk)) ;
        Y_rot = reshape(rot_disk(2, :), size(Y_disk)) ;
        Z_rot = reshape(rot_disk(3, :), size(Z_disk)) ;
            
        % Plot the obtained cross sections
        surf( curr_ax , X_rot(:,1:end) , Y_rot(:,1:end) , Z_rot(:,1:end)  , 'FaceColor' , color_2(3,:) , 'EdgeColor' , 'none' , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(1,:)     , Y_rot(1,:)     , Z_rot(1,:)      , color_2(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(end,:)   , Y_rot(end,:)   , Z_rot(end,:)    , color_2(3,:) , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;

    end

    % Add a virtual square for beautiful legend
    lgd(3)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),color_2(1,:),'DisplayName','TACR deformed compliance') ;











    % ================================= %
    % ====== Extract graph limits ===== %

    % Editing the limits of the graph 
    xlimit          = max(abs([mem_p0_init(1,:),mem_p0_def_1(1,:),mem_p0_def_2(1,:)])) ;
    ylimit          = max(abs([mem_p0_init(2,:),mem_p0_def_1(2,:),mem_p0_def_2(2,:)])) ;
    zlimit_plus     = 1.5*max([mem_p0_init(3,:),mem_p0_def_1(3,:),mem_p0_def_2(3,:)]) ;
    zlimit_minus    = 2*min([mem_p0_init(3,:),mem_p0_def_1(3,:),mem_p0_def_2(3,:)]) ;
    xylimit         = 1.5*max(xlimit , ylimit) ;

    xlim(curr_ax,[-xylimit , xylimit]) ;
    ylim(curr_ax,[-xylimit , xylimit]) ;
    zlim(curr_ax,[zlimit_minus , zlimit_plus]) ;

   
    

    % ================================= %
    % ========== Graph style ========== %

    % Editing the axis title
    xlabel(curr_ax,'X [mm]','Interpreter','latex','FontSize',15) ;
    ylabel(curr_ax,'Y [mm]','Interpreter','latex','FontSize',15) ;
    zlabel(curr_ax,'Z [mm]','Interpreter','latex','FontSize',15) ;

    % Editing the 3D plot style
    
    view(curr_ax,45,45) ;
    set(curr_ax,'DataAspectRatio',[1 1 1]) ;
    grid(curr_ax,'on') ;
    curr_ax.GridLineWidth = 2 ;
    set(gca,'TickLabelInterpreter','latex','FontSize',30) ;

    % ====================================================== %
    % ================== Plot force arrows ================= %

    regl_arrow  = 0.2 ;
    width       = 2 ;

    max_norm_force = max(vecnorm(delta_f0,2,2)) ;
    for i_f = 1:length(mem_is0)
        if ~isequal(delta_f0(i_f,1:3),zeros(1,3))
            loaded_pt = mem_p0_init(:,mem_is0(i_f))' ;
            point_coord = delta_f0(i_f,1:3)/norm(delta_f0(i_f,1:3))*regl_arrow*max(max(xylimit,zlimit_plus),abs(zlimit_minus))*norm(delta_f0(i_f,1:3))/max_norm_force ;
            arrow3(loaded_pt-point_coord,loaded_pt,'5r-',width,width) ;
        end
    end

    hold(curr_ax,'off') ;
    legend(curr_ax,lgd,'Interpreter','latex','FontSize',25,'Location','eastoutside') ;

    
end

