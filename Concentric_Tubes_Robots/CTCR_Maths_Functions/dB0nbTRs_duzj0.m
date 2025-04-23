function dB0nbTRsduzj0 = dB0nbTRs_duzj0(is,j,nbT,mem_T,mem_y,mem_dR0_duzj0,mem_dti_duzj0)
    
% ======================================================================= %
% ======================================================================= %
%
% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the uz(0) unknown initial conditions
%
% ====================
% ====== INPUTS ====== 
%
% is                : (int ∊ [1 , nbP])    Index of the current curvilinear abscissa
% j                 : (int ∊ [1 , nbT])    Index of the tube associated to the derivation w.r.t. uzj(0)
% nbT               : (int > 0)            Number of tubes of the CTCR
% mem_T             : (4 x 4 x nbP)        Matrix memory of the B0(0)Ts values
% mem_y             : (class)              Matrix memory of the y(s) values
% mem_dR0_duzj0     : (3 x 3 x nbT x nbP)  Matrix memory of the dR0(s)_duzj0 partial derivatives
% mem_dti_duzj0     : (nbT x nbT x nbP)    Matrix memory of the dti(s)_duzj0 partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% dB0nbTRsduzj0     : (3x3)                Value of the partial derivative
%
% ======================================================================= %
% ======================================================================= %

    dB0nbTRsduzj0 = mem_dR0_duzj0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_duzj0(nbT,j,is))' ;

end