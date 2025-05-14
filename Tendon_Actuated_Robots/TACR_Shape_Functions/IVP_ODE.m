function mem_bvp = IVP_ODE(is , mem_bvp)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the state vector ODE
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP])   Index of the current curvilinear abscissa
% mem_bvp               : (class)             Memory of the BVP variables 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)             Memory of the BVP variables 
%
% ======================================================================= %
% ======================================================================= %
        
        
    v0s_u0s                         = mem_bvp.mem_inv_M(:,:,is)*[mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ;

    mem_bvp.mem_ys.mem_v0s(:,is)    = v0s_u0s(1:3) ;
    mem_bvp.mem_ys.mem_u0s(:,is)    = v0s_u0s(4:6) ;
    mem_bvp.mem_ys.mem_R0s(:,:,is)  = mem_bvp.mem_y.mem_R0(:,:,is)*hat(mem_bvp.mem_y.mem_u0(:,is)) ;
    mem_bvp.mem_ys.mem_p0s(:,is)    = mem_bvp.mem_y.mem_R0(:,:,is)*mem_bvp.mem_y.mem_v0(:,is) ;


end
