function [] = Plot_Comp_Deform(name , ctcr_shape , ctcr_shape_def_mod , ctcr_shape_def_jacob , ...
                               ctcr_carac , ctcr_construc , mem_is0 , delta_f0)

    fig_deform                  = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_deform.Color            = 'w';
    fig_deform.WindowState      = 'fullscreen' ;
    curr_ax                     = axes(fig_deform) ;

    CTCR_Plot_3(curr_ax , ctcr_shape , ctcr_shape_def_mod , ctcr_shape_def_jacob  , ctcr_carac , ctcr_construc , mem_is0 , delta_f0) ;   
    cd(['DATA/',name])
    saveas(fig_deform,strcat(name,'_deform_shape.fig')) ;  
    saveas(fig_deform,strcat(name,'_deform_shape.png')) ;
    cd ../..
    close gcf

end