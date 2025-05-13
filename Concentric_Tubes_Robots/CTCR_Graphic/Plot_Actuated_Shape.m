function [] = Plot_Actuated_Shape(name , ctcr_shape , ctcr_carac , ctcr_construc)

    fig_robot               = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_robot.Color         = 'w';
    fig_robot.WindowState   = 'fullscreen' ;
    ax_fig                  = axes(fig_robot) ;

    CTCR_Plot_3D_Volume(ax_fig,ctcr_shape,ctcr_carac,ctcr_construc) ;
    cd(['DATA/',name])
    saveas(fig_robot,strcat(name,'_shape.fig')) ;  
    saveas(fig_robot,strcat(name,'_shape.png')) ;
    cd ../..
    close gcf
    
end