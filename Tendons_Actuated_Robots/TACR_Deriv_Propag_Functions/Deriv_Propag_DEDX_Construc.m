function mem_deriv_propag_high ...
         = Deriv_Propag_DEDX_Construc(...
         tacr_construc , tacr_carac , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the high-level partial derivatives Ex
%
% ====================
% ====== INPUTS ====== 
%
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_high : (class) Memory of the High-Level partial derivatives
%
% ======================================================================= %
% ======================================================================= %



    for is = 1:tacr_construc.nbP

        % =====================
        % ==== dT0(s)_dx

        mem_dT0 = cat(3,mem_deriv_propag_low.mem_dT0.mem_dT0_dm0(:,:,:,is) , ...
                        mem_deriv_propag_low.mem_dT0.mem_dT0_dn0(:,:,:,is) , ...
                        mem_deriv_propag_low.mem_dT0.mem_dT0_dti(:,:,:,is)) ;

        % =====================
        % ==== dT0(s)_dyu0

        for j = 1:6
            mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_dT0(:,:,j)) ;
        end

        % =====================
        % ==== dT0(s)_dti

        if simulation_param.bool_J
            for j = 6+1:6+tacr_carac.nbT
                mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_dT0(:,:,j)) ;
            end
        end

        % =====================
        % ==== dT0(s)_dw0(s0)

        if simulation_param.bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;
            
            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                mem_dT0_ws0 = cat(3,mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0(:,:,:,is,is0) , ...
                                      mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0(:,:,:,is,is0) ) ;
                                      
                for j = 1:6
                    mem_deriv_propag_high.mem_Ews0(:,j,is,is0) = inv_hat6(mem_dT0_ws0(:,:,j)) ;
                end

            end
        end
    end
end