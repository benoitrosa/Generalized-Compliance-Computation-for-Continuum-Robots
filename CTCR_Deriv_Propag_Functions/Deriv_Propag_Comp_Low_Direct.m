function mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        bool_J , bool_Cs0 , is , ctcr_construc , ctcr_carac , ctcr_act , simulation_param , ...
        mem_bvp , mem_deriv_propag_low)

% ======================================================================= %
% ======================================================================= %

% This function computes the Low-Level partial derivatives of u0 and T0

% ====================
% ====== INPUTS ====== 

% bool_J                : [boolean] Compute the Joint Jacobian ?
% bool_Cs0              : [boolean] Compute the Generalized Compliance Matrix ?
% is                    : [int] Index of the current curvilinear abscissa
% ctcr_construc         : Robot features related to the model settings
% ctcr_carac            : Robot features
% ctcr_act              : Robot actuation
% simulation_param      : Model settings
% mem_bvp               : Memory of the BVP variables 
% mem_deriv_propag_low  : Memory of the low-level derivatives 


% ====================
% ===== OUTPUTS ====== 

% mem_deriv_propag_low  : Memory of the low-level derivatives 


% ======================================================================= %
% ======================================================================= %
    

    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT            ;  
    Rc              = ctcr_carac.Rc             ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin  ;
    vect_res        = ctcr_construc.vect_res    ;
    K               = ctcr_construc.K           ;  
    nbP             = ctcr_construc.nbP         ;
    theta_c         = ctcr_act.theta_c          ;
    
    % ========================================================== %
    % ========================================================== %
        
    curr_vectT      = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;

    
    if is >= ind_origin
        
        for j = 1:nbT

            if bool_J

                % ============================== %
                % ======== mem_du0_dtcj ======== %

                if is == nbP
                    mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is-1) ;
                else
                    sum_dtcj = zeros(3,1) ;
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
                        sum_dtcj = sum_dtcj ...
                                   + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ...
                                   + rotz(mem_bvp.mem_y.mem_t(i,is))*K(:,:,i)*[duiinitxy_dtcj(is,Rc,i,j,theta_c,vect_ind_iT,ind_origin);0] ;
                    end
                    tp_dtcj = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dtcj + mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is) = [tp_dtcj(1:2);0] ;
                end
  
                
                

                % ============================== %
                % ======== mem_du0_dbcj ======== %

                if ~(j == nbT) && is == ctcr_construc.vect_ind_iT(j,3)+1
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is)   = - (mem_bvp.mem_u0(:,is)-mem_bvp.mem_u0(:,is-1))/ctcr_construc.vect_res(is-1) ;
                elseif ~(is == ctcr_construc.vect_ind_iT(j,3))
                    sum_dbcj = zeros(3,1) ;
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
                        sum_dbcj = sum_dbcj ...
                                   + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dbcj(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ...
                                   + rotz(mem_bvp.mem_y.mem_t(i,is))*K(:,:,i)*[duiinitxy_dbcj(is,vect_res,Rc,i,j,theta_c,vect_ind_iT,ind_origin,nbT);0] ;
                    end
                    tp_dbcj = mem_bvp.mem_inv_sum_Ki(:,:,is)   *(sum_dbcj + mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is) = [tp_dbcj(1:2);0] ;
    
                elseif is == ctcr_construc.vect_ind_iT(j,3)
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is-1) ;
                end

                % =========================================== %
                % ====== mem_dT0_dtcj and mem_dT0_dbcj ====== %

                mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtcj(:,:,j,is)     = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,is)  , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtcj(:,j,is)]  ; zeros(1,4)] ;
                mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dbcj(:,:,j,is)     = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)  , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj(:,j,is)]  ; zeros(1,4)] ;
            
            end

            % ============================== %
            % ======= mem_dT0_duzj0 ======== %

            mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_duzj0(:,:,j,is)        = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,j,is) , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,j,is)] ; zeros(1,4)] ;

        end

        for j = 1:3

            % ============================================= %
            % ====== mem_dT0_dm0j0 and mem_dT0_dn0j0 ====== %

            mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dm0j0(:,:,j,is)        = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,j,is)  , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,j,is)]  ; zeros(1,4)] ;
            mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dn0j0(:,:,j,is)        = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,j,is)  , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,j,is)]  ; zeros(1,4)] ;
        end
        



        if bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
                
                for j = 1:3

                    % ============================================= %
                    % ====== mem_du0_dtaus0 and mem_du0_dfs0 ====== %

                    if is == nbP

                        mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is-1,is0) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is-1,is0) ;
                    
                    else

                        sum_dtaus0 = zeros(3,1) ;
                        sum_dfs0 = zeros(3,1) ;
                        for iv = 1:length(curr_vectT)
                            i = curr_vectT(iv) ;
        
                            sum_dtaus0 = sum_dtaus0 + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,j,is,is0)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
                            sum_dfs0   = sum_dfs0   + hat([0;0;1])*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,j,is,is0)  *K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;

                        end
                        tp_dtaus0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dtaus0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0)) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) = [tp_dtaus0(1:2);0] ;
            
                        tp_dfs0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dfs0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0)) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)   = [tp_dfs0(1:2);0] ;

                    end

                    % ============================================= %
                    % ====== mem_dT0_dtaus0 and mem_dT0_dfs0 ====== %

                    mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dtaus0(:,:,j,is,is0)      = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,is,is0) , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtaus0(:,j,is,is0)] ; zeros(1,4)] ;
                    mem_deriv_propag_low.mem_d00Ts.mem_d00Ts_dfs0(:,:,j,is,is0)        = [[mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,is,is0) , mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dfs0(:,j,is,is0)]     ; zeros(1,4)] ;
                
                end
            end
        end
    end
end