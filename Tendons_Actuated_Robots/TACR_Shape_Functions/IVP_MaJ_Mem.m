function [mem_bvp , mem_deriv_propag_low] = ...
            IVP_MaJ_Mem( ...
            is , mem_bvp , tacr_construc , ...
            mem_deriv_propag_low , bool_opt_lit)


% ======================================================================= %
% ======================================================================= %
%
% This function integrates the state vector ODE and the Low-Level derivatives
% involved in the optimization Jacobian computation using a manual first order linearization 
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class)           Memory of the BVP variables 
% tacr_construc         : (class)           Robot features related to the model settings
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
% bool_opt_lit          : (boolean)         Compute the derivatives thanks to the LLDPM ?
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %


   
    

    
    if ~(is == tacr_construc.nbP)

        % ====================
        % ==== Main ODE

        mem_bvp.mem_y.mem_u0(:,is+1)        = mem_bvp.mem_y.mem_u0(:,is)    + mem_bvp.mem_ys.mem_u0s(:,is)    *tacr_construc.vect_res(is) ;             
        mem_bvp.mem_y.mem_v0(:,is+1)        = mem_bvp.mem_y.mem_v0(:,is)    + mem_bvp.mem_ys.mem_v0s(:,is)    *tacr_construc.vect_res(is) ;
        mem_bvp.mem_y.mem_R0(:,:,is+1)      = mem_bvp.mem_y.mem_R0(:,:,is)  + mem_bvp.mem_ys.mem_R0s(:,:,is)  *tacr_construc.vect_res(is) ;
        mem_bvp.mem_y.mem_p0(:,is+1)        = mem_bvp.mem_y.mem_p0(:,is)    + mem_bvp.mem_ys.mem_p0s(:,is)    *tacr_construc.vect_res(is) ;   




        % ====================
        % ==== Low-Level Derivatives

        if bool_opt_lit

            mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,:,is+1)      = mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,:,is)      + mem_deriv_propag_low.mem_du0_ds.mem_du0_dn0_ds(:,:,is)       *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,:,is+1)      = mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,:,is)      + mem_deriv_propag_low.mem_du0_ds.mem_du0_dm0_ds(:,:,is)       *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,:,is+1)      = mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,:,is)      + mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dn0_ds(:,:,is)       *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,:,is+1)      = mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,:,is)      + mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dm0_ds(:,:,is)       *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,:,is+1)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,:,is)    + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dn0_ds(:,:,:,is)     *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,:,is+1)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,:,is)    + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dm0_ds(:,:,:,is)     *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dp0.mem_dp0_dn0(:,:,is+1)      = mem_deriv_propag_low.mem_dp0.mem_dp0_dn0(:,:,is)      + mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dn0_ds(:,:,is)       *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dp0.mem_dp0_dm0(:,:,is+1)      = mem_deriv_propag_low.mem_dp0.mem_dp0_dm0(:,:,is)      + mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dm0_ds(:,:,is)       *tacr_construc.vect_res(is) ;

        end

    end
    
end





