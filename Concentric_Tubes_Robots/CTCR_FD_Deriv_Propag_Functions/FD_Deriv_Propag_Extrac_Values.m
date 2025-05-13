function [vect_z , BC , memy , memys , memT , memu0] ...
         = FD_Deriv_Propag_Extrac_Values(...
         ctcr_carac , ctcr_construc , bvp_prop , mem_bvp)



% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % Memorization of the computed variables
    
    vect_z     = ctcr_construc.vect_z ;
    BC         = bvp_prop.vect_tol ;

    memy       = zeros(2*ctcr_carac.nbT+6,ctcr_construc.nbP) ;
    memys      = zeros(2*ctcr_carac.nbT+6,ctcr_construc.nbP) ;

    for i_z = 1:ctcr_construc.nbP % ctcr_construc.vect_ind_iT(nbT,3)
        memy(:,i_z)        = [mem_bvp.mem_y.mem_t(:,i_z) ; mem_bvp.mem_y.mem_uz(:,i_z) ; mem_bvp.mem_y.mem_m0(:,i_z) ; mem_bvp.mem_y.mem_n0(:,i_z)] ;
        memys(:,i_z)       = [mem_bvp.mem_ys.mem_ts(:,i_z) ; mem_bvp.mem_ys.mem_uzs(:,i_z) ; mem_bvp.mem_ys.mem_m0s(:,i_z) ; mem_bvp.mem_ys.mem_n0s(:,i_z)] ;
    
    end

    memT       = mem_bvp.mem_T ;
    memu0      = mem_bvp.mem_u0 ;
    


end