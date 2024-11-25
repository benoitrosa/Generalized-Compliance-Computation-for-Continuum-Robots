
function [] = ...
    Global_Plot( ...
    flag_ctcr,bool_problem_opt,name,ctcr_carac,ctcr_construc,ctcr_shape,ctcr_load)



    % ============================================================== %
    % ===================== Plot initial tubes ===================== %
    % ============================================================== %

    if flag_ctcr && ~bool_problem_opt

        fig_init_tub                = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_init_tub.Color          = 'w';
        fig_init_tub.WindowState    = 'fullscreen' ;
        ax_fig                      = axes(fig_init_tub) ;

        CTCR_Plot_Tubes(ax_fig , ctcr_carac , ctcr_construc) ;

        cd(['DATA/',name])
        saveas(fig_init_tub,strcat(name,'_Init_Tubes_3D_plot.fig')) ;
        saveas(fig_init_tub,strcat(name,'_Init_Tubes_3D_plot.png')) ;
        cd ../..

        close gcf


    end
    
            
    
    
    % ============================================================== %
    % ====================== Plot robot shape ====================== %
    % ============================================================== %
    
    if flag_ctcr && ~bool_problem_opt
    
        % ================
        % =========== Global plot ============
    
        fig_robot               = figure('units','normalized','outerposition',[0 0 1 1]) ;
        fig_robot.Color         = 'w';
        fig_robot.WindowState   = 'fullscreen' ;
        ax_fig                  = axes(fig_robot) ;
    
        CTCR_Plot_3D_Volume(ax_fig,ctcr_shape,ctcr_carac,ctcr_construc) ;
        
        cd(['DATA/',name])
        saveas(fig_robot,strcat(name,'_3D_plot.fig')) ;  
        saveas(fig_robot,strcat(name,'_3D_plot.png')) ;
        cd ../..
    
        close gcf
    
        % ====================================
        % ================
    
    
    
    
        % ================
        % ========== Plot with loads =========
    
        if ~isequal(ctcr_load.tau_tip, zeros(1,3)) || ...
           ~isequal(ctcr_load.f_tip, zeros(1,3)) || ...
           ~isequal(ctcr_load.tau_dist_1, zeros(1,3)) || ...
           ~isequal(ctcr_load.f_dist_1, zeros(1,3)) || ...
           ~isequal(ctcr_load.tau_dist_2, zeros(1,3)) || ...
           ~isequal(ctcr_load.f_dist_2, zeros(1,3))
        
            cd(['DATA/',name])
            filename = strcat(name,'_3D_plot.fig') ;
            fig_robot_load = CTCR_Load_Plot(filename,simulation_param,ctcr_carac,ctcr_load,ctcr_construc,ctcr_shape) ;
            cd ../..
        
            cd(['DATA/',name])
            saveas(fig_robot_load,strcat(name,'_3D_plot_ext_load.fig')) ;
            saveas(fig_robot_load,strcat(name,'_3D_plot_ext_load.png')) ;
            cd ../..
            
            close gcf
    
        end
    
        % ====================================
        % ================
       
    end


end
