function mem_deriv_propag_low ...
    = Deriv_Propag_Comp_Low_ODE(...
    is , mem_bvp , tacr_construc , tacr_carac , simulation_param , mem_deriv_propag_low)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the derivative (w.r.t the current is) of 
% the Low-Level partial derivatives involved in the Joint Jacobian and/or 
% the Generalized Compliance Matrix computation.
% Here, there is no derivation w.r.t. the unknown initial state vector values yu(0).
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class) Memory of the BVP variables 
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the Low-Level derivatives 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
%
% ======================================================================= %
% ======================================================================= %


    if ~(is == tacr_construc.nbP)



        % ====================
        % ==== Pre-computing variables
        hat_u0  = hat(mem_bvp.mem_y.mem_u0(:,is)) ;


        if simulation_param.bool_J

            for j = 1:tacr_carac.nbT
    
                ddv0_du0_dti = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dti(:,:,j,is) * [mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ...
                               + mem_bvp.mem_inv_M(:,:,is) * [mem_deriv_propag_low.mem_dd.mem_dd_dti(:,j,is) ; mem_deriv_propag_low.mem_dc.mem_dc_dti(:,j,is)] ;
    
                mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dti_ds(:,j,is)      = ddv0_du0_dti(1:3) ;
                mem_deriv_propag_low.mem_du0_ds.mem_du0_dti_ds(:,j,is)      = ddv0_du0_dti(4:6) ;


                mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dti_ds(:,:,j,is)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,is)*hat_u0 ...
                                                                              + mem_bvp.mem_y.mem_R0(:,:,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is)) ; 

                mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dti_ds(:,j,is)      = mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,is) * mem_bvp.mem_y.mem_v0(:,is) ...
                                                                              + mem_bvp.mem_y.mem_R0(:,:,is) * mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) ;
            

            end
            
        end
                   

        if simulation_param.bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                for j = 1:3

                    ddv0_du0_dtaus0 = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dtaus0(:,:,j,is,is0) * [mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ...
                                      + mem_bvp.mem_inv_M(:,:,is) * [mem_deriv_propag_low.mem_dd.mem_dd_dtaus0(:,j,is,is0) ; mem_deriv_propag_low.mem_dc.mem_dc_dtaus0(:,j,is,is0)] ;
        
                    mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dtaus0_ds(:,j,is,is0) = ddv0_du0_dtaus0(1:3) ;
                    mem_deriv_propag_low.mem_du0_ds.mem_du0_dtaus0_ds(:,j,is,is0) = ddv0_du0_dtaus0(4:6) ;
        
                    ddv0_du0_dfs0 = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dfs0(:,:,j,is,is0) * [mem_bvp.mem_d(:,is) ; mem_bvp.mem_c(:,is)] ...
                                      + mem_bvp.mem_inv_M(:,:,is) * [mem_deriv_propag_low.mem_dd.mem_dd_dfs0(:,j,is,is0) ; mem_deriv_propag_low.mem_dc.mem_dc_dfs0(:,j,is,is0)] ;
        
                    mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dfs0_ds(:,j,is,is0)     = ddv0_du0_dfs0(1:3) ;
                    mem_deriv_propag_low.mem_du0_ds.mem_du0_dfs0_ds(:,j,is,is0)     = ddv0_du0_dfs0(4:6) ;
                    
                    mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds(:,:,j,is,is0) = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0)*hat_u0 ...
                                                                                      + mem_bvp.mem_y.mem_R0(:,:,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0)) ; 
                    
                    mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds(:,:,j,is,is0)   = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0)*hat_u0 ...
                                                                                      + mem_bvp.mem_y.mem_R0(:,:,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)) ; 

                    mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dtaus0_ds(:,j,is,is0)   = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0) * mem_bvp.mem_y.mem_v0(:,is) ...
                                                                                      + mem_bvp.mem_y.mem_R0(:,:,is) * mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) ;

                    mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dfs0_ds(:,j,is,is0)     = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0) * mem_bvp.mem_y.mem_v0(:,is) ...
                                                                                      + mem_bvp.mem_y.mem_R0(:,:,is) * mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0) ;

                end
            end
        end
    end
end