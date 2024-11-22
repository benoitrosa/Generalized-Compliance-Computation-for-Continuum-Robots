%% Opération ^
function skew_symmetric_matrix = hat6(y)

    % Créer la matrice asymétrique
    skew_symmetric_matrix = [  [   0   , -y(6) ,  y(5) , y(1)  ]  ;
                               [ y(6)  ,   0   , -y(4) , y(2)  ]  ;
                               [ -y(5) , y(4)  ,   0   , y(3)  ]  ;
                               [   0   ,   0   ,   0   ,  0    ]] ;
                         
end
