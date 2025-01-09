function phi = phi(is,Rc,i,vect_ind_iT,ind_origin)

% ======================================================================= %
% ======================================================================= %

% This function computes the phi function as described by equation (27e)

% ====================
% ====== INPUTS ====== 

% is            : [int] Index of the current curvilinear abscissa
% Rc [m]        : Vector of the radii of curvature of the tubes (index i for tube i)
% i             : [int] Index of the tube
% vect_ind_iT   : Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : Index corresponding to the base frame origin

% ====================
% ===== OUTPUTS ====== 

% phi         : Value of the phi function

% ======================================================================= %
% ======================================================================= %



    first_change = max(ind_origin,vect_ind_iT(i,2)) ;
    last_change  = vect_ind_iT(i,3) ;

    phi = 0 ;

    if (first_change <= is) && (is <= last_change)
        phi = 1/Rc(i) ;
    end
    
end

