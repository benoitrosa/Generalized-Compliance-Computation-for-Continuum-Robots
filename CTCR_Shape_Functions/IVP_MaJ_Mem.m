function [mem_bvp , mem_deriv_propag_low] = IVP_MaJ_Mem(is , Trans , mem_bvp , ctcr_construc , mem_deriv_propag_low,select_opt)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % ========================================================== %
    % ================== Getting input values ================== %
        
    nbP             = ctcr_construc.nbP ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    vect_res        = ctcr_construc.vect_res ;

    % ========================================================== %
    % ========================================================== %
    

    
    if ~(is==nbP)
    
        % Vector of the tubes involved on the current discretization point
        curr_vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
        next_vectT = find(vect_ind_iT(:,1)<=is+1 & is+1<=vect_ind_iT(:,3)) ;
        vectT = intersect(next_vectT,curr_vectT) ;

        vectT_first_pt = find(is+1 == vect_ind_iT(:,1)) ;

        if ~isempty(vectT_first_pt)
            next_vectT = next_vectT(next_vectT ~= vectT_first_pt) ;
        end

%         if is >= 144
%             disp(' ')
%         end

        % =============================== %
        % ========== B0(0)Ts+1 ========== %
        % =============================== %

        mem_bvp.mem_T(:, :, is+1) = mem_bvp.mem_T(:, :, is)*Trans ;


        for iv = 1:length(next_vectT)
            i = next_vectT(iv) ; 

            % =============================== %
            % ========= theta_i(s+1) ======== %
            % =============================== %
    
            mem_bvp.mem_y.mem_t(i,is+1) = mem_bvp.mem_y.mem_t(i,is) + mem_bvp.mem_ys.mem_ts(i,is)*vect_res(is) ; 
                
            % =============================== %
            % ========== uz_i(s+1) ========== %
            % =============================== %
    
            mem_bvp.mem_y.mem_uz(i,is+1) = mem_bvp.mem_y.mem_uz(i,is) + mem_bvp.mem_ys.mem_uzs(i,is)*vect_res(is) ; 
        
            if ~(strcmp(select_opt,'fsolve_Bu_num'))

                % =============================== %
                % ====== mem_dti_duzj0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,:,is+1)         = mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,:,is)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
            
                
            end

        end

        if is >= ind_origin

            % =============================== %
            % =========== m0(s+1) =========== %
            % =============================== %

            mem_bvp.mem_y.mem_m0(:,is+1) = mem_bvp.mem_y.mem_m0(:,is) + mem_bvp.mem_ys.mem_m0s(:,is)*vect_res(is) ; 
    
            % =============================== %
            % =========== n0(s+1) =========== %
            % =============================== %
            
            mem_bvp.mem_y.mem_n0(:,is+1) = mem_bvp.mem_y.mem_n0(:,is) + mem_bvp.mem_ys.mem_n0s(:,is)*vect_res(is) ;


            if ~(strcmp(select_opt,'fsolve_Bu_num'))

                for iv = 1:length(next_vectT)
                    i = next_vectT(iv) ;
    
                    % =============================== %
                    % ===== mem_duzi_duzj0(s+1) ===== %
                    % =============================== %
    
                    mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,is+1)         = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,is)         + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                    
                    % =============================== %
                    % ===== mem_duzi_dm0j0(s+1) ===== %
                    % =============================== %
    
                    mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,is+1)         = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,is)         + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                    
                    % =============================== %
                    % ===== mem_duzi_dn0j0(s+1) ===== %
                    % =============================== %
                    
                    mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,is+1)         = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,is)         + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                
                    % =============================== %
                    % ====== mem_dti_dm0j0(s+1) ===== %
                    % =============================== %
                    
                    mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,:,is+1)         = mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,:,is)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                    
                    % =============================== %
                    % ====== mem_dti_dn0j0(s+1) ===== %
                    % =============================== %

                    mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,:,is+1)         = mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,:,is)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                

                end

                % =============================== %
                % ====== mem_dm0_duzj0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,:,is+1)         = mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,:,is)         + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ====== mem_dm0_dm0j0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,:,is+1)         = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,:,is)         + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ====== mem_dm0_dn0j0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,:,is+1)         = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,:,is)         + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
            
                % =============================== %
                % ====== mem_dn0_duzj0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,:,is+1)         = mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,:,is)         + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ====== mem_dn0_dm0j0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,:,is+1)         = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,:,is)         + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ====== mem_dn0_dn0j0(s+1) ===== %
                % =============================== %

                mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,:,is+1)         = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,:,is)         + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,:,is)       *ctcr_construc.vect_res(is) ;
            
                % =============================== %
                % ===== mem_d00Rs_duzj0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,:,is+1)              = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,:,is)          + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_duzj0_ds(:,:,:,is)        *ctcr_construc.vect_res(is) ;

                % =============================== %
                % ===== mem_d00Rs_dm0j0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,:,is+1)              = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,:,is)          + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dm0j0_ds(:,:,:,is)        *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ===== mem_d00Rs_dn0j0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,:,is+1)              = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,:,is)          + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dn0j0_ds(:,:,:,is)        *ctcr_construc.vect_res(is) ;
            
                % =============================== %
                % ===== mem_d00Ps_dm0j0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is+1)              = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is)          + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dm0j0_ds(:,:,is)        *ctcr_construc.vect_res(is) ;
                
                % =============================== %
                % ===== mem_d00Ps_dn0j0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is+1)              = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is)          + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dn0j0_ds(:,:,is)        *ctcr_construc.vect_res(is) ;
            
                % =============================== %
                % ===== mem_d00Ps_duzj0(s+1) ==== %
                % =============================== %

                mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is+1)              = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is)          + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_duzj0_ds(:,:,is)        *ctcr_construc.vect_res(is) ;

            end

        end

    end

end





