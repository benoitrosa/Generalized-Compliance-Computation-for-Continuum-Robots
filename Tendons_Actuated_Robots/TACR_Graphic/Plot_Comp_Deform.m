function [] = Plot_Comp_Deform(name , ...
                               mem_bvp , mem_bvp_def_mod , mem_bvp_def_jacob , ...
                               tacr_construc , tacr_construc_def_mod , tacr_construc_def_jacob , ...
                               tacr_carac , mem_is0 , delta_f0)

    fig_deform                  = figure('units','normalized','outerposition',[0 0 1 1]) ;
    fig_deform.Color            = 'w';
    fig_deform.WindowState      = 'fullscreen' ;
    curr_ax                     = axes(fig_deform) ;

    TACR_Plot_3(curr_ax , ...
                mem_bvp.mem_y.mem_R0 , mem_bvp_def_mod.mem_y.mem_R0 , mem_bvp_def_jacob.mem_y.mem_R0 , ...
                tacr_construc , tacr_construc_def_mod , tacr_construc_def_jacob , ...
                tacr_carac , mem_is0 , delta_f0) ;  

    cd(['DATA/',name])
    saveas(fig_deform,strcat(name,'_deform_shape.fig')) ;  
    saveas(fig_deform,strcat(name,'_deform_shape.png')) ;
    cd ../..
    close gcf

end