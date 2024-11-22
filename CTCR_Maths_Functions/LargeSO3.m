

function [Rot] = LargeSO3(w)

    % Retourne la matrice de rotation correspondante aux 3 rotations w
    if length(w) == 3
        theta = sqrt(sum(w.*w)) ; 
        
        eps = 1e-10 ;

        if theta < eps
            Rot = eye(3) ;
        else
            w = w/theta ;

            st = sin(theta) ;
            ct = cos(theta) ;

            vt = 1 - ct ;
            t0 = w(3)*st ;
            t1 = w(2)*st ;
            t2 = w(1)*st ;

            Rot = [[w(1) * w(1) * vt + ct , w(1) * w(2) * vt - t0 , w(1) * w(3) * vt + t1 ]; ...
                  [w(1) * w(2) * vt + t0  , w(2) * w(2) * vt + ct , w(2) * w(3) * vt - t2 ]; ...
                  [w(1) * w(3) * vt - t1  , w(2) * w(3) * vt + t2 , w(3) * w(3) * vt + ct ]] ;
        end
    else
        disp('SO3(w): w is not 3 x 1') ;
    end    
end