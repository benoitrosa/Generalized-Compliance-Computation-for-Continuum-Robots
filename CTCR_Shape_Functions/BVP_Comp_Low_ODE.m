function  mem_deriv_propag_low = BVP_Comp_Low_ODE(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    
    
    nbP             = ctcr_construc.nbP ;
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    ui_init         = ctcr_construc.ui_init ;
    vect_tau_dist   = ctcr_construc.vect_tau_dist(:,is) ;
    vect_f_dist     = ctcr_construc.vect_f_dist(:,is) ;

    theta           = mem_bvp.mem_y.mem_t(:,is) ;
    m0              = mem_bvp.mem_y.mem_m0(:,is) ;
    n0              = mem_bvp.mem_y.mem_n0(:,is) ;
    Trans           = mem_bvp.mem_T(:,:,is) ;

    u0              = mem_bvp.mem_u0(:,is) ;

    % ========================================================== %
    % ========================================================== %



    if ~(is == nbP)

        % Vector of the tubes involved on the current discretization point
        curr_vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;


        % ============================== %
        % ====== mem_dti_duzj0_ds ====== %
        % ============================== %

        mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(:,:,is) = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(:,:,is) ;


        if is >= ind_origin
  
            for j=1:nbT

                for iv = 1:length(curr_vectT)
                    i = curr_vectT(iv) ;
        
                    % =============================== %
                    % ====== mem_duzi_duzj0_ds ====== %
                    % =============================== %
    
                    mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(i,j,is) =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
        
                end

                % ============================== %
                % ====== mem_dm0_duzj0_ds ====== %
                % ============================== %

                mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*m0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,is) ...
                                                                           - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)'*vect_tau_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*vect_tau_dist ) ;
                
                
                % ============================== %
                % ====== mem_dn0_duzj0_ds ====== %
                % ============================== %

                mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*n0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)'*vect_f_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*vect_f_dist ) ;


                % ============================== %
                % ======= d00Rs_duzj0_ds ======= %
                % ============================== %
            
                mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_duzj0_ds(:,:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is)) ;


            end

            for j=1:3

                for iv = 1:length(curr_vectT)
                    i = curr_vectT(iv) ;

                    % ============================== %
                    % ===== mem_duzi_dm0j0_ds ====== %
                    % ============================== %

                    mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(i,j,is) =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
                
    
                    % ============================== %
                    % ===== mem_duzi_dn0j0_ds ====== %
                    % ============================== %

                    mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(i,j,is) =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
            
                end
            
                % ============================= %
                % ===== mem_dm0_dm0j0_ds ====== %
                % ============================= %

                mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*m0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,is) ...
                                                                           - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)'*vect_tau_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*vect_tau_dist ) ;
                
                % ============================== %
                % ====== mem_dm0_dn0j0_ds ====== %
                % ============================== %

                mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*m0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,is) ...
                                                                           - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)'*vect_tau_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*vect_tau_dist ) ;

                % ============================== %
                % ====== mem_dn0_dm0j0_ds ====== %
                % ============================== %

                mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*n0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)'*vect_f_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*vect_f_dist ) ;

                % ============================== %
                % ====== mem_dn0_dn0j0_ds ====== %
                % ============================== %
                
                mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,j,is) = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*n0  ...
                                                                           + hat(u0)*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                           - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)'*vect_f_dist ; %...
                                                                           %- Trans(1:3,1:3)'*(hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*vect_f_dist ) ;

                % ============================== %
                % ======= d00Rs_dm0j0_ds ======= %
                % ============================== %
                
                mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dm0j0_ds(:,:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is)) ;
    
    
    
                % ============================== %
                % ======= d00Rs_dn0j0_ds ======= %
                % ============================== %
                
                mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dn0j0_ds(:,:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is)) ;

            end

            % ============================== %
            % ====== mem_dti_dm0j0_ds ====== %
            % ============================== %
                
            mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(:,:,is) = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(:,:,is) ;



            % ============================== %
            % ====== mem_dti_dn0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(:,:,is) = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(:,:,is) ;



        end



    end




end








