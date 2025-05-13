function [] = Plot_Initial_Tubes(name , ctcr_carac , ctcr_construc)
    
    fig_init_tub                = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_init_tub.Color          = 'w';
    fig_init_tub.WindowState    = 'fullscreen' ;
    ax_fig                      = axes(fig_init_tub) ;

    CTCR_Plot_Tubes(ax_fig , ctcr_carac , ctcr_construc) ;
    cd(['DATA/',name])
    saveas(fig_init_tub,strcat(name,'_init_tubes.fig')) ;
    saveas(fig_init_tub,strcat(name,'_init_tubes.png')) ;
    cd ../..
    close gcf

end