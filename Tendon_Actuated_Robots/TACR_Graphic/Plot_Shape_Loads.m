function [] = Plot_Shape_Loads(name , simulation_param , tacr_carac , tacr_load , tacr_construc , tacr_shape)

    cd(['DATA/',name])
    filename        = strcat(name,'_act_shape.fig') ;
    fig_robot_load  = TACR_Load_Plot(filename,simulation_param,tacr_carac,tacr_load,tacr_construc,tacr_shape) ;

    cd ../..
    cd(['DATA/',name])
    saveas(fig_robot_load,strcat(name,'_act_shape_loads.fig')) ;
    saveas(fig_robot_load,strcat(name,'_act_shape_loads.png')) ;
    cd ../..
    close gcf

end