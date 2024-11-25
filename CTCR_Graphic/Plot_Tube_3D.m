function Plot_Tube_3D(curr_ax,curve,R,numPointsCircle,color)
    
    % curve: une matrice Nx3 où chaque ligne représente un point (x, y, z) de la courbe
    % R: rayon extérieur de l'anneau
    % r: rayon intérieur de l'anneau
    % numPointsCircle: nombre de points pour approximer le contour de l'anneau

    % Nombre de points sur la courbe
    numPointsCurve = size(curve, 1);

    % Générer les points du disque creux dans le plan XY
    theta = linspace(0, 2*pi, numPointsCircle);
    outerCircle = R * [cos(theta); sin(theta)];

    % Matrices pour stocker les coordonnées des points de l'anneau
    X = zeros(numPointsCircle, numPointsCurve);
    Y = zeros(numPointsCircle, numPointsCurve);
    Z = zeros(numPointsCircle, numPointsCurve);


    % Initialiser les vecteurs normaux (normal et binormal)
    normal_prev = [0, 1, 0];   % Vecteur normal initial (arbitraire)
    tangent_prev = [0 , 0 , 1] ;

    % Balayage le long de la courbe
    for i = 2:numPointsCurve-2
        % Point actuel sur la courbe
        p = curve(i, :);

        % Calcul de la tangente locale
        tangent = curve(i+1, :) - curve(i, :);
        
        if norm(tangent) == 0
            tangent = tangent_prev ;
        end

        tangent = tangent / norm(tangent);

        % Parallel transport: ajustement du vecteur normal pour éviter la torsion
        % Projection du vecteur normal précédent sur le plan perpendiculaire à la tangente
        normal = normal_prev - dot(normal_prev, tangent) * tangent;
        normal = normal / norm(normal);

        % Mise à jour du binormal
        binormal = cross(tangent, normal);

        % Matrice de rotation pour orienter l'anneau
        rotationMatrix = [normal; binormal; tangent];

        % Disque creux 3D positionné correctement
        outerCircle3D = rotationMatrix' * [outerCircle; zeros(1, numPointsCircle)] + p';

        % Stocker les points pour le tracé de la surface
        X(:, i) = [outerCircle3D(1, :)]';
        Y(:, i) = [outerCircle3D(2, :)]';
        Z(:, i) = [outerCircle3D(3, :)]';

        % Mettre à jour les vecteurs normaux pour le prochain segment
        normal_prev = normal;
        tangent_prev = tangent;
    end

    % Tracé de la surface de l'anneau
    surf(curr_ax,X(:,2:end-2), Y(:,2:end-2), Z(:,2:end-2), 'FaceColor', color, 'EdgeColor', 'none', 'FaceAlpha', 1) ;
    fill3(curr_ax,X(:,2), Y(:,2), Z(:,2), color, 'EdgeColor', 'k','LineWidth',1,'FaceAlpha', 1);
    fill3(curr_ax,X(:,end-2), Y(:,end-2), Z(:,end-2), color, 'EdgeColor', 'k','LineWidth',1,'FaceAlpha', 1);


    



end