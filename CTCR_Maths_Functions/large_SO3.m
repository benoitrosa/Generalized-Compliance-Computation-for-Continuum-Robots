function R = large_SO3(w)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the 3D rotation matrix R associated to the the vector of angles w
%
% ====================
% ====== INPUTS ====== 
%
% w     : 3x1 or 1x3 vector of rotation angles
%
% ====================
% ===== OUTPUTS ====== 
%
% R     : Rotation matrix
%
% ======================================================================= %
% ======================================================================= %


    if length(w) == 3

        theta   = sqrt(sum(w.*w)) ; 
        eps     = 1e-10 ;

        if theta < eps

            R   = eye(3) ;

        else

            w   = w/theta ;
            st  = sin(theta) ;
            ct  = cos(theta) ;
            vt  = 1 - ct ;
            t0  = w(3)*st ;
            t1  = w(2)*st ;
            t2  = w(1)*st ;
            R   = [[ w(1) * w(1) * vt + ct , w(1) * w(2) * vt - t0 , w(1) * w(3) * vt + t1 ] ; ...
                   [ w(1) * w(2) * vt + t0 , w(2) * w(2) * vt + ct , w(2) * w(3) * vt - t2 ] ; ...
                   [ w(1) * w(3) * vt - t1 , w(2) * w(3) * vt + t2 , w(3) * w(3) * vt + ct ] ] ;
        end
        
    else

        disp('SO3(w) : w is not 3x1 or 1x3') ;

    end    
end