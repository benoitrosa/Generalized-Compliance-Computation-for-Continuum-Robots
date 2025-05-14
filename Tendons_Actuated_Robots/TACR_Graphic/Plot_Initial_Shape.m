function [] = Plot_Initial_Shape(name , tacr_carac , tacr_construc)
    
    fig_init_shape                = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_init_shape.Color          = 'w';
    fig_init_shape.WindowState    = 'fullscreen' ;
    ax_fig                        = axes(fig_init_shape) ;

    TACR_Plot(ax_fig , tacr_carac , tacr_construc.mem_p0_init , tacr_construc.mem_pi_init , tacr_construc.mem_R0_init , tacr_construc.vect_ind_iT , tacr_construc.vect_ind_iD)
    cd(['DATA/',name])
    saveas(fig_init_shape,strcat(name,'_init_shape.fig')) ;
    saveas(fig_init_shape,strcat(name,'_init_shape.png')) ;
    cd ../..
    close gcf

end