function duiinitxydtcj = duiinitxy_dtcj(is,Rc,i,j,theta_c,vect_ind_iT,ind_origin)
    
% ======================================================================= %
% ======================================================================= %

% This function computes the partial derivative of u*i|x,y(s) w.r.t. 
% the rotation of the tubes tc

% ====================
% ====== INPUTS ====== 

% is            : [int] Index of the current curvilinear abscissa
% Rc [m]        : Vector of the radii of curvature of the tubes (index i for tube i)
% i             : [int] Index of the tube associated to the computed phi value
% j             : [int] Index of the tube associated to the translation used for the partial derivative
% theta_c       : Vector of the tubes rotations in [rad]
% vect_ind_iT   : Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : Index corresponding to the base frame origin

% ====================
% ===== OUTPUTS ====== 

% duiinitxydtcj   : Value of the partial derivative

% ======================================================================= %
% ======================================================================= %

    duiinitxydtcj       = zeros(2,1) ;
    
    if i == j
        temp            = hat([0,0,1])*rotz(theta_c(i))*[phi(is,Rc,i,vect_ind_iT,ind_origin);0;0] ;
        duiinitxydtcj   = temp(1:2,1) ;
    end
    
end