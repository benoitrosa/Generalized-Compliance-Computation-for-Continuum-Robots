function TACR_Plot(curr_ax , tacr_carac , mem_p0 , mem_pi , mem_R0 , vect_ind_iT , vect_ind_iD)

% ======================================================================= %
% ======================================================================= %
%
% This function plots the TACR shape
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax               : (axes object) Axes of the figure on which the graph is plotted
% tacr_carac            : (class) Robot features
% tacr_construc         : (class) Robot features related to the model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %

    mem_p0   = mem_p0*1e3 ;
    mem_pi   = mem_pi*1e3 ;
    R                           = [2,1] ;
    nb_pt_circ                  = 50 ;
    couleur                     = [[135,69,50]   ; ...
                                   [54,22,179]   ; ...
                                   [100,125,67]  ; ...
                                   [91,122,161]  ; ...
                                   [152,110,188] ; ...
                                   [198,183,33]  ; ...
                                   [51,158,160]]/255 ;
    
    mem_pos_tot = [] ;


    % For each tendon
    hold(curr_ax,'on')

    mem_p0          = mem_p0(:,~isnan(mem_p0(1,:))) ;
    mem_pos_tot     = [mem_pos_tot,mem_p0] ;



    % ==============
    % ==== Plot the central backbone

    Plot_Tube_3D(curr_ax,mem_p0',R(1),nb_pt_circ,'k') ;

    lgd(1)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),'k','DisplayName','Central backbone') ;




    % ==============
    % ==== Plot the tendons
    
    for iT = 1:tacr_carac.nbT

        curr_mem_pi     = reshape(mem_pi(:,iT,1:vect_ind_iT(iT)),3,[]) ;
        curr_mem_pi     = curr_mem_pi(:,~isnan(curr_mem_pi(1,:))) ;
        mem_pos_tot     = [mem_pos_tot,curr_mem_pi] ;

        % Plot the conresponding range of the tube
        Plot_Tube_3D(curr_ax,curr_mem_pi',R(2),nb_pt_circ,couleur(iT,:)) ;

        lgd(iT+1)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),couleur(iT,:),'DisplayName',['Tendon n$^{\circ}$',num2str(iT)]) ;

    end



    % ==============
    % ==== Plot the disks

    thick = 4 ; % Thickness of the disks [mm]

    [X_disk, Y_disk, Z_disk] = cylinder(1.5*tacr_carac.td_offset*1e3 , nb_pt_circ) ;
    
    Z_disk  = Z_disk * thick - thick / 2 ;
    disk    = [X_disk(:), Y_disk(:), Z_disk(:)]' ; 


    for iD = 1:tacr_carac.nbD

        is          = vect_ind_iD(iD) ;
        rot_disk    = mem_R0(:,:,is) * disk + mem_p0(:,is) ;
    
        % Reshaper les matrices pour correspondre aux dimensions initiales
        X_rot = reshape(rot_disk(1, :), size(X_disk)) ;
        Y_rot = reshape(rot_disk(2, :), size(Y_disk)) ;
        Z_rot = reshape(rot_disk(3, :), size(Z_disk)) ;
            
        % Plot the obtained cross sections
        surf( curr_ax , X_rot(:,1:end) , Y_rot(:,1:end) , Z_rot(:,1:end)  , 'FaceColor' , 'k' , 'EdgeColor' , 'none' , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(1,:)     , Y_rot(1,:)     , Z_rot(1,:)      , 'k' , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;
        fill3(curr_ax , X_rot(end,:)   , Y_rot(end,:)   , Z_rot(end,:)    , 'k' , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 0.5) ;

    end


    % Editing the limits of the graph 
    xlimit          = max(abs(mem_pos_tot(1,:))) ;
    ylimit          = max(abs(mem_pos_tot(2,:))) ;
    zlimit_plus     = max(mem_pos_tot(3,:))+50 ;
    zlimit_minus    = min(mem_pos_tot(3,:))-50 ;

    xylimit         = max(xlimit , ylimit)+50 ;

    xlim(curr_ax,[-xylimit , xylimit]) ;
    ylim(curr_ax,[-xylimit , xylimit]) ;
    zlim(curr_ax,[zlimit_minus , zlimit_plus]) ;





    % ==============
    % ==== Plot the base reference

    theta   = linspace(0, 2*pi, nb_pt_circ) ;  

    R_ext   = 15*R(1) ;
    R_int   = 1.5*tacr_carac.td_offset*1e3 ;

    X_ext   = R_ext*cos(theta) ;
    Y_ext   = R_ext*sin(theta) ;
    X_int   = R_int*cos(theta) ;
    Y_int   = R_int*sin(theta) ;
    
    Z_int   = zeros(1,length(theta)) ;
    Z_ext   = zeros(1,length(theta)) ;
    
    points  = [X_ext, fliplr(X_int); Y_ext, fliplr(Y_int); Z_ext, fliplr(Z_int)] ;

    % Extraire les coordonnées transformées
    X       = reshape(points(1, :), 1, []) ;
    Y       = reshape(points(2, :), 1, []) ;
    Z       = reshape(points(3, :), 1, []) ;
    
    % Dessiner les faces supérieure et inférieure
    fill3(curr_ax , X, Y, Z, 'k', 'FaceAlpha', 0.5, 'EdgeColor', 'none', 'LineWidth', 2) ;
    plot3(curr_ax , X_ext, Y_ext, Z_ext, 'k', 'LineStyle', '-', 'LineWidth', 2) ;
    plot3(curr_ax , X_int, Y_int, Z_int, 'k', 'LineStyle', '-', 'LineWidth', 2) ;
    
    hold(curr_ax,'off') ;

    % Editing the axis title
    xlabel(curr_ax,'X [mm]','Interpreter','latex','FontSize',15) ;
    ylabel(curr_ax,'Y [mm]','Interpreter','latex','FontSize',15) ;
    zlabel(curr_ax,'Z [mm]','Interpreter','latex','FontSize',15) ;

    % Editing the 3D plot style
    legend(curr_ax,lgd,'Interpreter','latex','FontSize',25,'Location','eastoutside') ;

    view(curr_ax,45,45) ;
    set(curr_ax,'DataAspectRatio',[1 1 1]) ;
    grid(curr_ax,'on') ;
    curr_ax.GridLineWidth = 2 ;
    set(gca,'TickLabelInterpreter','latex','FontSize',30) ;

    
end