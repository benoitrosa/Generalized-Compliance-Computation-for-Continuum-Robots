function dB0nbTRsdn0j0 = dB0nbTRs_dn0j0(is,j,nbT,mem_T,mem_y,mem_dR0_dn0j0,mem_dti_dn0j0)
    
% ======================================================================= %
% ======================================================================= %

% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the n0(0) unknown initial conditions

% ====================
% ====== INPUTS ====== 

% is                : [int] Index of the current curvilinear abscissa
% j                 : [int] ∈ [1,3] Index of the tube associated to the derivation w.r.t. n0(0)
% nbT               : Number of tubes of the CTCR
% mem_T             : Matrix memory of the B0(0)Ts values
% mem_y             : Matrix memory of the y(s) values
% mem_dR0_dn0j0     : Matrix memory of the dR0(s)_dn0j0 partial derivatives
% mem_dti_dn0j0     : Matrix memory of the dti(s)_dn0j0 partial derivatives


% ====================
% ===== OUTPUTS ====== 

% dB0nbTRsdn0j0      : Value of the partial derivative

% ======================================================================= %
% ======================================================================= %

    dB0nbTRsdn0j0 = mem_dR0_dn0j0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dn0j0(nbT,j,is))' ;

end
