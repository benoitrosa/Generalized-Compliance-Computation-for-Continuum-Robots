function mem_deriv_propag_low ...
         = IVP_Comp_Low_ODE( ...
         is , mem_bvp , mem_deriv_propag_low)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the derivative (w.r.t the current is) of the Low-Level
% partial derivatives involved in the optimization Jacobian computation only.
% Here, there is no derivation w.r.t. the external loads and/or the actuation.
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the Low-Level derivatives 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class)           Memory of the Low-Level derivatives 
%
% ======================================================================= %
% ======================================================================= %


        
    for j = 1:3

        ddv0_du0_dm0 = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dm0(:,:,j,is) * [mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ...
                       + mem_bvp.mem_inv_M(:,:,is) * [mem_deriv_propag_low.mem_dd.mem_dd_dm0(:,j,is) ; mem_deriv_propag_low.mem_dc.mem_dc_dm0(:,j,is)] ;
    
        mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dm0_ds(:,j,is)  = ddv0_du0_dm0(1:3) ;
        mem_deriv_propag_low.mem_du0_ds.mem_du0_dm0_ds(:,j,is)  = ddv0_du0_dm0(4:6) ;




        ddv0_du0_dn0 = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dn0(:,:,j,is) * [mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ...
                       + mem_bvp.mem_inv_M(:,:,is) * [mem_deriv_propag_low.mem_dd.mem_dd_dn0(:,j,is) ; mem_deriv_propag_low.mem_dc.mem_dc_dn0(:,j,is)] ;
    
        mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dn0_ds(:,j,is)  = ddv0_du0_dn0(1:3) ;
        mem_deriv_propag_low.mem_du0_ds.mem_du0_dn0_ds(:,j,is)  = ddv0_du0_dn0(4:6) ;


    
        mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dm0_ds(:,:,j,is)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,is)*hat(mem_bvp.mem_y.mem_u0(:,is)) ...
                                                                      + mem_bvp.mem_y.mem_R0(:,:,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is)) ;  
    
        mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dn0_ds(:,:,j,is)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,is) * hat(mem_bvp.mem_y.mem_u0(:,is)) ...
                                                                      + mem_bvp.mem_y.mem_R0(:,:,is) * hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is)) ;
    
        mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dm0_ds(:,j,is)      = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,is) * mem_bvp.mem_y.mem_v0(:,is) ...
                                                                      + mem_bvp.mem_y.mem_R0(:,:,is) * mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) ;
    
        mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dn0_ds(:,j,is)      = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,is) * mem_bvp.mem_y.mem_v0(:,is) ...
                                                                      + mem_bvp.mem_y.mem_R0(:,:,is) * mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) ;
        

    end




    

end



