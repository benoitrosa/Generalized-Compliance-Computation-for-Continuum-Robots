function CTCR_Plot_3(curr_ax , ctcr_shape_init , ctcr_shape_def_1 , ctcr_shape_def_2, ctcr_carac , ctcr_construc , mem_is0 , delta_f0)

% ======================================================================= %
% ======================================================================= %
%
% This function plot 3 3D shapes of a CTCR with one color per tube :
% 1) A initial shape, eventually already deformed by a preload
%
% One (or multiple) forces variations are then applied on the CTCR and two other shapes are computed :
%
% 2) A deform shape, computed by the model
% 3) A deform shape, computed by deformation linearization thanks to the Generalized Compliance Matrix
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax               : (axes object) Axes of the figure on which the graph is plotted
% ctcr_shape_init       : (3 x nbP)     Initial CTCR shape before applying the force variation
% ctcr_shape_def_1      : (3 x nbP)     Deformed CTCR shape, due to the force variations, computed using the model
% ctcr_shape_def_2      : (3 x nbP)     Deformed CTCR shape, due to the force variations, computed using the Generalized Compliance Matrix
% ctcr_carac            : (class)       Robot features
% ctcr_construc         : (class)       Robot features related to the model settings
% mem_is0               : (nbF x 1)     Vector with the index of the loaded points
% delta_f0              : (nbF x 3)     Matrix with the force variaitons vectors (row i for force i)
%                       | with nbF : the number of forces applied on the CTCR
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %



    % ======== Preparing ======== %
    ctcr_shape_init         = ctcr_shape_init*1e3 ;
    ctcr_shape_def_1        = ctcr_shape_def_1*1e3 ;
    ctcr_shape_def_2        = ctcr_shape_def_2*1e3 ;
    R                       = [2,1.75,1.5,1.25,1] ;
    numPointsCircle         = 50 ;
    clr_init                = [[40,78,153] ; [84,114,174]  ; [135,156,198] ; [175,186,213] ; [203,210,227]]/255 ;
    clr_1                   = [[69,152,62] ; [112,176,107] ; [165,205,161] ; [191,215,185] ; [206,225,202]]/255 ;
    clr_2                   = [[161,66,33] ; [188,119,96]  ; [213,171,156] ; [216,189,177] ; [228,210,201]]/255 ;

    global fig ax
    fig     = gcf ;
    ax      = gca ;

    hold(curr_ax,'on') ;
    

    % ====================================================== %
    % ========= CTCR shape before force variation ========== %

    % ====== Shape init ====== % 
    for iT = 1:ctcr_carac.nbT
        Plot_Tube_3D(curr_ax,ctcr_shape_init(:,ctcr_construc.vect_ind_iT(iT,1):ctcr_construc.vect_ind_iT(iT,3))',R(iT), numPointsCircle,clr_init(iT,:));
        % Add a virtual square for beautiful legend
        lgd(iT)         = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),clr_init(iT,:),'DisplayName',['Tube n$^{\circ}$',num2str(iT),' initial']) ;
    end



    % ====================================================== %
    % ========== CTCR shape after force variation ========== %

    % ====== Shape 1 ====== % 
    for iT = 1:ctcr_carac.nbT
        Plot_Tube_3D(curr_ax,ctcr_shape_def_1(:,ctcr_construc.vect_ind_iT(iT,1):ctcr_construc.vect_ind_iT(iT,3))',R(iT), numPointsCircle,clr_1(iT,:));
        % Add a virtual square for beautiful legend
        lgd(iT+ctcr_carac.nbT)      = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),clr_1(iT,:),'DisplayName',['Tube n$^{\circ}$',num2str(iT),' deformed model']) ;
    end

    % ====== Shape 2 ====== % 
    for iT = 1:ctcr_carac.nbT
        Plot_Tube_3D(curr_ax,ctcr_shape_def_2(:,ctcr_construc.vect_ind_iT(iT,1):ctcr_construc.vect_ind_iT(iT,3))',R(iT), numPointsCircle,clr_2(iT,:));
        % Add a virtual square for beautiful legend
        lgd(iT+2*ctcr_carac.nbT)    = fill3(curr_ax,NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),clr_2(iT,:),'DisplayName',['Tube n$^{\circ}$',num2str(iT),' deformed compliance']) ;

    end



    % ================================= %
    % ====== Extract graph limits ===== %

    % Editing the limits of the graph 
    xlimit          = max(abs([ctcr_shape_def_1(1,:),ctcr_shape_def_2(1,:)])) ;
    ylimit          = max(abs([ctcr_shape_def_1(2,:),ctcr_shape_def_2(2,:)])) ;
    zlimit_plus     = 1.5*max([ctcr_shape_def_1(3,:),ctcr_shape_def_2(3,:)]) ;
    zlimit_minus    = 1.5*min([ctcr_shape_def_1(3,:),ctcr_shape_def_2(3,:)]) ;
    xylimit         = 1.5*max(xlimit , ylimit) ;

    xlim(curr_ax,[-xylimit , xylimit]) ;
    ylim(curr_ax,[-xylimit , xylimit]) ;
    zlim(curr_ax,[zlimit_minus , zlimit_plus]) ;

    % Add the base reference
    fill3(curr_ax,5*R(1)*cos(-pi:0.01:pi),5*R(1)*sin(-pi:0.01:pi),zeros(1,numel(-pi:0.01:pi)),[0.5,0.5,0.5],'EdgeColor','k','LineWidth',1,'FaceAlpha',0.7) ;
    plot3(curr_ax,1.15*R(1)*cos(-pi:0.01:pi),1.15*R(1)*sin(-pi:0.01:pi),zeros(1,numel(-pi:0.01:pi)),'Color','k','LineWidth',1) ;
    
    

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
            loaded_pt = ctcr_shape_init(:,mem_is0(i_f))' ;
            point_coord = delta_f0(i_f,1:3)/norm(delta_f0(i_f,1:3))*regl_arrow*max(max(xylimit,zlimit_plus),abs(zlimit_minus))*norm(delta_f0(i_f,1:3))/max_norm_force ;
            arrow3(loaded_pt-point_coord,loaded_pt,'5r-',width,width) ;
        end
    end

    hold(curr_ax,'off') ;
    legend(curr_ax,lgd,'Interpreter','latex','FontSize',25,'Location','eastoutside') ;

    
end

