function mem_deriv_propag_high ...
         = Deriv_Propag_DEDX_Construc(...
         bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , ...
         simulation_param , mem_deriv_propag_low , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the high-level partial derivatives Ex
%
% ====================
% ====== INPUTS ====== 
%
% bool_J                : (boolean) Compute the Joint Jacobian ?
% bool_Cs0              : (boolean) Compute the Generalized Compliance Matrix ?
% ctcr_construc         : (class) Robot features related to the model settings
% ctcr_carac            : (class) Robot features
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



    for is = ctcr_construc.ind_origin : ctcr_construc.nbP

        % =========================== %
        % ======== dT0(s)_dx ======== %

        mem_dT0 = cat(3,mem_deriv_propag_low.mem_dT0.mem_dT0_duzj0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_dT0.mem_dT0_dm0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_dT0.mem_dT0_dn0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_dT0.mem_dT0_dtcj(:,:,:,is)    , ...
                          mem_deriv_propag_low.mem_dT0.mem_dT0_dbcj(:,:,:,is)    ) ;

        
        % ============================= %
        % ======== dT0(s)_dyu0 ======== %
        % (eq 34)

        for j = 1:ctcr_carac.nbT+6
            mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_dT0(:,:,j)) ;
        end


        % ============================= %
        % ========= dT0(s)_dq ========= %
        % (eq 34)

        if bool_J
            for j = ctcr_carac.nbT+7:3*ctcr_carac.nbT+6
                mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_dT0(:,:,j)) ;
            end
        end


        % ============================== %
        % ======= dT0(s)_dw0(s0) ======= %
        % (eq 34)

        if bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;
            
            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                mem_dT0_ws0 = cat(3,mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0(:,:,:,is,is0)  , ...
                                      mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0(:,:,:,is,is0)  ) ;
                                      
                for j = 1:6
                    mem_deriv_propag_high.mem_Ews0(:,j,is,is0) = inv_hat6(mem_dT0_ws0(:,:,j)) ;
                end
            end
        end
    end
end