function M = hat(V)

% ======================================================================= %
% ======================================================================= %
%
% This function creates the skew-symmetric matrix M formed from V
%
% ====================
% ====== INPUTS ====== 
%
% V     : (3x1) Vector
%
% ====================
% ===== OUTPUTS ====== 
%
% M     : (3x3) Matrix 
%
% ======================================================================= %
% ======================================================================= %

    M = [  [   0   , -V(3) ,  V(2) ]  ;
           [ V(3)  ,   0   , -V(1) ]  ;
           [ -V(2) ,  V(1) ,   0   ]] ;
                         
end
