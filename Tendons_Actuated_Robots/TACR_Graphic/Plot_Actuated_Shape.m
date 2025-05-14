function [] = Plot_Actuated_Shape(name , tacr_carac , tacr_construc , mem_bvp)

    fig_act_shape                = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_act_shape.Color          = 'w';
    fig_act_shape.WindowState    = 'fullscreen' ;
    ax_fig                       = axes(fig_act_shape) ;

    TACR_Plot(ax_fig , tacr_carac , tacr_construc.mem_p0 , tacr_construc.mem_pi , mem_bvp.mem_y.mem_R0 , tacr_construc.vect_ind_iT , tacr_construc.vect_ind_iD)
    cd(['DATA/',name])
    saveas(fig_act_shape,strcat(name,'_act_shape.fig')) ;
    saveas(fig_act_shape,strcat(name,'_act_shape.png')) ;
    cd ../..
    close gcf
    
end