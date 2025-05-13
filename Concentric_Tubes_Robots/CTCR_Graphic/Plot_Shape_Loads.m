function [] = Plot_Shape_Loads(name , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , ctcr_shape)

    cd(['DATA/',name])
    filename        = strcat(name,'_shape.fig') ;
    fig_robot_load  = CTCR_Load_Plot(filename,simulation_param,ctcr_carac,ctcr_load,ctcr_construc,ctcr_shape) ;

    cd ../..
    cd(['DATA/',name])
    saveas(fig_robot_load,strcat(name,'_shape_loads.fig')) ;
    saveas(fig_robot_load,strcat(name,'_shape_loads.png')) ;
    cd ../..
    close gcf

end