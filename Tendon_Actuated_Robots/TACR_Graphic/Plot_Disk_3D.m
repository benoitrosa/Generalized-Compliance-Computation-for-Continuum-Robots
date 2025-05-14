function Plot_Disk_3D(curr_ax,RO,diam,ep,color)

% ======================================================================= %
% ======================================================================= %
%
% This function plots the sweep of a circular cross section along a 3D curve
%
% ====================
% ====== INPUTS ====== 
%
% curr_ax       : (axes object)             Axes of the figure on which the graph is plotted
% curve         : (nbP x 3)                 3D curve along which the sweep is proceeded
% R             : (float)                   Radius of the circular cross section
% nb_pt_circ    : (int > 0)                 Number of discretization points of the circular cross section
% color         : (1 x 3 with coeff <1)     Color of the 3D plot
%
% ====================
% ===== OUTPUTS ====== 
%
% No output
%
% ======================================================================= %
% ======================================================================= %


    % ======= Preparing ======= %
    curve           = curve'                        ;
    nb_pt_curv      = size(curve, 2)                ;
    theta           = linspace(0, 2*pi, nb_pt_circ) ;
    out_circ        = [R*[cos(theta) ; sin(theta)];zeros(1, nb_pt_circ)]  ;
    X               = zeros(nb_pt_circ, nb_pt_curv) ;
    Y               = zeros(nb_pt_circ, nb_pt_curv) ;
    Z               = zeros(nb_pt_circ, nb_pt_curv) ;
    normal_prev     = [0;1;0]                       ;
    tangent_prev    = [0;0;1]                       ;

    for i = 1:nb_pt_curv-1
        
        p           = curve(:,i) ;                  % Current point of the curve
        tangent     = curve(:,i+1) - curve(:,i) ;   % Current local tangent
        
        if norm(tangent) == 0
            tangent = tangent_prev ;
        end
        tangent = tangent / norm(tangent) ;         % Unit vector

        % Avoiding cross section twist
        normal      = normal_prev - dot(normal_prev, tangent) * tangent ;
        normal      = normal / norm(normal) ;

        % Section orientation at the current point
        binormal        = cross(normal,tangent)     ;
        rot_mat         = [binormal,normal,tangent] ;

        out_circ_3D     = zeros(3,nb_pt_circ) ;
        for in = 1:nb_pt_circ
            out_circ_3D(:,in)   = rot_mat * out_circ(:,in) + p ;
        end
        
        X(:, i)         = [out_circ_3D(1,:)]' ;
        Y(:, i)         = [out_circ_3D(2,:)]' ;
        Z(:, i)         = [out_circ_3D(3,:)]' ;

        % Memory for next points
        normal_prev     = normal ;
        tangent_prev    = tangent ;
    end

    % Plot the obtained cross sections
    surf( curr_ax , X(:,1:end-1) , Y(:,1:end-1) , Z(:,1:end-1)  , 'FaceColor' , color , 'EdgeColor' , 'none' , 'FaceAlpha' , 1) ;
    fill3(curr_ax , X(:,1)     , Y(:,1)     , Z(:,1)      , color , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 1) ;
    fill3(curr_ax , X(:,end-1)   , Y(:,end-1)   , Z(:,end-1)    , color , 'EdgeColor' , 'k' , 'LineWidth' , 1 , 'FaceAlpha' , 1) ;


    



end