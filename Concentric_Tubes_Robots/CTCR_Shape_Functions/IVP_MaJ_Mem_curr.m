function [mem_bvp , mem_deriv_propag_low] ...
         = IVP_MaJ_Mem_curr( ...
         is , mem_bvp , ctcr_carac , ctcr_construc , ...
         mem_deriv_propag_low , bool_opt_lit)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the u0(s) values for the current is and the partial derivatives 
% of u0(s) involved in the optimization Jacobian computation
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class)           Memory of the BVP variables 
% ctcr_carac            : (class)           Robot features
% ctcr_construc         : (class)           Robot features related to the model settings
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
% bool_opt_lit          : (boolean)         Compute the derivatives thanks to the LLDPM ?
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_deriv_propag_low  : (class)           Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %




    % ========================================================== %
    % ================== Getting input values ================== %
    
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ui_init         = ctcr_construc.ui_init ;
    m0              = mem_bvp.mem_y.mem_m0(:,is) ;

    % ========================================================== %
    % ========================================================== %
    

    % Vector of the tubes involved on the current discretization point
    curr_vectT              = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;

    % Assembly of the rigid transform matrix
    mem_bvp.mem_T(:,:,is)   = [[mem_bvp.mem_y.mem_R0(:,:,is) , mem_bvp.mem_y.mem_p0(:,is)];[0,0,0,1]] ;
    


    if is >= ctcr_construc.ind_origin


        % ====================
        % ==== Pre-computing is dependent variables

        hat_ez = hat([0;0;1]) ;



        % ====================
        % ==== Pre-computing is and i dependent variables

        rot_ti = zeros(3,3,ctcr_carac.nbT) ;

        for iv = 1:length(curr_vectT)
            i               = curr_vectT(iv) ;
            rot_ti(:,:,i)   = rotz(mem_bvp.mem_y.mem_t(i,is)) ;
        end



        % ====================
        % ==== u0(s) (eq 9))

        % Computing sum Ki
        sum_Ki      = zeros(3) ;

        for i = 1:length(curr_vectT)
            iT      = curr_vectT(i) ;
            sum_Ki  = sum_Ki + K(:,:,iT) ;
        end

        inv_sum_Ki                      = diag(1./[sum_Ki(1,1),sum_Ki(2,2),sum_Ki(3,3)]) ; 
        mem_bvp.mem_inv_sum_Ki(:,:,is)  = inv_sum_Ki ;


        if is >= vect_ind_iT(ctcr_carac.nbT,3)

            mem_bvp.mem_u0(:,is)        = mem_bvp.mem_u0(:,is-1) ;

        else
            
            % Computing sum RziKiu*

            sum_R_Kzi       = zeros(3,1) ;

            for iv = 1:length(curr_vectT)
                i          = curr_vectT(iv) ;
                sum_R_Kzi   = sum_R_Kzi + rot_ti(:,:,i)*K(:,:,i)*(ui_init(:,is,i)) ;
            end
    
            temp                    = (mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_R_Kzi + m0)) ;
            mem_bvp.mem_u0(:,is)    = [temp(1:2,1);0] ;

        end


        % ===================================================== %
        % =============== Low-Level Derivatives =============== %
        % ===================================================== %

        if bool_opt_lit
            for j = 1:ctcr_carac.nbT
    
                % ====================
                % ==== du0(s)_duz(0)

                if is == ctcr_construc.nbP
    
                    mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is-1) ;
    
                else
    
                    sum_duzj0 = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i = curr_vectT(iv) ;
    
                        sum_duzj0   = sum_duzj0 ...
                                      + hat_ez*rot_ti(:,:,i)*mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
    
                    end
        
                    tp_duzj0        = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_duzj0 + mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_duzj0(:,j,is) = [tp_duzj0(1:2);0] ;
    
                end
            end
            
    
            for j = 1:3
    
                if is == ctcr_construc.nbP
    
                    % ====================
                    % ==== du0(s)_dm0(0)
    
                    mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is)  = mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is-1) ;
    
                    % ====================
                    % ==== du0(s)_dn0(0)
    
                    mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is)  = mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is-1) ;
    
                else
    
                    % ====================
                    % ==== du0(s)_dm0(0)
    
                    sum_dm0j0       = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i           = curr_vectT(iv) ;
                        sum_dm0j0   = sum_dm0j0 + hat_ez*rot_ti(:,:,i)*mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
                    end
        
                    tp_duzj0        = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dm0j0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dm0j0(:,j,is)  = [tp_duzj0(1:2);0] ;
    
    
    
                    % ====================
                    % ==== du0(s)_dn0(0)
    
                    sum_dn0j0 = zeros(3,1) ;
    
                    for iv = 1:length(curr_vectT)
                        i           = curr_vectT(iv) ;
                        sum_dn0j0   = sum_dn0j0 + hat_ez*rot_ti(:,:,i)*mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,j,is)*K(:,:,i)*ctcr_construc.ui_init(:,is,i) ;
                    end
        
                    tp_duzj0        = mem_bvp.mem_inv_sum_Ki(:,:,is)*(sum_dn0j0 + mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,j,is)) ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dn0j0(:,j,is)  = [tp_duzj0(1:2);0] ;
    
                end
            end
        end
    end
end