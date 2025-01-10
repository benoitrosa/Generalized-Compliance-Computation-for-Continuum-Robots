function dB0nbTRsdfs0 = dB0nbTRs_dfs0(is0,is,j,nbT,mem_T,mem_y,mem_dR0_dfs0,mem_dti_dfs0)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the vector force f0 applied at s0
%
% ====================
% ====== INPUTS ====== 
%
% is0           : (int ∊ [1 , nbP])        Index of the loaded point curvilinear abscissa
% is            : (int ∊ [1 , nbP])        Index of the current curvilinear abscissa
% j             : (int ∊ [1 , 3])          Index of the component x,y or z on which the derivation is proceeded
% nbT           : (int > 0)                Number of tubes of the CTCR
% mem_T         : (4 x 4 x nbP)            Matrix memory of the B0(0)Ts values
% mem_y         : (class)                  Matrix memory of the y(s) values
% mem_dR0_dfs0  : (3 x 3 x 3 x nbP x nbP)  Matrix memory of the dR0(s)_df(s0) partial derivatives
% mem_dti_dfs0  : (nbT x 3 x nbP x nbP)    Matrix memory of the dti(s)_df(s0) partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% dB0nbTRsdfs0  : (3 x 3)                  Value of the partial derivative
%
% ======================================================================= %
% ======================================================================= %

    dB0nbTRsdfs0 = mem_dR0_dfs0(:,:,j,is,is0)*rotz(mem_y.mem_t(nbT,is))' ...
                   + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dfs0(nbT,j,is,is0))' ;

end