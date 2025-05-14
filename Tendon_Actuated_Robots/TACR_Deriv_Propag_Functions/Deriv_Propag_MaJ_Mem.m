function mem_deriv_propag_low ...
        = Deriv_Propag_MaJ_Mem( ...
        is , tacr_construc , mem_deriv_propag_low , simulation_param)


% ======================================================================= %
% ======================================================================= %
%
% This function integrates the Low-Level derivatives using a manual 
% first order linearization 
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% tacr_construc         : (class) Robot features related to the model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% simulation_param      : (class) Model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
%
% ======================================================================= %
% ======================================================================= %
  
    

    if ~(is == tacr_construc.nbP)

        if simulation_param.bool_J

            mem_deriv_propag_low.mem_du0.mem_du0_dti(:,:,is+1)      = mem_deriv_propag_low.mem_du0.mem_du0_dti(:,:,is)      + mem_deriv_propag_low.mem_du0_ds.mem_du0_dti_ds(:,:,is)    *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,:,is+1)      = mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,:,is)      + mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dti_ds(:,:,is)    *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,:,is+1)    = mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,:,is)    + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dti_ds(:,:,:,is)  *tacr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dp0.mem_dp0_dti(:,:,is+1)      = mem_deriv_propag_low.mem_dp0.mem_dp0_dti(:,:,is)      + mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dti_ds(:,:,is)    *tacr_construc.vect_res(is) ;

        end

        
        if simulation_param.bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,:,is+1,is0)   = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_du0_ds.mem_du0_dtaus0_ds(:,:,is,is0)     *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,:,is+1,is0)   = mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dtaus0_ds(:,:,is,is0)     *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,:,is+1,is0)     = mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_du0_ds.mem_du0_dfs0_ds(:,:,is,is0)       *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,:,is+1,is0)     = mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dv0_ds.mem_dv0_dfs0_ds(:,:,is,is0)       *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,:,is+1,is0) = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,:,is,is0)     + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds(:,:,:,is,is0)   *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_dp0.mem_dp0_dtaus0(:,:,is+1,is0)   = mem_deriv_propag_low.mem_dp0.mem_dp0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dtaus0_ds(:,:,is,is0)     *tacr_construc.vect_res(is)  ; 
                mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,:,is+1,is0)   = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,:,is,is0)       + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds(:,:,:,is,is0)     *tacr_construc.vect_res(is)  ;
                mem_deriv_propag_low.mem_dp0.mem_dp0_dfs0(:,:,is+1,is0)     = mem_deriv_propag_low.mem_dp0.mem_dp0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dp0_ds.mem_dp0_dfs0_ds(:,:,is,is0)       *tacr_construc.vect_res(is)  ;

            end
        end
    end
end