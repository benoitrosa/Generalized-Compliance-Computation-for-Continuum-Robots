function dB0nbTRsdtcj = dB0nbTRs_dtcj(is,j,nbT,mem_T,mem_y,mem_dR0_dtcj,mem_dti_dtcj)
    
% ======================================================================= %
% ======================================================================= %

% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the rotation of the tubes tc

% ====================
% ====== INPUTS ====== 

% is                : [int] Index of the current curvilinear abscissa
% j                 : [int] ∈ [1,nbT] Index of the tube associated to the derivation w.r.t. tcj
% nbT               : Number of tubes of the CTCR
% mem_T             : Matrix memory of the B0(0)Ts values
% mem_y             : Matrix memory of the y(s) values
% mem_dR0_dtcj      : Matrix memory of the dR0(s)_dtcj partial derivatives
% mem_dti_dtcj      : Matrix memory of the dti(s)_dtcj partial derivatives


% ====================
% ===== OUTPUTS ====== 

% dB0nbTRsdtcj      : Value of the partial derivative

% ======================================================================= %
% ======================================================================= %

    dB0nbTRsdtcj = mem_dR0_dtcj(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dtcj(nbT,j,is))' ;

end