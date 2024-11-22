function mem_deriv_propag_low ...
    = Deriv_Propag_Comp_Low_ODE(...
    bool_J , bool_Cs0 , is , mem_bvp , ctcr_carac , ctcr_act , ctcr_construc , ...
    simulation_param , mem_deriv_propag_low)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT                ;    
    
    nbP             = ctcr_construc.nbP             ;
    K               = ctcr_construc.K               ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT     ;
    ind_origin      = ctcr_construc.ind_origin      ;
    vect_res        = ctcr_construc.vect_res        ;
    ui_init         = ctcr_construc.ui_init         ;
    vect_z          = ctcr_construc.vect_z          ;

    theta           = mem_bvp.mem_y.mem_t(:,is)     ;
    m0              = mem_bvp.mem_y.mem_m0(:,is)    ;
    n0              = mem_bvp.mem_y.mem_n0(:,is)    ;

    u0              = mem_bvp.mem_u0(:,is)          ;
    Trans           = mem_bvp.mem_T(:,:,is)         ;

    Rc              = ctcr_carac.Rc                 ;
    Lc              = ctcr_carac.Lc                 ;
    L               = ctcr_carac.L                  ;

    theta_c         = ctcr_act.theta_c                  ;
    beta_c          = ctcr_act.beta_c                   ;

    vect_tau_dist   = ctcr_construc.vect_tau_dist(:,is) ;
    vect_f_dist     = ctcr_construc.vect_f_dist(:,is)   ;
    
    % ========================================================== %
    % ========================================================== %


    if is == 222
        disp('')
    end
    







    if ~(is == nbP)

        % Vector of the tubes involved on the current discretization point
        curr_vectT                  = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
        prev_vectT                  = find(vect_ind_iT(:,1)<=is-1 & is-1<=vect_ind_iT(:,3)) ;
        vectT_first_outside_pt      = find(is == vect_ind_iT(:,3)+1) ;

        if bool_J

                % ============================== %
                % ======= mem_dti_dtcj_ds ====== %
                % ============================== %
                
                mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds(:,:,is) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(:,:,is) ;
        
                % ============================== %
                % ======= mem_dti_dbcj_ds ====== %
                % ============================== %
    
                mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds(:,:,is) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(:,:,is) ;
            
        end

        if is >= ind_origin

            % if bool_J || bool_Cs0
            % 
            %     for j = 1:nbT
            % 
            %         % ============================== %
            %         % ===== mem_d00Ps_duzj0_ds ===== %
            %         % ============================== %
            % 
            %         mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_duzj0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)*[0;0;1] ;
            % 
            %     end
            % 
            %     for j = 1:3
            % 
            %         % ============================== %
            %         % ===== mem_d00Ps_dm0j0_ds ===== %
            %         % ============================== %
            % 
            %         mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dm0j0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)*[0;0;1] ;
            % 
            %         % ============================== %
            %         % ===== mem_d00Ps_dn0j0_ds ===== %
            %         % ============================== %
            % 
            %         mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dn0j0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)*[0;0;1] ;
            % 
            %     end
            % end
                

            if bool_J
                for j = 1:nbT
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
    
                        % ============================== %
                        % ====== mem_duzi_dtcj_ds ====== %
                        % ============================== %
            
                        tp_uinit = duiinitxy_dtcj(is,Rc,i,j,theta_c,vect_ind_iT,ind_origin) ;
                        mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds(i,j,is) =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*rotz(theta(i))*[tp_uinit(2);-tp_uinit(1);0]) ;
                        
                        
                            
                        % ============================== %
                        % ======= mem_duzi_dbcj_ds ===== %
                        % ============================== %
        
                        tp_uinit = duiinitxy_dbcj(is,vect_res,Rc,i,j,theta_c,vect_ind_iT,ind_origin,nbT) ;
                        mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds(i,j,is) =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dbcj(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*rotz(theta(i))*[tp_uinit(2);-tp_uinit(1);0]) ;
                        
    
                    end
    
    
                    % ============================== %
                    % ======= mem_dm0_dtcj_ds ====== %
                    % ============================== %
    
                    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is))*m0  ...
                                                                               + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,j,is) ...
                                                                               - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,j,is) ...
                                                                               - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,is)'*vect_tau_dist ;
                   
                    % ============================== %
                    % ======= mem_dm0_dbcj_ds ====== %
                    % ============================== %
                
                    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is))*m0  ...
                                                                               + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is) ...
                                                                               - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is) ...
                                                                               - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)'*vect_tau_dist ;
    
                    % ============================== %
                    % ======= mem_dn0_dtcj_ds ====== %
                    % ============================== %
    
                    mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is))*n0  ...
                                                                               + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,j,is) ...
                                                                               - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,is)'*vect_f_dist ;
    
                    % ============================== %
                    % ======= mem_dn0_dbcj_ds ====== %
                    % ============================== %
    
                    mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is))*n0  ...
                                                                                   + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is) ...
                                                                                   - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)'*vect_f_dist ;
    
                    % ============================== %
                    % ====== mem_d00Rs_dtcj_ds ===== %
                    % ============================== %
        
                    mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtcj_ds(:,:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is)) ;
                     
        
                    % ============================== %
                    % ====== mem_d00Rs_dbcj_ds ===== %
                    % ============================== %
        
                    mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dbcj_ds(:,:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is)) ;


                    % ============================== %
                    % ====== mem_d00Ps_dtcj_ds ===== %
                    % ============================== %
        
                    mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtcj_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,is)*[0;0;1] ;
        
        
                    % ============================== %
                    % ====== mem_d00Ps_dbcj_ds ===== %
                    % ============================== %
        
                    mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dbcj_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)*[0;0;1] ;
                
                end
            end
                
            



            if bool_Cs0

                pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

                for tp_is0 = 1:length(pt_s0_LIT_curr)
                    is0 = pt_s0_LIT_curr(tp_is0) ;
        
                    for j = 1:3
    
                        for iv = 1:length(curr_vectT)
                            i = curr_vectT(iv) ;
    
                            % ============================== %
                            % ===== mem_duzi_dtaus0_ds ===== %
                            % ============================== %
        
                            dui_dtaus0 = (hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,j,is,is0))'*u0 + rotz(theta(i))'*mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) ;
                            duixy_dtaus0 = dui_dtaus0(1:2) ;
        
                            mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds(i,j,is,is0) = K(1,1,i)/K(3,3,i)*duixy_dtaus0'*[ui_init(2,is,i);-ui_init(1,is,i)] ;
                        
    
                            % ============================== %
                            % ======= mem_duzi_dfs0_ds ===== %
                            % ============================== %
        
                           dui_dfs0 = (hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,j,is,is0))'*u0 + rotz(theta(i))'*mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0) ;
                           duixy_dfs0 = dui_dfs0(1:2) ;
        
                           mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds(i,j,is,is0) = K(1,1,i)/K(3,3,i)*duixy_dfs0'*[ui_init(2,is,i);-ui_init(1,is,i)] ;
    
    
    
    
                        end
    
                        % ============================== %
                        % ====== mem_dm0_dtaus0_ds ===== %
                        % ============================== %
    
                        mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds(:,j,is,is0) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0))*m0  ...
                                                                                             + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0) ...
                                                                                             - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,is,is0) ...
                                                                                             - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,is,is0)'*vect_tau_dist ...
                                                                                             - Trans(1:3,1:3)'*(delta_ij(is,is0)*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)]/vect_res(is)) ;
                        % ============================== %
                        % ======= mem_dm0_dfs0_ds ====== %
                        % ============================== %
    
                        mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds(:,j,is,is0) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0))*m0  ...
                                                                                             + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0) ...
                                                                                             - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,is,is0) ...
                                                                                             - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,is,is0)'*vect_tau_dist ;
                        
                        % ============================== %
                        % ====== mem_dn0_dtaus0_ds ===== %
                        % ============================== %
    
                        mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds(:,j,is,is0) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0))*n0  ...
                                                                                             + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,is,is0) ...
                                                                                             - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,is,is0)'*vect_f_dist ;
                        
                        
                        % ============================== %
                        % ======= mem_dn0_dfs0_ds ====== %
                        % ============================== %
    
                        mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds(:,j,is,is0) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0))*n0  ...
                                                                                             + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,is,is0) ...
                                                                                             - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,is,is0)'*vect_f_dist ...
                                                                                             - Trans(1:3,1:3)'*(delta_ij(is,is0)*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)]/vect_res(is)) ;
    
                        % ============================== %
                        % ==== mem_d00Rs_dtaus0_ds ===== %
                        % ============================== %
            
                        mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtaus0_ds(:,:,j,is,is0) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,is,is0)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0)) ;
            
                        % ============================== %
                        % ====== mem_d00Rs_dfs0_ds ===== %
                        % ============================== %
            
                        mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dfs0_ds(:,:,j,is,is0) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,is,is0)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)) ;
            
                        % ============================== %
                        % ==== mem_d00Ps_dtaus0_ds ===== %
                        % ============================== %
            
                        mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtaus0_ds(:,j,is,is0) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,is,is0)*[0;0;1] ;
            
                        % ============================== %
                        % ====== mem_d00Ps_dfs0_ds ===== %
                        % ============================== %
            
                        mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dfs0_ds(:,j,is,is0) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,is,is0)*[0;0;1] ;
    
                    end
    
                    % ============================== %
                    % ====== mem_dti_dtaus0_ds ===== %
                    % ============================== %
    
                    mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds(:,:,is,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(:,:,is,is0) ;
    
                    % ============================== %
                    % ======= mem_dti_dfs0_ds ====== %
                    % ============================== %
    
                    mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds(:,:,is,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(:,:,is,is0) ;
    
    
                end
            end

        end

    end

end