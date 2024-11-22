function [mem_bvp , mem_deriv_propag_low] ...
         = IVP_MaJ_Mem_curr( ...
         is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low , select_opt)




% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    

    K               = ctcr_construc.K ;
    nbP             = ctcr_construc.nbP ;
    
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    ui_init         = ctcr_construc.ui_init ;

    m0              = mem_bvp.mem_y.mem_m0(:,is) ;
    theta           = mem_bvp.mem_y.mem_t(:,is) ;

    % ========================================================== %
    % ========================================================== %
    

    % Vector of the tubes involved on the current discretization point
    curr_vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;

    if is >= ind_origin

%         if ~ismember(is,[vect_ind_iT(:,1);vect_ind_iT(:,3);ind_origin]) || is >= vect_ind_iT(nbT,3)
% 
%             mem_bvp.mem_inv_sum_Ki(:,:,is) = mem_bvp.mem_inv_sum_Ki(:,:,is-1) ;
% 
%         else

            % ================== Preparing Ki sum ================== %
            sum_Ki = zeros(3) ;
            for i = 1:length(curr_vectT)
                iT = curr_vectT(i) ;

                sum_Ki = sum_Ki + K(:,:,iT) ;
                
            end
            inv_sum_Ki = diag(1./[sum_Ki(1,1),sum_Ki(2,2),sum_Ki(3,3)]) ; 
        
            mem_bvp.mem_inv_sum_Ki(:,:,is) = inv_sum_Ki ;
%         end


        if is >= vect_ind_iT(nbT,3)

            mem_bvp.mem_u0(:,is) = mem_bvp.mem_u0(:,is-1) ;

        else
            
            % ============== Preparing RziKiu_init sum ============= %
            sum_R_Kzi = zeros(3,1) ;
            for i = 1:length(curr_vectT)
                iT = curr_vectT(i) ;
        
                sum_R_Kzi = sum_R_Kzi + rotz(theta(iT))*K(:,:,iT)*(ui_init(:,is,iT)) ;
            end
    
    
            % =================== u0 computation =================== %
    
            % Equation (9)
            temp                    = (mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_R_Kzi + m0)) ;
            mem_bvp.mem_u0(:,is)    = [temp(1:2,1);0] ;

        end


        if ~(strcmp(select_opt,'fsolve_Bu_num'))
    
            for j = 1:nbT

                % =============================== %
                % ======= mem_du0_duzj0(s) ====== %
                % =============================== %

                if is == nbP

                    mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is-1) ;

                else

                    
    
                    sum_duzj0 = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
    
                        sum_duzj0 = sum_duzj0 + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
    
                    end
        
                    tp_duzj0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_duzj0 + mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is) = [tp_duzj0(1:2);0] ;

                end

            end
            

            

            for j = 1:3

                if is == nbP

                    % =============================== %
                    % ====== mem_du0_dm0j0(s) ======= %
                    % =============================== %

                    mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is-1) ;

                    % =============================== %
                    % ====== mem_du0_dn0j0(s) ======= %
                    % =============================== %

                    mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is-1) ;

                else

                    % =============================== %
                    % ====== mem_du0_dm0j0(s) ======= %
                    % =============================== %
    
                    sum_dm0j0 = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
    
                        sum_dm0j0 = sum_dm0j0 + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
    
                    end
        
                    tp_duzj0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dm0j0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is) = [tp_duzj0(1:2);0] ;
    
    
                    % =============================== %
                    % ====== mem_du0_dn0j0(s) ======= %
                    % =============================== %
    
                    sum_dn0j0 = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
    
                        sum_dn0j0 = sum_dn0j0 + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
    
                    end
        
                    tp_duzj0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dn0j0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is) = [tp_duzj0(1:2);0] ;

                end

            end

        end

    end

end