function R = rotz(gamma)

% ======================================================================= %
% ======================================================================= %
%
% This function produces a rotation matrix R, associated to an angle gamma,
% around the Z-direction
%
% ====================
% ====== INPUTS ====== 
%
% gamma     : (float) angle in [rad]
%
% ====================
% ===== OUTPUTS ====== 
%
% R         : (3x3) Rotation matrix in SO(3)
%
% ======================================================================= %
% ======================================================================= %


    R = [
        [cos(gamma) , -sin(gamma), 0] ;
        [sin(gamma) , cos(gamma) , 0] ;
        [0          , 0          , 1]
        ];
    
end