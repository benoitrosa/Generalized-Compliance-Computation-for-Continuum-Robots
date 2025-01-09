function duiinitxydbcj = duiinitxy_dbcj(is,vect_res,Rc,i,j,theta_c,vect_ind_iT,ind_origin,nbT)
    
% ======================================================================= %
% ======================================================================= %

% This function computes the partial derivative of u*i|x,y(s) w.r.t. 
% the translation of the tubes bc

% ====================
% ====== INPUTS ====== 

% is            : [int] Index of the current curvilinear abscissa
% vect_res      : Vector of the distances between one point and the next one
% Rc [m]        : Vector of the radii of curvature of the tubes (index i for tube i)
% i             : [int] Index of the tube associated to the computed phi value
% j             : [int] Index of the tube associated to the translation used for the partial derivative
% theta_c       : Vector of the tubes rotations in [rad]
% vect_ind_iT   : Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : Index corresponding to the base frame origin
% nbT           : Number of tubes of the CTCR (nbT in the paper)

% ====================
% ===== OUTPUTS ====== 

% duiinitxydbcj   : Value of the partial derivative

% ======================================================================= %
% ======================================================================= %

    duiinitxydbcj       = zeros(2,1) ;
    
    if i == j
        temp            = rotz(theta_c(i))*[dphi_dbcj(is,vect_res,Rc,i,j,vect_ind_iT,ind_origin,nbT);0;0] ;
        duiinitxydbcj   = temp(1:2,1) ;
    end
    
end