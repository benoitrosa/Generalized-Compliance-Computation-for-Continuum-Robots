function dB0nbTRsdbcj = dB0nbTRs_dbcj(is,j,nbT,mem_T,mem_y,mem_dR0_dbcj,mem_dti_dbcj)
    
% ======================================================================= %
% ======================================================================= %

% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the translation of the tubes bc

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

    dB0nbTRsdbcj = mem_dR0_dbcj(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dbcj(nbT,j,is))' ;

end