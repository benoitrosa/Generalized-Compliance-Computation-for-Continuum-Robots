function mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac)

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
% ctcr_construc         : (class)   Robot features related to the model settings
% ctcr_carac            : (class)   Robot features
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)   Memory of the BVP variables
%
% ======================================================================= %
% ======================================================================= %
    
    nbT = ctcr_carac.nbT ;

    % uzi(0i) initialization
    for iT = 1:nbT
        mem_bvp.mem_y.mem_uz(iT,ctcr_construc.vect_ind_iT(iT,1)) = bvp_prop.IC_opt(iT,1) ;
    end

    % m0(0) and n0(0) initialization
    mem_bvp.mem_y.mem_m0(:,ctcr_construc.ind_origin)             = bvp_prop.IC_opt(nbT+1:nbT+3,1) ;
    mem_bvp.mem_y.mem_n0(:,ctcr_construc.ind_origin)             = bvp_prop.IC_opt(nbT+4:nbT+6,1) ;

end