function fig = CTCR_Load_Plot(filename , simulation_param , ctcr_carac , ctcr_load , ctcr_construc , ctcr_shape)

% ======================================================================= %
% ======================================================================= %
%
% This function opens the 3D shape plot file, add some arrows to visualize 
% the external loads and save a copy of the new file
%
% ====================
% ====== INPUTS ====== 
%
% filename              : (string)      Name of the CTCR 3D shape plot file
% simulation_param      : (class)       Model settings
% ctcr_carac            : (class)       Robot features
% ctcr_load             : (class)       Robot loads
% ctcr_construc         : (class)       Robot features related to the model settings
% ctcr_shape            : (3 x nbP)     Robot 3D shape
%
% ====================
% ===== OUTPUTS ====== 
%
% fig                   : (figure object) Object of the 3D shape plot file
%
% ======================================================================= %
% ======================================================================= %

    global fig ax

    regl_radius         = 0.05 ;
    regl_arrow          = 0.2 ;
    densite_distrib     = 5*simulation_param.res_step ;
    width               = 2 ;
    ctcr_shape          = ctcr_shape*1e3 ;

    if isfile(filename)
    
        if ~isequal(ctcr_load.tau_tip,zeros(1,3)) || ...
           ~isequal(ctcr_load.f_tip,zeros(1,3)) || ...
           ~isequal(ctcr_load.tau_dist_1,zeros(1,3)) || ...
           ~isequal(ctcr_load.f_dist_1,zeros(1,3)) || ...
           ~isequal(ctcr_load.tau_dist_2,zeros(1,3)) || ...
           ~isequal(ctcr_load.f_dist_2,zeros(1,3)) || ...
           ~(ctcr_load.load_lim_1(2)-ctcr_load.load_lim_1(1) == 0) || ...
           ~(ctcr_load.load_lim_2(2)-ctcr_load.load_lim_2(1) == 0)
            
            bool_file = true ;
            
        else

            bool_file = false ;

        end

        if bool_file
            openfig(filename) ;
    
            fig = gcf ;
            ax  = gca ;

            fig.WindowState   = 'fullscreen' ;

            hold on ;

            xy_limit    = max(abs([gca().XLim , gca().YLim])) ;
            z_minus     = gca().ZLim(1) ;
            z_plus      = gca().ZLim(2) ;
    
            % ====================================================== %
            % ===================== ftip arrow ===================== %
            if ~isequal(ctcr_load.f_tip,zeros(1,3))
        
                tip_point = ctcr_shape(:,end)' ;
                point_coord = ctcr_load.f_tip/norm(ctcr_load.f_tip)*regl_arrow*max(max(xy_limit,z_plus),abs(z_minus)) ;
    
                arrow3(tip_point-point_coord,tip_point,'5r-',width,width) ;
                
            end
    
    
    
            % ====================================================== %
            % ==================== tautip arrow ==================== %     
            if ~isequal(ctcr_load.tau_tip,zeros(1,3))
    
                tip_point = ctcr_shape(:,end)' ;
                rot_coord = ctcr_load.tau_tip/norm(ctcr_load.tau_tip)*pi ;
    
                radius      = regl_radius*max(max(xy_limit,z_plus),abs(z_minus)) ;
                th          = linspace(0,1.7*pi,15) ;
                x_circle    = radius*cos(th) ;
                y_circle    = radius*sin(th) ;
    
                pt_circle   = [x_circle ; y_circle ; zeros(1,length(x_circle))] ;
                
                for ip = 1:length(pt_circle(1,:))
                    pt_circle(:,ip) = large_SO3(rot_coord)*pt_circle(:,ip) ;
                end
    
                pt_circle = pt_circle + [tip_point(1) ; tip_point(2) ; tip_point(3)] ;
    
                plot3(ax,pt_circle(1,1:end-1) , pt_circle(2,1:end-1) , pt_circle(3,1:end-1) , 'r-' , 'LineWidth',3) ;
                arrow3(pt_circle(:,end-1)',pt_circle(:,end)'-pt_circle(:,end-1)','r',width,width,'cone') ;
                
            end
    
    
            % ====================================================== %
            % ==================== fdist_1 arrow =================== %
            if ~isequal(ctcr_load.f_dist_1,zeros(1,3))
    
                point_coord = ctcr_load.f_dist_1/norm(ctcr_load.f_dist_1)*regl_arrow*max(max(xy_limit,z_plus),abs(z_minus)) ;
        
                nb_point = floor((ctcr_load.load_lim_1(2) - ctcr_load.load_lim_1(1))/densite_distrib)+1 ;
                iP = 1 ;
                while iP <= nb_point
                    ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_1(1)+(iP-1)*densite_distrib , 1 , 'first') ;
                    curr_point = ctcr_shape(:,ind_i)' ;
    
                    arrow3(curr_point-point_coord,curr_point,'5b-',width,width) ;
    
                    iP = iP + 1 ;
                end
                
                ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_1(2), 1 , 'first') ;
                curr_point = ctcr_shape(:,ind_i)' ;
                arrow3(curr_point-point_coord,curr_point,'5b-',width,width) ;
            end
    
    
            % ====================================================== %
            % =================== taudist_1 arrow ================== %
            if ~isequal(ctcr_load.tau_dist_1,zeros(1,3))
    
                rot_coord = ctcr_load.tau_dist_1/norm(ctcr_load.tau_dist_1)*pi ;        
    
                radius      = regl_radius*max(max(xy_limit,z_plus),abs(z_minus)) ;
                th          = linspace(0,1.7*pi,15) ;
                x_circle    = radius*cos(th) ;
                y_circle    = radius*sin(th) ;
    
                pt_circle   = [x_circle ; y_circle ; zeros(1,length(x_circle))] ;
            
                for ip = 1:length(pt_circle(1,:))
                    pt_circle(:,ip) = large_SO3(rot_coord)*pt_circle(:,ip) ;
                end
    
                nb_point = floor((ctcr_load.load_lim_1(2) - ctcr_load.load_lim_1(1))/densite_distrib)+1 ;
                iP = 1 ;
                while iP <= nb_point
                    ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_1(1)+(iP-1)*densite_distrib , 1 , 'first') ;
                    curr_point = ctcr_shape(:,ind_i)' ;
   
                    curr_circle = pt_circle + [curr_point(1) ; curr_point(2) ; curr_point(3)] ;
    
                    plot3(ax,curr_circle(1,1:end-1) , curr_circle(2,1:end-1) , curr_circle(3,1:end-1) , 'b-' , 'LineWidth',3) ;
                    arrow3(curr_circle(:,end-1)',curr_circle(:,end)'-curr_circle(:,end-1)','b',width,width,'cone') ;
    
                    iP = iP + 1 ;
                end
                ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_1(2), 1 , 'first') ;
                curr_point = ctcr_shape(:,ind_i)' ;
                curr_circle = pt_circle + [curr_point(1) ; curr_point(2) ; curr_point(3)] ;

                plot3(ax,curr_circle(1,1:end-1) , curr_circle(2,1:end-1) , curr_circle(3,1:end-1) , 'b-' , 'LineWidth',3) ;
                arrow3(curr_circle(:,end-1)',curr_circle(:,end)'-curr_circle(:,end-1)','b',width,width,'cone') ;
            end

            % ====================================================== %
            % ==================== fdist_2 arrow =================== %
            if ~isequal(ctcr_load.f_dist_2,zeros(1,3))
    
                point_coord = ctcr_load.f_dist_2/norm(ctcr_load.f_dist_2)*regl_arrow*max(max(xy_limit,z_plus),abs(z_minus)) ;
        
                nb_point = floor((ctcr_load.load_lim_2(2) - ctcr_load.load_lim_2(1))/densite_distrib)+1 ;
                iP = 1 ;
                while iP <= nb_point
                    ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_2(1)+(iP-1)*densite_distrib , 1 , 'first') ;
                    curr_point = ctcr_shape(:,ind_i)' ;
    
                    arrow3(curr_point-point_coord,curr_point,'5g-',width,width) ;
    
                    iP = iP + 1 ;
                end
                ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_2(2), 1 , 'first') ;
                curr_point = ctcr_shape(:,ind_i)' ;

                arrow3(curr_point-point_coord,curr_point,'5g-',width,width) ;

            end
    
    
            % ====================================================== %
            % =================== taudist_2 arrow ================== %
            if ~isequal(ctcr_load.tau_dist_2,zeros(1,3))
    
                rot_coord = ctcr_load.tau_dist_2/norm(ctcr_load.tau_dist_2)*pi ;        
    
                radius      = regl_radius*max(max(xy_limit,z_plus),abs(z_minus)) ;
                th          = linspace(0,1.7*pi,15) ;
                x_circle    = radius*cos(th) ;
                y_circle    = radius*sin(th) ;
    
                pt_circle   = [x_circle ; y_circle ; zeros(1,length(x_circle))] ;
            
                for ip = 1:length(pt_circle(1,:))
                    pt_circle(:,ip) = large_SO3(rot_coord)*pt_circle(:,ip) ;
                end
    
                nb_point = floor((ctcr_load.load_lim_2(2) - ctcr_load.load_lim_2(1))/densite_distrib)+1 ;
                iP = 1 ;
                while iP <= nb_point
                    ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_2(1)+(iP-1)*densite_distrib , 1 , 'first') ;
                    curr_point = ctcr_shape(:,ind_i)' ;
    
                    curr_circle = pt_circle + [curr_point(1) ; curr_point(2) ; curr_point(3)] ;
    
                    plot3(ax,curr_circle(1,1:end-1) , curr_circle(2,1:end-1) , curr_circle(3,1:end-1) , 'g-' , 'LineWidth',3) ;
                    arrow3(curr_circle(:,end-1)',curr_circle(:,end)'-curr_circle(:,end-1)','g',width,width,'cone') ;
    
                    iP = iP + 1 ;
                end

                ind_i = find(ctcr_construc.vect_z >= ctcr_load.load_lim_1(2), 1 , 'first') ;
                curr_point = ctcr_shape(:,ind_i)' ;

                curr_circle = pt_circle + [curr_point(1) ; curr_point(2) ; curr_point(3)] ;
    
                plot3(ax,curr_circle(1,1:end-1) , curr_circle(2,1:end-1) , curr_circle(3,1:end-1) , 'g-' , 'LineWidth',3) ;
                arrow3(curr_circle(:,end-1)',curr_circle(:,end)'-curr_circle(:,end-1)','g',width,width,'cone') ;
            
            end
    
                
            % Matrix color plot initialization
            couleur = zeros(ctcr_carac.nbT,3) ;
            temp = colormap('jet') ;
            for iT = 1:ctcr_carac.nbT
                couleur(iT,:) = temp(round(iT*256/ctcr_carac.nbT) , :) ;
            end
            
            lgd = [] ;
            for i = 1:ctcr_carac.nbT
                iT = ctcr_carac.nbT-i+1 ;
                
                % Add a virtual square for beautiful legend
                lgd(iT)  = fill3(NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),couleur(iT,:),'DisplayName',['Tube n$^{\circ}$',num2str(iT)]) ;
    
            end
            lgd(ctcr_carac.nbT+1) = fill3(NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),'r','DisplayName','External tip force / torque') ;
            lgd(ctcr_carac.nbT+2) = fill3(NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),'b','DisplayName','External distributed force / torque n$^{\circ}1$') ;
            lgd(ctcr_carac.nbT+3) = fill3(NaN*zeros(1,4),NaN*zeros(1,4),NaN*zeros(1,4),'g','DisplayName','External distributed force / torque n$^{\circ}2$') ;
    
            hold off
    
            % Editing the 3D plot style
            legend(lgd,'Interpreter','latex','FontSize',25,'Location','eastoutside') ;
            view(45,45) ;
            set(gca,'DataAspectRatio',[1 1 1]) ;
            grid on ;
                            
        end
    
        if ~isfile(filename) && bool_file
            
            bool_file = false ;
            disp('========================== /!\ Figure does not exist for arrow force plot /!\ ===========================') ;
            disp('=========================================================================================================') ;
            
        end
    end

    
    
end