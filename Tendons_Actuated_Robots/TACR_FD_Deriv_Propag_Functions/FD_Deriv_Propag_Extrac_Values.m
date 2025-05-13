function [vect_z , BC , mem_u0 , mem_v0 , mem_T0 , mem_m0 , mem_n0 , ...
          mem_c , mem_d , mem_M , mem_inv_M , mem_dpi_ds , mem_dAi] ...
         = FD_Deriv_Propag_Extrac_Values(...
         tacr_construc , bvp_prop , mem_bvp)
    
    vect_z      = tacr_construc.vect_z      ;
    BC          = bvp_prop.vect_tol         ;

    mem_u0      = mem_bvp.mem_y.mem_u0      ;
    mem_v0      = mem_bvp.mem_y.mem_v0      ;
    mem_T0      = mem_bvp.mem_T             ;
    mem_m0      = mem_bvp.mem_m0            ;
    mem_n0      = mem_bvp.mem_n0            ;
    mem_c       = mem_bvp.mem_c             ;
    mem_d       = mem_bvp.mem_d             ;
    mem_M       = mem_bvp.mem_M             ;
    mem_inv_M   = mem_bvp.mem_inv_M         ;
    mem_dpi_ds  = mem_bvp.mem_dpi_ds        ;
    mem_dAi     = mem_bvp.mem_Ai            ;

end