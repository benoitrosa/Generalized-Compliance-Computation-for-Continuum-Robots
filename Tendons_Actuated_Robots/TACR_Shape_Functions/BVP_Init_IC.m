function mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , tacr_carac)

% ======================================================================= %
% ======================================================================= %
%
% This function initializes the state vector initial value
%
% ====================
% ====== INPUTS ====== 
%
% bvp_prop              : (class)   Results of the BVP resolution
% mem_bvp               : (class)   Memory of the BVP variables
% tacr_carac            : (class)   Robot features
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)   Memory of the BVP variables
%
% ======================================================================= %
% ======================================================================= %

    mem_bvp.mem_y.mem_u0(:,1)   = tacr_carac.Kbt\bvp_prop.IC_opt(1:3,1) ;
    mem_bvp.mem_y.mem_v0(:,1)   = tacr_carac.Kse\bvp_prop.IC_opt(4:6,1) + [0;0;1] ;

end