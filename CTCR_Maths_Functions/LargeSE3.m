

%% Création de la transformation rigide à partir d'un vecteur de rotation et d'un vecteur de translation
function [T] = LargeSE3(u0, translation, eps, res)
    
    %% ====== On vérifie que les vecteurs soient bien sous forme de colonnes
    if ~(length(u0(1,:)) == 1)
        u0 = u0' ;
    end
    if ~(length(translation(1,:)) == 1)
        translation = translation' ;
    end
    
    
    rotation = u0*res ;
    
    % Calcul du carré du vecteur rotation
    rotation_carre = sum(rotation.*rotation) ;
    
    % Calcul de la norme de rotation
    rotation_norm = sqrt(rotation_carre) ;
    
    % Initialisation de la transformation rigide
    T = eye(4) ;
    
    % Test sur la norme, si négligeable alors on ne garde que
    % la translation et rotation identité
    if(rotation_norm > 0) 
    %if(rotation_norm > eps) 
        
        % Création de la partie rotation
        T(1:3,1:3) = LargeSO3(rotation) ;

        % Calcul des "bras de leviers"
        RotMatrix = hat(rotation) ;
        bras_levier = RotMatrix*translation ;
        
        % Calcul final
        T(1:3,4) = translation + (1-cos(rotation_norm))/rotation_carre*bras_levier + (rotation_norm - sin(rotation_norm))/(rotation_norm*rotation_carre) * RotMatrix*bras_levier ;
        
    else
        T(1:3,4) = translation ;
    end
    
end

