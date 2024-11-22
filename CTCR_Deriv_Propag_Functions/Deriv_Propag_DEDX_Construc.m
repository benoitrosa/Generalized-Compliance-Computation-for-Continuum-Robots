function mem_deriv_propag_high ...
         = Deriv_Propag_DEDX_Construc(...
         bool_J , bool_Cs0 , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ...
         mem_deriv_propag_high , simulation_param)


% EXPLAIN THE FUNCTIONS
%
%
%
%
% 

    % ========================================================== %
    % ================== Getting input values ================== %

    nbP             = ctcr_construc.nbP ;
    ind_origin      = ctcr_construc.ind_origin ;
    
    nbT             = ctcr_carac.nbT ;
    
    % ========================================================== %
    % ========================================================== %
    




    for is = ind_origin : nbP

        % ================================ %
        % =============== E ============== %

        mem_d00Ts = cat(3,mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_duzj0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dm0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dn0j0(:,:,:,is)   , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtcj(:,:,:,is)    , ...
                          mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dbcj(:,:,:,is)    ) ;

        % ==== uzj0 & m00 & n00 ==== %
        for j = 1:nbT+6
            mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_d00Ts(:,:,j)) ;
        end
        
        if bool_J
            % ==== tcj & bcj ==== %
            for j = nbT+7:3*nbT+6
                mem_deriv_propag_high.mem_E(:,j,is) = inv_hat6(mem_d00Ts(:,:,j)) ;
            end
        end


        

        if bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;
            
            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
    
                % ================================ %
                % ============== Ews0 ============ %
                mem_d00Ts_ws0 = cat(3,mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtaus0(:,:,:,is,is0)  , ...
                                      mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dfs0(:,:,:,is,is0)  ) ;
                                      
                for j = 1:6
                    mem_deriv_propag_high.mem_Ews0(:,j,is,is0) = inv_hat6(mem_d00Ts_ws0(:,:,j)) ;
                end
                
            end
            
        end

    end
    
end