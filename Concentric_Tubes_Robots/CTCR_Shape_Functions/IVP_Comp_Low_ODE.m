function mem_deriv_propag_low ...
         = IVP_Comp_Low_ODE( ...
         is , mem_bvp , ctcr_carac , ctcr_construc , mem_deriv_propag_low)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the derivative (w.r.t the current is) of the Low-Level
% partial derivatives involved in the optimization Jacobian computation only.
% Here, there is no derivation w.r.t. the external loads and/or the actuation.
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class)           Memory of the BVP variables 
% ctcr_carac            : (class)           Robot features
% ctcr_construc         : (class)           Robot features related to the model settings
% mem_deriv_propag_low  : (class)           Memory of the Low-Level derivatives 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class)           Memory of the Low-Level derivatives 
%
% ======================================================================= %
% ======================================================================= %


    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ui_init         = ctcr_construc.ui_init ;
    theta           = mem_bvp.mem_y.mem_t(:,is) ;
    u0              = mem_bvp.mem_u0(:,is) ;

    % ========================================================== %
    % ========================================================== %



    % Vector of the tubes involved on the current discretization point
    vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
    
    for j = 1:nbT

        % (eq 31c)
        mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,j,is)            = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,is) ...
                                                                              - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;
        

        % (eq 31d)
        mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,j,is)            = hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;




        for iv = 1:length(vectT)
            i = vectT(iv) ;

            % (eq 31b)
            mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(i,j,is)  =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
        
        end

        % (eq 31a)
        mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(:,j,is)        = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(:,j,is) ;
        
        % (eq 31e)
        mem_deriv_propag_low.mem_dR0_ds.mem_dR0_duzj0_ds(:,:,j,is)      = mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,is)*hat(u0) ...
                                                                              + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is)) ;

    end





    if is >= ctcr_construc.ind_origin

        for j = 1:nbT
    
            % (eq 31f)
            mem_deriv_propag_low.mem_dP0_ds.mem_dP0_duzj0_ds(:,j,is)    =  mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,is)*[0;0;1] ;

        end

        for j = 1:3


            for iv = 1:length(vectT)
                i = vectT(iv) ;

                % (eq 31b)
                mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(i,j,is)  =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] ...
                                                                               + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
            
                % (eq 31b)
                mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(i,j,is)  =  K(1,1,i)/K(3,3,i)*((mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))'*rotz(theta(i))*[ui_init(2,is,i);-ui_init(1,is,i);0] ...
                                                                               + u0'*hat([0;0;1])*rotz(theta(i))*mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,j,is)*[ui_init(2,is,i);-ui_init(1,is,i);0]) ;
            
            end

            % (eq 31a)
            mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(:,:,is)        = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(:,:,is) ;
            mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(:,:,is)        = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(:,:,is) ;

            % (eq 31c)
            mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,is) ...
                                                                              - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;
            mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*mem_bvp.mem_y.mem_m0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,is) ...
                                                                              - hat([0;0;1])*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,is)'*ctcr_construc.vect_tau_dist(:,is) ;
            
            % (eq 31d)
            mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;
            mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,j,is)        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is))*mem_bvp.mem_y.mem_n0(:,is) ...
                                                                              + hat(mem_bvp.mem_u0(:,is))*mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,j,is) ...
                                                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,is)'*ctcr_construc.vect_f_dist(:,is) ;

            % (eq 31e)
            mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dm0j0_ds(:,:,j,is)  = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,is)*hat(u0) ...
                                                                              + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is)) ;
            mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dn0j0_ds(:,:,j,is)  = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,is)*hat(u0) ...
                                                                              + mem_bvp.mem_T(1:3,1:3,is)*hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is)) ;

            
            % (eq 31f)
            mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dm0j0_ds(:,j,is)    =  mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,is)*[0;0;1] ;
            mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dn0j0_ds(:,j,is)    =  mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,is)*[0;0;1] ;
                
        end
    end
end



