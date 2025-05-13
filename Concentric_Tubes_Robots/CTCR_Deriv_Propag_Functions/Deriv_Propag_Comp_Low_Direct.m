function mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        is , ctcr_construc , ctcr_carac , ctcr_act , simulation_param , ...
        mem_bvp , mem_deriv_propag_low)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the Low-Level partial derivatives of u0 and T0
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% ctcr_construc         : (class) Robot features related to the model settings
% ctcr_carac            : (class) Robot features
% ctcr_act              : (class) Robot actuation
% simulation_param      : (class) Model settings
% mem_bvp               : (class) Memory of the BVP variables 
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
%
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
        
        hat_001 = hat([0;0;1]) ; 
        
        for j = 1:nbT

            if simulation_param.bool_J

                
                % ============================= %
                % ======== du0(s)_dtcj ======== %
                % (eq 32a)

                if is == nbP
                    mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is)   = mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is-1) ;
                else
                    sum_dtcj = zeros(3,1) ;
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
                        sum_dtcj = sum_dtcj ...
                                   + hat_001*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ...
                                   + rotz(mem_bvp.mem_y.mem_t(i,is))*K(:,:,i)*[duiinitxy_dtcj(is,Rc,i,j,theta_c,vect_ind_iT,ind_origin);0] ;
                    end
                    tp_dtcj = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dtcj + mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dtcj(:,j,is)   = [tp_dtcj(1:2);0] ;
                end
  
                
                

                % ============================= %
                % ======== du0(s)_dbcj ======== %
                % (eq 32a)

                if ~(j == nbT) && is == ctcr_construc.vect_ind_iT(j,3)+1
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is)   = - (mem_bvp.mem_u0(:,is)-mem_bvp.mem_u0(:,is-1))/ctcr_construc.vect_res(is-1) ;
                elseif ~(is == ctcr_construc.vect_ind_iT(j,3))
                    sum_dbcj = zeros(3,1) ;
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
                        sum_dbcj = sum_dbcj ...
                                   + hat_001*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dbcj(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ...
                                   + rotz(mem_bvp.mem_y.mem_t(i,is))*K(:,:,i)*[duiinitxy_dbcj(is,vect_res,Rc,i,j,theta_c,vect_ind_iT,ind_origin,nbT);0] ;
                    end
                    tp_dbcj = mem_bvp.mem_inv_sum_Ki(:,:,is)   *(sum_dbcj + mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is)   = [tp_dbcj(1:2);0] ;
    
                elseif is == ctcr_construc.vect_ind_iT(j,3)
                    mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is)   = mem_deriv_propag_low.mem_du0.mem_du0_dbcj(:,j,is-1) ;
                end

                % ========================================= %
                % ====== dT0(s)_dtcj and dT0(s)_dbcj ====== %

                mem_deriv_propag_low.mem_dT0.mem_dT0_dtcj(:,:,j,is)     = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj(:,:,j,is)  , mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj(:,j,is)]  ; zeros(1,4)] ;
                mem_deriv_propag_low.mem_dT0.mem_dT0_dbcj(:,:,j,is)     = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,is)  , mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj(:,j,is)]  ; zeros(1,4)] ;
            
            end

            % =========================== %
            % ======= dT0(s)_duz ======== %

            mem_deriv_propag_low.mem_dT0.mem_dT0_duzj0(:,:,j,is)        = [[mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0(:,:,j,is) , mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0(:,j,is)] ; zeros(1,4)] ;

        end

        for j = 1:3

            % ======================================= %
            % ====== dT0(s)_dm0 and dT0(s)_dn0 ====== %

            mem_deriv_propag_low.mem_dT0.mem_dT0_dm0j0(:,:,j,is)        = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0(:,:,j,is)  , mem_deriv_propag_low.mem_dP0.mem_dP0_dm0j0(:,j,is)]  ; zeros(1,4)] ;
            mem_deriv_propag_low.mem_dT0.mem_dT0_dn0j0(:,:,j,is)        = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0(:,:,j,is)  , mem_deriv_propag_low.mem_dP0.mem_dP0_dn0j0(:,j,is)]  ; zeros(1,4)] ;
        end
        



        if simulation_param.bool_Cs0

            pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

            for tp_is0 = 1:length(pt_s0_LIT_curr)
                is0 = pt_s0_LIT_curr(tp_is0) ;
                
                for j = 1:3

                    % ============================================= %
                    % ==== du0(s)_dtau0(s0) and du0(s)_df0(s0) ==== %
                    % (eq 32a)

                    if is == nbP

                        mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is-1,is0) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is-1,is0) ;
                    
                    else

                        sum_dtaus0 = zeros(3,1) ;
                        sum_dfs0 = zeros(3,1) ;
                        for iv = 1:length(curr_vectT)
                            i = curr_vectT(iv) ;
        
                            sum_dtaus0 = sum_dtaus0 + hat_001*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,j,is,is0)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
                            sum_dfs0   = sum_dfs0   + hat_001*rotz(mem_bvp.mem_y.mem_t(i,is))*mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,j,is,is0)  *K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;

                        end
                        tp_dtaus0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dtaus0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0)) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) = [tp_dtaus0(1:2);0] ;
            
                        tp_dfs0 = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dfs0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0)) ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)   = [tp_dfs0(1:2);0] ;

                    end


                    % ============================================= %
                    % ==== dT0(s)_dtau0(s0) and dT0(s)_df0(s0) ==== %

                    mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0(:,:,j,is,is0)      = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0) , mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0(:,j,is,is0)] ; zeros(1,4)] ;
                    mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0(:,:,j,is,is0)        = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0) , mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0(:,j,is,is0)]     ; zeros(1,4)] ;
                
                end
            end
        end
    end
end