function phi = phi(is,Rc,i,vect_ind_iT,ind_origin)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the phi function as described by equation (27e)
%
% ====================
% ====== INPUTS ====== 
%
% is            : (int ∊ [1 , nbP])  Index of the current curvilinear abscissa
% Rc            : (1 x nbT) [m]      Vector of the radii of curvature of the tubes (index i for tube i)
% i             : (int ∊ [1 , nbT])  Index of the tube
% vect_ind_iT   : (int) (nbT x 3)    Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : (int ∊ [1 , nbP])  Index corresponding to the base frame origin
%
% ====================
% ===== OUTPUTS ====== 
%
% phi           : (float) Value of the phi function
%
% ======================================================================= %
% ======================================================================= %



    first_change = max(ind_origin,vect_ind_iT(i,2)) ;
    last_change  = vect_ind_iT(i,3) ;

    phi = 0 ;

    if (first_change <= is) && (is <= last_change)
        phi = 1/Rc(i) ;
    end
    
end

