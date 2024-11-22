

%% Opération ^
function skew_symmetric_matrix = hat(y)

    % Créer la matrice asymétrique
    skew_symmetric_matrix = [  [   0   , -y(3) ,  y(2) ]  ;
                               [ y(3)  ,   0   , -y(1) ]  ;
                               [ -y(2) ,  y(1) ,   0   ]] ;
                         
end
