function CTCR_Plot_3D_Volume(curr_ax,ctcr_shape,ctcr_carac,ctcr_construc)
    
% ======================================================================= %
% ======================================================================= %
%
% This function plot the 3D shape of a CTCR with one color per tube.
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax               : (axes object) Axes of the figure on which the graph is plotted
% ctcr_shape            : (3x_) Robot 3D shape
% ctcr_carac            : (class) Robot features
% ctcr_construc         : (class) Robot features related to the model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %

    
    ctcr_shape      = ctcr_shape*1e3 ;
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

    for iT = 1:ctcr_carac.nbT
        
        Plot_Tube_3D(curr_ax,ctcr_shape(:,ctcr_construc.vect_ind_iT(iT,1):ctcr_construc.vect_ind_iT(iT,3))',R(iT), numPointsCircle,couleur(iT,:));
        
        % Add a virtual square for beautiful legend
        lgd(iT)  = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),couleur(iT,:),'DisplayName',['Tube n$^{\circ}$',num2str(iT)]) ;

    end

    % Editing the limits of the graph 
    xlimit          = max(abs(ctcr_shape(1,:))) ;
    ylimit          = max(abs(ctcr_shape(2,:))) ;
    zlimit_plus     = 1.5*max(ctcr_shape(3,:)) ;
    zlimit_minus    = 1.5*min(ctcr_shape(3,:)) ;
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
    legend(curr_ax,lgd,'Interpreter','latex','FontSize',25,'Location','eastoutside') ;
    view(curr_ax,45,45) ;
    set(curr_ax,'DataAspectRatio',[1 1 1]) ;
    grid(curr_ax,'on') ;
    curr_ax.GridLineWidth = 2 ;
    set(gca,'TickLabelInterpreter','latex','FontSize',30) ;

end