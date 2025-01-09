function mem_deriv_propag_high ...
         = Deriv_Propag_DEDX_Construc(...
         bool_J , bool_Cs0 , ctcr_construc , ctcr_carac , ...
         simulation_param , mem_deriv_propag_low , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %

% This function computes the high-level partial derivatives Ex

% ====================
% ====== INPUTS ====== 

% bool_J                : [boolean] Compute the Joint Jacobian ?
% bool_Cs0              : [boolean] Compute the Generalized Compliance Matrix ?
% ctcr_construc         : Robot features related to the model settings
% ctcr_carac            : Robot features
% simulation_param      : Model settings
% mem_deriv_propag_low  : Memory of the low-level derivatives 
% mem_deriv_propag_high : Memory of the high-level partial derivatives


% ====================
% ===== OUTPUTS ====== 

% mem_deriv_propag_high : Memory of the High-Level partial derivatives


% ======================================================================= %
% ======================================================================= %




    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;
    
    % ========================================================== %
    % ========================================================== %
    


    for is = ctcr_construc.ind_origin : ctcr_construc.nbP

        % =========================== %
        % ======== mem_dT0_dx ======== %

        mem_d00Ts = cat(3,mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_duzj0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dm0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dn0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtcj(:,:,:,is)    , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dbcj(:,:,:,is)    ) ;

        
        % ============================== %
        % ======== mem_dT0_dyu0 ======== %

        for j = 1:nbT+6
            mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_d00Ts(:,:,j)) ;
        end


        % ============================== %
        % ========= mem_dT0_dq ========= %

        if bool_J
            for j = nbT+7:3*nbT+6
                mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_d00Ts(:,:,j)) ;
            end
        end


        % ============================== %
        % ======= mem_dT0_dw0s0 ======== %

        if bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;
            
            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                mem_d00Ts_ws0 = cat(3,mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtaus0(:,:,:,is,is0)  , ...
                                      mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dfs0(:,:,:,is,is0)  ) ;
                                      
                for j = 1:6
                    mem_deriv_propag_high.mem_Ews0(:,j,is,is0) = inv_hat6(mem_d00Ts_ws0(:,:,j)) ;
                end
            end
        end
    end
end