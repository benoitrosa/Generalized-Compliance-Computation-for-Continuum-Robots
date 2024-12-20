function mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac)

% ======================================================================= %
% ======================================================================= %

% This function initializes the state vector initial value

% ====================
% ====== INPUTS ====== 

% bvp_prop              : Results of the BVP resolution
% mem_bvp               : Memory of the BVP variables
% ctcr_construc         : Robot features related to the model settings
% ctcr_carac            : Robot features

% ====================
% ===== OUTPUTS ====== 

% mem_bvp               : Memory of the BVP variables

% ======================================================================= %
% ======================================================================= %
    
    nbT = ctcr_carac.nbT ;

    for iT = 1:nbT
        % uzi(0i) initialization
        mem_bvp.mem_y.mem_uz(iT,ctcr_construc.vect_ind_iT(iT,1)) = bvp_prop.IC_opt(iT) ;
    end

    % m0(0) and n0(0) initialization
    mem_bvp.mem_y.mem_m0(:,ctcr_construc.ind_origin)             = bvp_prop.IC_opt(nbT+1:nbT+3) ;
    mem_bvp.mem_y.mem_n0(:,ctcr_construc.ind_origin)             = bvp_prop.IC_opt(nbT+4:nbT+6) ;

end