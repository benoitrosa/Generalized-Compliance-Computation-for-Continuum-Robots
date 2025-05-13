function [mem_bvp , mem_deriv_propag_low] ...
         = IVP_MaJ_Mem_curr( ...
         is       , mem_bvp              , tacr_carac , tacr_construc , ...
         tacr_act , mem_deriv_propag_low , bool_opt_lit)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the non-differential variables and derivatives
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% mem_bvp               : (class)           Memory of the BVP variables 
% tacr_carac            : (class)           Robot features
% tacr_construc         : (class)           Robot features related to the model settings
% tacr_act              : (class)           Robot actuation
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


    a = zeros(3,1) ;
    b = zeros(3,1) ;
    A = zeros(3,3) ;
    B = zeros(3,3) ;
    G = zeros(3,3) ;
    H = zeros(3,3) ;

    vectT       = find(is <= tacr_construc.vect_ind_iT(:,1)) ;
    
    % ====================
    % ==== Pre-computing is dependent variables

    hat_u0      = hat(mem_bvp.mem_y.mem_u0(:,is))   ;
    hat_v0      = hat(mem_bvp.mem_y.mem_v0(:,is))   ;
    
    Kbt_sous_u0 = tacr_carac.Kbt * ( mem_bvp.mem_y.mem_u0(:,is) - tacr_construc.mem_u0_init(:,is) ) ;
    Kse_sous_v0 = tacr_carac.Kse * ( mem_bvp.mem_y.mem_v0(:,is) - tacr_construc.mem_v0_init(:,is) ) ;





    hat_ri      = zeros(3,3,tacr_carac.nbT)         ;
    hat_dpi     = zeros(3,3,tacr_carac.nbT)         ;
    norm_dpi    = zeros(1,tacr_carac.nbT)           ;

    for i = 1 : length(vectT)
        iT = vectT(i) ;

        % ====================
        % ==== Preliminary computations

        mem_bvp.mem_dpi_ds(:,iT,is)  = hat_u0 * tacr_construc.mem_ri(:,iT,is) ...
                                      + tacr_construc.mem_dri_ds(:,iT,is) ...
                                      + mem_bvp.mem_y.mem_v0(:,is) ;
    

        % ====================
        % ==== Pre-computing iT dependent variables

        hat_ri(:,:,iT)  = hat(tacr_construc.mem_ri(:,iT,is)) ;
        hat_dpi(:,:,iT) = hat(mem_bvp.mem_dpi_ds(:,iT,is)) ;
        norm_dpi(iT)    = norm(mem_bvp.mem_dpi_ds(:,iT,is)) ;

        mem_bvp.mem_Ai(:,:,iT,is)    = - tacr_act.ti(iT) * ( hat_dpi(:,:,iT)^2) / (norm_dpi(iT)^3) ;

        B_i             = hat_ri(:,:,iT) * mem_bvp.mem_Ai(:,:,iT,is) ;
        G_i             = - mem_bvp.mem_Ai(:,:,iT,is) * hat_ri(:,:,iT) ;
        H_i             = - B_i * hat_ri(:,:,iT) ;

        a_i             = mem_bvp.mem_Ai(:,:,iT,is) * (hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                       + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                       + tacr_construc.mem_ddri_ds(:,iT,is) ) ;

        b_i             = hat_ri(:,:,iT) * a_i ;
        
        a               = a + a_i ;
        b               = b + b_i ;
        A               = A + mem_bvp.mem_Ai(:,:,iT,is) ;
        B               = B + B_i ;
        G               = G + G_i ;
        H               = H + H_i ;

    end

    mem_bvp.mem_m0(:,is)    = tacr_carac.Kbt * (mem_bvp.mem_y.mem_u0(:,is) - tacr_construc.mem_u0_init(:,is)) ;
    mem_bvp.mem_n0(:,is)    = tacr_carac.Kse * (mem_bvp.mem_y.mem_v0(:,is) - tacr_construc.mem_v0_init(:,is)) ;



    % ==========
    % ====== Case of a tendon termination

    if ismember(is,tacr_construc.vect_ind_iT) && ~(is == tacr_construc.nbP)

        end_vectT     = find(tacr_construc.vect_ind_iT == is) ;
       
        for tp_iT = 1:length(end_vectT)
            iT  = end_vectT(tp_iT) ;

            fi                          = - tacr_act.ti(iT) * mem_bvp.mem_dpi_ds(:,iT,is)/norm_dpi(iT)                                             ;
            mem_bvp.mem_m0(:,is)        = mem_bvp.mem_m0(:,is) - hat_ri(:,:,iT) * fi                        ; 
            mem_bvp.mem_n0(:,is)        = mem_bvp.mem_n0(:,is) - fi                                                             ;
            mem_bvp.mem_y.mem_u0(:,is)  = mem_bvp.mem_y.mem_u0(:,is) - tacr_carac.Kbt \ hat_ri(:,:,iT) * fi ;
            mem_bvp.mem_y.mem_v0(:,is)  = mem_bvp.mem_y.mem_v0(:,is) - tacr_carac.Kse \ fi                                      ;   
            
        end
    end



    mem_bvp.mem_M(:,:,is)       = [tacr_carac.Kse + A ,     G   ;
                                   B                  ,  tacr_carac.Kbt + H] ;
    mem_bvp.mem_inv_M(:,:,is)   = inv(mem_bvp.mem_M(:,:,is)) ;
   
    mem_bvp.mem_c(:,is)         = - hat_u0*tacr_carac.Kbt*(mem_bvp.mem_y.mem_u0(:,is)-tacr_construc.mem_u0_init(:,is)) ...
                                  - hat_v0*tacr_carac.Kse*(mem_bvp.mem_y.mem_v0(:,is)-tacr_construc.mem_v0_init(:,is)) ...
                                  - mem_bvp.mem_y.mem_R0(:,:,is)'*tacr_construc.vect_tau_dist(:,is) ...
                                  - b ;
    
    mem_bvp.mem_d(:,is)         = - hat_u0 * tacr_carac.Kse * (mem_bvp.mem_y.mem_v0(:,is) - tacr_construc.mem_v0_init(:,is)) ...
                                  - mem_bvp.mem_y.mem_R0(:,:,is)' * tacr_construc.vect_f_dist(:,is) ...
                                  - a ;
    
    mem_bvp.mem_T(:,:,is)       = [[mem_bvp.mem_y.mem_R0(:,:,is),mem_bvp.mem_y.mem_p0(:,is)];[0,0,0,1]] ;





    

    % ===================================================== %
    % =============== Low-Level Derivatives =============== %
    % ===================================================== %

    if bool_opt_lit
            
        for j = 1:3
                
            da_dm0j = zeros(3,1) ;
            db_dm0j = zeros(3,1) ;
            dA_dm0j = zeros(3,3) ;
            dB_dm0j = zeros(3,3) ;
            dG_dm0j = zeros(3,3) ;
            dH_dm0j = zeros(3,3) ;
    
            da_dn0j = zeros(3,1) ;
            db_dn0j = zeros(3,1) ;
            dA_dn0j = zeros(3,3) ;
            dB_dn0j = zeros(3,3) ;
            dG_dn0j = zeros(3,3) ;
            dH_dn0j = zeros(3,3) ;
        
            vectT = find(is <= tacr_construc.vect_ind_iT(:,1)) ;
        

            % ====================
            % ==== Pre-computing j dependent variables
            
            hat_du0_dn0j        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is)) ;
            hat_du0_dm0j        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is)) ;
            hat_dv0_dn0j        = hat(mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is)) ;
            hat_dv0_dm0j        = hat(mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is)) ;

            for i = 1 : length(vectT)
                iT = vectT(i) ;
            


                % ====================
                % ==== Preliminary computations for derivatives wrt m0(0)
    
                mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dm0_ds(:,iT,j,is) = ...
                                                hat_du0_dm0j * tacr_construc.mem_ri(:,iT,is) ...
                                                + mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) ;
                        
                % ====================
                % ==== Pre-computing iT and j dependent variables

                ddpi_dm0j           = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dm0_ds(:,iT,j,is) ;
                hat_ddpi_dm0j       = hat(ddpi_dm0j) ;

                
                dA_i_dm0j           = - tacr_act.ti(iT)*( (hat_ddpi_dm0j*hat_dpi(:,:,iT) + hat_dpi(:,:,iT)*hat_ddpi_dm0j)*norm_dpi(iT)^2 - 3*((hat_dpi(:,:,iT))^2)*(ddpi_dm0j'*mem_bvp.mem_dpi_ds(:,iT,is))  )/(norm_dpi(iT)^5) ;
    
                mem_deriv_propag_low.mem_dAi.mem_dAi_dm0(:,:,iT,j,is) = dA_i_dm0j ;
    
                
                dB_i_dm0j           = hat_ri(:,:,iT)*dA_i_dm0j ;
                dG_i_dm0j           = - dA_i_dm0j * hat_ri(:,:,iT) ;
                dH_i_dm0j           = - dB_i_dm0j * hat_ri(:,:,iT) ;
        
                da_i_dm0j           = dA_i_dm0j * ( hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                   + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                   + tacr_construc.mem_ddri_ds(:,iT,is) ) ...
                                      + mem_bvp.mem_Ai(:,:,iT,is) * ( hat_du0_dm0j * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                      + hat_u0 * ddpi_dm0j ...
                                                                      + hat_du0_dm0j * tacr_construc.mem_dri_ds(:,iT,is) ) ;
            
                db_i_dm0j           = hat_ri(:,:,iT) * da_i_dm0j ;
                
                da_dm0j             = da_dm0j + da_i_dm0j ;
                db_dm0j             = db_dm0j + db_i_dm0j ;
                dA_dm0j             = dA_dm0j + dA_i_dm0j ;
                dB_dm0j             = dB_dm0j + dB_i_dm0j ;
                dG_dm0j             = dG_dm0j + dG_i_dm0j ;
                dH_dm0j             = dH_dm0j + dH_i_dm0j ;
        
    

    
                
                % ====================
                % ==== Preliminary computations for derivatives wrt n0(0)
                    
                mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds(:,iT,j,is) = ...
                                                hat_du0_dn0j * tacr_construc.mem_ri(:,iT,is) ...
                                                + mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) ;
                

                % ====================
                % ==== Pre-computing iT and j dependent variables

                ddpi_dn0j           = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds(:,iT,j,is) ;
                hat_ddpi_dn0j       = hat(ddpi_dn0j) ;

    
                dA_i_dn0j           = - tacr_act.ti(iT)*( (hat_ddpi_dn0j*hat_dpi(:,:,iT)+hat_dpi(:,:,iT)*hat_ddpi_dn0j)*norm_dpi(iT)^2 - 3*(hat_dpi(:,:,iT)^2)*(ddpi_dn0j'*mem_bvp.mem_dpi_ds(:,iT,is))  )/(norm_dpi(iT)^5) ;

                mem_deriv_propag_low.mem_dAi.mem_dAi_dn0(:,:,iT,j,is) = dA_i_dn0j ;
    
                dB_i_dn0j           = hat_ri(:,:,iT)*dA_i_dn0j ;
                dG_i_dn0j           = - dA_i_dn0j * hat_ri(:,:,iT) ;
                dH_i_dn0j           = - dB_i_dn0j * hat_ri(:,:,iT) ;
        
                da_i_dn0j           = dA_i_dn0j * ( hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                   + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                   + tacr_construc.mem_ddri_ds(:,iT,is) ) ...
                                      + mem_bvp.mem_Ai(:,:,iT,is) * ( hat_du0_dn0j * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                      + hat_u0 * mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds(:,iT,j,is) ...
                                                                      + hat_du0_dn0j * tacr_construc.mem_dri_ds(:,iT,is) ) ;
        
                db_i_dn0j           = hat_ri(:,:,iT) * da_i_dn0j ;
                
                da_dn0j             = da_dn0j + da_i_dn0j ;
                db_dn0j             = db_dn0j + db_i_dn0j ;
                dA_dn0j             = dA_dn0j + dA_i_dn0j ;
                dB_dn0j             = dB_dn0j + dB_i_dn0j ;
                dG_dn0j             = dG_dn0j + dG_i_dn0j ;
                dH_dn0j             = dH_dn0j + dH_i_dn0j ;
    
            end
    
            mem_deriv_propag_low.mem_dm0.mem_dm0_dm0(:,j,is) = tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is) ;
            mem_deriv_propag_low.mem_dm0.mem_dm0_dn0(:,j,is) = tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is) ;
            mem_deriv_propag_low.mem_dn0.mem_dn0_dm0(:,j,is) = tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) ;
            mem_deriv_propag_low.mem_dn0.mem_dn0_dn0(:,j,is) = tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) ;




            % ==========
            % ====== Case of a tendon termination 
        
            if ismember(is,tacr_construc.vect_ind_iT) && ~(is == tacr_construc.nbP)
        
                end_vectT     = find(tacr_construc.vect_ind_iT == is) ;
                
                for tp_iT = 1:length(end_vectT)
                    iT  = end_vectT(tp_iT) ;
        
                    ddpi_ds_dn0j    = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds(:,iT,j,is) ;
                    ddpi_ds_dm0j    = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dm0_ds(:,iT,j,is) ;
                    N               = mem_bvp.mem_dpi_ds(:,iT,is)        ;
                    dN_dn0j         = ddpi_ds_dn0j  ;
                    dN_dm0j         = ddpi_ds_dm0j  ; 
                    D               = norm_dpi(iT)  ;
                    dD_dn0j         = 1/2 * (ddpi_ds_dn0j'*mem_bvp.mem_dpi_ds(:,iT,is) + mem_bvp.mem_dpi_ds(:,iT,is)'*ddpi_ds_dn0j) / (norm_dpi(iT)^3) ;
                    dD_dm0j         = 1/2 * (ddpi_ds_dm0j'*mem_bvp.mem_dpi_ds(:,iT,is) + mem_bvp.mem_dpi_ds(:,iT,is)'*ddpi_ds_dm0j) / (norm_dpi(iT)^3) ;
                    dfi_dn0j        = - tacr_act.ti(iT) * (dN_dn0j*D - N * dD_dn0j) / (D^2) ;
                    dfi_dm0j        = - tacr_act.ti(iT) * (dN_dm0j*D - N * dD_dm0j) / (D^2) ;

                    mem_deriv_propag_low.mem_dm0.mem_dm0_dn0(:,j,is) = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0(:,j,is) - hat_ri(:,:,iT)*dfi_dn0j ;
                    mem_deriv_propag_low.mem_dm0.mem_dm0_dm0(:,j,is) = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0(:,j,is) - hat_ri(:,:,iT)*dfi_dm0j ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dn0(:,j,is) = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0(:,j,is) - dfi_dn0j ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dm0(:,j,is) = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0(:,j,is) - dfi_dm0j ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is) - tacr_carac.Kbt \ hat_ri(:,:,iT)*dfi_dn0j ;
                    mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is) = mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is) - tacr_carac.Kbt \ hat_ri(:,:,iT)*dfi_dm0j ;
                    mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) = mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) - tacr_carac.Kse \ dfi_dn0j ; 
                    mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) = mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) - tacr_carac.Kse \ dfi_dm0j ;  
                            
                end
                
            end

            mem_deriv_propag_low.mem_dM.mem_dM_dm0(:,:,j,is)            = [[dA_dm0j , dG_dm0j] ; [dB_dm0j , dH_dm0j]] ;
            mem_deriv_propag_low.mem_dM.mem_dM_dn0(:,:,j,is)            = [[dA_dn0j , dG_dn0j] ; [dB_dn0j , dH_dn0j]] ;
            mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dm0(:,:,j,is)    = - mem_bvp.mem_inv_M(:,:,is) * mem_deriv_propag_low.mem_dM.mem_dM_dm0(:,:,j,is) * mem_bvp.mem_inv_M(:,:,is) ;

            mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dn0(:,:,j,is)    = - mem_bvp.mem_inv_M(:,:,is) * mem_deriv_propag_low.mem_dM.mem_dM_dn0(:,:,j,is) * mem_bvp.mem_inv_M(:,:,is) ;
        
            mem_deriv_propag_low.mem_dc.mem_dc_dm0(:,j,is)      = - hat_du0_dm0j * Kbt_sous_u0 ...
                                                                  - hat_u0 * tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dm0(:,j,is) ...
                                                                  - hat_dv0_dm0j * Kse_sous_v0 ...
                                                                  - hat_v0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,is)'*tacr_construc.vect_tau_dist(:,is) ...
                                                                  - db_dm0j ;

            mem_deriv_propag_low.mem_dc.mem_dc_dn0(:,j,is)      = - hat_du0_dn0j * Kbt_sous_u0 ...
                                                                  - hat_u0 * tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dn0(:,j,is) ...
                                                                  - hat_dv0_dn0j * Kse_sous_v0 ...
                                                                  - hat_v0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,is)'*tacr_construc.vect_tau_dist(:,is) ...
                                                                  - db_dn0j ;

            mem_deriv_propag_low.mem_dd.mem_dd_dm0(:,j,is)      = - hat_du0_dm0j * Kse_sous_v0 ...
                                                                  - hat_u0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dm0(:,j,is) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,is)'*tacr_construc.vect_f_dist(:,is) ...
                                                                  - da_dm0j ;

            mem_deriv_propag_low.mem_dd.mem_dd_dn0(:,j,is)      = - hat_du0_dn0j * Kse_sous_v0 ...
                                                                  - hat_u0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dn0(:,j,is) ...
                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,is)'*tacr_construc.vect_f_dist(:,is) ...
                                                                  - da_dn0j ;
        
            mem_deriv_propag_low.mem_dT0.mem_dT0_dm0(:,:,j,is)  = [ [mem_deriv_propag_low.mem_dR0.mem_dR0_dm0(:,:,j,is) , mem_deriv_propag_low.mem_dp0.mem_dp0_dm0(:,j,is) ] ; zeros(1,4)] ;
            mem_deriv_propag_low.mem_dT0.mem_dT0_dn0(:,:,j,is)  = [ [mem_deriv_propag_low.mem_dR0.mem_dR0_dn0(:,:,j,is) , mem_deriv_propag_low.mem_dp0.mem_dp0_dn0(:,j,is) ] ; zeros(1,4)] ;
        
        end
    end
end
