function TACR_Plot_3D_Volume(curr_ax,tacr_shape)
    
% ======================================================================= %
% ======================================================================= %
%
% This function plot the 3D shape of a TACR with one color per tube.
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax               : (axes object) Axes of the figure on which the graph is plotted
% tacr_shape            : (3x_) Robot 3D shape
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

    
    tacr_shape      = tacr_shape*1e3 ;
    R               = [2.5,2.15,2,1.75,1.5,1.25,1] ;
    numPointsCircle = 50 ;
    couleur                     = [[135,69,50]   ; ...
                                   [54,22,179]   ; ...
                                   [100,125,67]  ; ...
                                   [91,122,161]  ; ...
                                   [152,110,188] ; ...
                                   [198,183,33]  ; ...
                                   [51,158,160]  ; ]/255 ;

    hold(curr_ax,'on') ;
        
    Plot_Tube_3D(curr_ax,tacr_shape',R(1),numPointsCircle,couleur(1,:));


    % Editing the limits of the graph 
    xlimit          = max(abs(tacr_shape(1,:))) ;
    ylimit          = max(abs(tacr_shape(2,:))) ;
    zlimit_plus     = 1.5*max(tacr_shape(3,:)) ;
    zlimit_minus    = 1.5*min(tacr_shape(3,:)) ;
    xylimit         = 1.5*max(xlimit , ylimit) ;

    xlim(curr_ax,[-xylimit , xylimit]) ;
    ylim(curr_ax,[-xylimit , xylimit]) ;
    zlim(curr_ax,[zlimit_minus , zlimit_plus]) ;

    % Add the base reference
    fill3(curr_ax,5*R(1)*cos(-pi:0.01:pi),5*R(1)*sin(-pi:0.01:pi),zeros(1,numel(-pi:0.01:pi)),[0.5,0.5,0.5],'EdgeColor','k','LineWidth',1,'FaceAlpha',0.7) ;
    plot3(curr_ax,1.15*R(1)*cos(-pi:0.01:pi),1.15*R(1)*sin(-pi:0.01:pi),zeros(1,numel(-pi:0.01:pi)),'Color','k','LineWidth',1) ;
    
    hold(curr_ax,'off') ;

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

end