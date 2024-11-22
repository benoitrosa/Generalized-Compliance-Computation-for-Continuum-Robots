
function  mem_deriv_propag_low = IVP_Comp_Low_ODE(is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % ====================================================================================================================== %
    % ================================================ Getting input values ================================================ %
    
    nbT             = ctcr_carac.nbT ;    
    
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    ui_init         = ctcr_construc.ui_init ;

    theta           = mem_bvp.mem_y.mem_t(:,is) ;
    u0              = mem_bvp.mem_u0(:,is) ;

    % ====================================================================================================================== %
    % ====================================================================================================================== %



    % Vector of the tubes involved on the current discretization point
    vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
    
    for j = 1:nbT


        % ============================== %
        % ====== mem_dm0_duzj0_ds ====== %
        % ============================== %

        mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                          + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,is) ...
                                                                          - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                          - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;
        

        % ============================== %
        % ====== mem_dn0_duzj0_ds ====== %
        % ============================== %

        mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                          + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                          - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;


        for iv = 1:length(vectT)
            i = vectT(iv) ;

            % ============================== %
            % ====== mem_duzi_duzj0_ds ===== %
            % ============================== %

            mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(i,j,is)      =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
        
        end

        
        % ============================== %
        % ====== mem_dti_duzj0_ds ====== %
        % ============================== %

        mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(:,j,is)            = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(:,j,is) ;

        
        % ============================== %
        % ======= d00Rs_duzj0_ds ======= %
        % ============================== %

        mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_duzj0_ds(:,:,j,is)      =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is)) ;

    end





    if is >= ind_origin

        for j = 1:nbT

            % ============================== %
            % ===== mem_d00Ps_duzj0_ds ===== %
            % ============================== %
    
            mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_duzj0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is)*[0;0;1] ;

        end

        for j = 1:3


            for iv = 1:length(vectT)
                i = vectT(iv) ;

                % ============================== %
                % ====== mem_duzi_dm0j0_ds ===== %
                % ============================== %

                mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(i,j,is)  =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
            

                % ============================== %
                % ====== mem_duzi_dn0j0_ds ===== %
                % ============================== %

                mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(i,j,is)  =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
            
            end

            % ============================== %
            % ====== mem_dti_dm0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(:,:,is)        = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(:,:,is) ;


            % ============================== %
            % ====== mem_dti_dn0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(:,:,is)        = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(:,:,is) ;


            % ============================== %
            % ====== mem_dm0_dm0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,is) ...
                                                                              - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;


            % ============================== %
            % ====== mem_dm0_dn0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,is) ...
                                                                              - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;

            

            % ============================== %
            % ====== mem_dn0_dm0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;

      
            % ============================== %
            % ====== mem_dn0_dn0j0_ds ====== %
            % ============================== %

            mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;

            


         
            % ============================== %
            % ======= d00Rs_dm0j0_ds ======= %
            % ============================== %

            mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dm0j0_ds(:,:,j,is)  =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is)) ;


            % ============================== %
            % ======= d00Rs_dn0j0_ds ======= %
            % ============================== %

            mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dn0j0_ds(:,:,j,is)  =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)*hat(u0) + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is)) ;


            % ============================== %
            % ===== mem_d00Ps_dm0j0_ds ===== %
            % ============================== %

            mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dm0j0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)*[0;0;1] ;

            
            % ============================== %
            % ===== mem_d00Ps_dn0j0_ds ===== %
            % ============================== %
                
            mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dn0j0_ds(:,j,is) =  mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)*[0;0;1] ;
                

        end
        
    end


end



