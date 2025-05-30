function dB0nbTRsdm0j0 = dB0nbTRs_dm0j0(is,j,nbT,mem_T,mem_y,mem_dR0_dm0j0,mem_dti_dm0j0)
    
% ======================================================================= %
% ======================================================================= %
%
% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the m0(0) unknown initial conditions
%
% ====================
% ====== INPUTS ====== 
%
% is                : (int ∊ [1 , nbP])  Index of the current curvilinear abscissa
% j                 : (int ∊ [1 , 3])    Index of the tube associated to the derivation w.r.t. m0(0)
% nbT               : (int > 0)          Number of tubes of the CTCR
% mem_T             : (4 x 4 x nbP)      Matrix memory of the B0(0)Ts values
% mem_y             : (class)            Matrix memory of the y(s) values
% mem_dR0_dm0j0     : (3 x 3 x 3 x nbP)  Matrix memory of the dR0(s)_dm0j0 partial derivatives
% mem_dti_dm0j0     : (nbT x 3 x nbP)    Matrix memory of the dti(s)_dm0j0 partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% dB0nbTRsdm0j0     : (3 x 3) Value of the partial derivative
%
% ======================================================================= %
% ======================================================================= %

    dB0nbTRsdm0j0 = mem_dR0_dm0j0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dm0j0(nbT,j,is))' ;

end
