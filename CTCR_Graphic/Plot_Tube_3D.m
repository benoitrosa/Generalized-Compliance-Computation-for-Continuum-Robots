function Plot_Tube_3D(curr_ax,curve,R,nb_pt_circ,color)

% ======================================================================= %
% ======================================================================= %
%
% This function plots the sweep of a circular cross section along a 3D curve
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax       : Axes of the figure on which the graph is plotted
% curve         : 3D curve along which the sweep is proceeded
% R             : Radius of the circular cross section
% nb_pt_circ    : Number of discretization points of the circular cross section
% color         : Color of the 3D plot
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %


    % ======= Preparing ======= %
    nb_pt_curv      = size(curve, 1) ;
    theta           = linspace(0, 2*pi, nb_pt_circ) ;
    out_circ        = R*[cos(theta) ; sin(theta)] ;
    X               = zeros(nb_pt_circ, nb_pt_curv) ;
    Y               = zeros(nb_pt_circ, nb_pt_curv) ;
    Z               = zeros(nb_pt_circ, nb_pt_curv) ;
    normal_prev     = [0,1,0] ;
    tangent_prev    = [0,0,1] ;

    for i = 2:nb_pt_curv-2
        
        p           = curve(i,:) ;                  % Current point of the curve
        tangent     = curve(i+1,:) - curve(i,:) ;   % Current local tangent
        
        if norm(tangent) == 0
            tangent = tangent_prev ;
        end
        tangent = tangent / norm(tangent) ;         % Unit vector

        % Avoiding cross section twist
        normal      = normal_prev - dot(normal_prev, tangent) * tangent ;
        normal      = normal / norm(normal) ;

        % Section orientation at the current point
        binormal        = cross(tangent, normal) ;
        rot_mat         = [normal ; binormal ; tangent] ;
        out_circ_3D     = rot_mat' * [out_circ;zeros(1, nb_pt_circ)] + p' ;
        X(:, i)         = [out_circ_3D(1,:)]' ;
        Y(:, i)         = [out_circ_3D(2,:)]' ;
        Z(:, i)         = [out_circ_3D(3,:)]' ;

        % Memory for next points
        normal_prev     = normal ;
        tangent_prev    = tangent ;
    end

    % Plot the obtained cross sections
    surf( curr_ax , X(:,2:end-2) , Y(:,2:end-2) , Z(:,2:end-2)  , 'FaceColor' , color , 'EdgeColor' , 'none' , 'FaceAlpha' , 1) ;
    fill3(curr_ax , X(:,2)       , Y(:,2)       , Z(:,2)        , color , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 1) ;
    fill3(curr_ax , X(:,end-2)   , Y(:,end-2)   ,Z(:,end-2)     , color , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 1) ;


    



end