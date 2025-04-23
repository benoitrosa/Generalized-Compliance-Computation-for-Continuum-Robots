function dB0nbTRsdbcj = dB0nbTRs_dbcj(is,j,nbT,mem_T,mem_y,mem_dR0_dbcj,mem_dti_dbcj)
    
% ======================================================================= %
% ======================================================================= %
%
% This function computes the partial derivative of rigid transformation 
% matrix, from the base B0 to the current s, associated to the tube i=nbT 
% w.r.t. the translation of the tubes bc
%
% ====================
% ====== INPUTS ====== 
%
% is            : (int ∊ [1 , nbP])    Index of the current curvilinear abscissa
% j             : (int ∊ [1 , nbT])    Index of the tube associated to the translation used for the partial derivative
% nbT           : (int > 0)            Number of tubes of the CTCR
% mem_T         : (4 x 4 x nbP)        Matrix memory of the B0(0)Ts values
% mem_y         : (class)              Matrix memory of the y(s) values
% mem_dR0_dbcj  : (3 x 3 x nbT x nbP)  Matrix memory of the dR0(s)_dbcj partial derivatives
% mem_dti_dbcj  : (nbT x nbT x nbP)    Matrix memory of the dti(s)_dbcj partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% dB0nbTRsdbcj  : (3 x 3)              Value of the partial derivative
%
% ======================================================================= %
% ======================================================================= %

    dB0nbTRsdbcj = mem_dR0_dbcj(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                   + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dbcj(nbT,j,is))' ;

end