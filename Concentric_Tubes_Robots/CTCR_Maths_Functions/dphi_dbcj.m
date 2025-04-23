function dphidbcj = dphi_dbcj(is,vect_res,Rc,i,j,vect_ind_iT,ind_origin,nbT)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the partial derivative of phi(s) w.r.t. 
% the translation of the tubes bc
%
% ====================
% ====== INPUTS ====== 
%
% is            : (int ∊ [1 , nbP])  Index of the current curvilinear abscissa
% vect_res      : (1 x nbP)          Vector of the distances between one point and the next one
% Rc            : (1 x nbT) [m]      Vector of the radii of curvature of the tubes (index i for tube i)
% i             : (int ∊ [1 , nbT])  Index of the tube associated to the computed phi value
% j             : (int ∊ [1 , nbT])  Index of the tube associated to the translation used for the partial derivative
% vect_ind_iT   : (int) (nbT x 3)    Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : (int ∊ [1 , nbP])  Index corresponding to the base frame origin
% nbT           : (int > 0)          Number of tubes of the CTCR (nbT in the paper)
%
% ====================
% ===== OUTPUTS ====== 
%
% dphidbcj      : (float)            Value of the partial derivative
%
% ======================================================================= %
% ======================================================================= %

    first_change    = max(ind_origin,vect_ind_iT(i,2)) ;
    last_change     = vect_ind_iT(i,3) ;
    dphidbcj        = 0 ;

    if (i == j) && (is == first_change) && (vect_ind_iT(i,2) >= ind_origin)

        dphidbcj    = -1/(Rc(i)*vect_res(is)) ;

    elseif (i == j) && ~(i == nbT) && (is == last_change)

        dphidbcj    = 1/(Rc(i)*vect_res(is)) ;

    end 

end



