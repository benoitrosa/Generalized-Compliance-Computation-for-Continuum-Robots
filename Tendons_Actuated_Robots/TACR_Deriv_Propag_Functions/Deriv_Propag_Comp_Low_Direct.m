function mem_deriv_propag_low ...
        = Deriv_Propag_Comp_Low_Direct( ...
        is , tacr_construc , tacr_carac , tacr_act , simulation_param , ...
        mem_deriv_propag_low , mem_bvp)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the Low-Level partial derivatives of u0 and T0
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
% tacr_act              : (class) Robot actuation
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_bvp               : (class) Memory of the BVP variables 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
%
% ======================================================================= %
% ======================================================================= %

   

    vectT = find(is <= tacr_construc.vect_ind_iT(:,1)) ;



    


    % ====================
    % ==== Pre-computing is dependent variables

    hat_u0      = hat(mem_bvp.mem_y.mem_u0(:,is))   ;
    hat_v0      = hat(mem_bvp.mem_y.mem_v0(:,is))   ;
    
    Kbt_sous_u0 = tacr_carac.Kbt * ( mem_bvp.mem_y.mem_u0(:,is) - tacr_construc.mem_u0_init(:,is) ) ;
    Kse_sous_v0 = tacr_carac.Kse * ( mem_bvp.mem_y.mem_v0(:,is) - tacr_construc.mem_v0_init(:,is) ) ;




    % ====================
    % ==== Pre-computing iT dependent variables

    hat_ri      = zeros(3,3,tacr_carac.nbT)         ;
    hat_dpi     = zeros(3,3,tacr_carac.nbT)         ;
    norm_dpi    = zeros(1,tacr_carac.nbT)           ;

    for i = 1 : length(vectT)
        iT = vectT(i) ;

        hat_ri(:,:,iT)  = hat(tacr_construc.mem_ri(:,iT,is)) ;
        hat_dpi(:,:,iT) = hat(mem_bvp.mem_dpi_ds(:,iT,is)) ;
        norm_dpi(iT)    = norm(mem_bvp.mem_dpi_ds(:,iT,is)) ;

    end





    if simulation_param.bool_J
        
        for j = 1:tacr_carac.nbT
                
            da_dti_j   = zeros(3,1) ;
            db_dti_j   = zeros(3,1) ;
            dA_dti_j   = zeros(3,3) ;
            dB_dti_j   = zeros(3,3) ;
            dG_dti_j   = zeros(3,3) ;
            dH_dti_j   = zeros(3,3) ;
            

            % ====================
            % ==== Pre-computing j dependent variables

            hat_du0_dtj        = hat(mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is)) ;
            hat_dv0_dtj        = hat(mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is)) ;


            for i = 1 : length(vectT)
                iT = vectT(i) ;
    

                % ====================
                % ==== Preliminary computations for derivatives wrt ti
    
                mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dti_ds(:,iT,j,is) = hat_du0_dtj * tacr_construc.mem_ri(:,iT,is) ...
                                                                              + mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) ;
    
                    
                % ====================
                % ==== Pre-computing iT and j dependent variables
        
                ddpi_dtj            = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dti_ds(:,iT,j,is) ;
                hat_ddpi_dtj        = hat(ddpi_dtj) ;



                dA_i_dti_j          = - delta_ij(iT,j) * ( hat_dpi(:,:,iT)^2) / norm_dpi(iT)^3 ...
                                      - tacr_act.ti(iT)* ( (hat_ddpi_dtj*hat_dpi(:,:,iT)+hat_dpi(:,:,iT)*hat_ddpi_dtj)*norm_dpi(iT)^2 - 3*((hat_dpi(:,:,iT))^2)*(ddpi_dtj'*mem_bvp.mem_dpi_ds(:,iT,is))  )/(norm_dpi(iT)^5) ;
    
                mem_deriv_propag_low.mem_dAi.mem_dAi_dti(:,:,iT,j,is) = dA_i_dti_j ;
    
                
                dB_i_dti_j          = hat_ri(:,:,iT)*dA_i_dti_j ;
                dG_i_dti_j          = - dA_i_dti_j * hat_ri(:,:,iT) ;
                dH_i_dti_j          = - dB_i_dti_j * hat_ri(:,:,iT) ;
        
                da_i_dti_j          = dA_i_dti_j * ( hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                     + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                     + tacr_construc.mem_ddri_ds(:,iT,is) ) ...
                                      + mem_bvp.mem_Ai(:,:,iT,is) * ( hat_du0_dtj * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                      + hat_u0 * ddpi_dtj ...
                                                                      + hat_du0_dtj * tacr_construc.mem_dri_ds(:,iT,is) ) ;
        
    
                db_i_dti_j          = hat_ri(:,:,iT) * da_i_dti_j ;
                
                da_dti_j            = da_dti_j + da_i_dti_j ;
                db_dti_j            = db_dti_j + db_i_dti_j ;
                dA_dti_j            = dA_dti_j + dA_i_dti_j ;
                dB_dti_j            = dB_dti_j + dB_i_dti_j ;
                dG_dti_j            = dG_dti_j + dG_i_dti_j ;
                dH_dti_j            = dH_dti_j + dH_i_dti_j ;

            end

            mem_deriv_propag_low.mem_dm0.mem_dm0_dti(:,j,is) = tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is) ;            
            mem_deriv_propag_low.mem_dn0.mem_dn0_dti(:,j,is) = tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) ;



            % ==========
            % ====== Case of a tendon termination
        
            if ismember(is,tacr_construc.vect_ind_iT) && ~(is == tacr_construc.nbP)
        
                end_vectT     = find(tacr_construc.vect_ind_iT == is) ;
                
                for tp_iT = 1:length(end_vectT)
                    iT  = end_vectT(tp_iT) ;
        
                    ddpi_ds_dtj     = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dti_ds(:,iT,j,is)           ;
                    N               = mem_bvp.mem_dpi_ds(:,iT,is)                                                                ;
                    dN_dtj          = ddpi_ds_dtj                                                           ;
                    D               = norm_dpi(iT)                                                          ;
                    dD_dtj          = 1/2 * (ddpi_ds_dtj'*mem_bvp.mem_dpi_ds(:,iT,is) + mem_bvp.mem_dpi_ds(:,iT,is)'*ddpi_ds_dtj) / (norm_dpi(iT)^3)  ;
                    dfi_dtj         = - delta_ij(iT,j) * N/D ...
                                      - tacr_act.ti(iT) * (dN_dtj*D - N * dD_dtj) / (D^2)                   ;

                    mem_deriv_propag_low.mem_dm0.mem_dm0_dti(:,j,is)    = mem_deriv_propag_low.mem_dm0.mem_dm0_dti(:,j,is) - hat_ri(:,:,iT)*dfi_dtj ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dti(:,j,is)    = mem_deriv_propag_low.mem_dn0.mem_dn0_dti(:,j,is) - dfi_dtj ;

                    mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is)    = mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is) - tacr_carac.Kbt \ hat_ri(:,:,iT)*dfi_dtj ;
                    mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is)    = mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) - tacr_carac.Kse \ dfi_dtj ; 
                            
                end
            end

            mem_deriv_propag_low.mem_dM.mem_dM_dti(:,:,j,is)            = [[dA_dti_j , dG_dti_j] ; [dB_dti_j , dH_dti_j]] ;
            mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dti(:,:,j,is)    = - mem_bvp.mem_inv_M(:,:,is) * mem_deriv_propag_low.mem_dM.mem_dM_dti(:,:,j,is) * mem_bvp.mem_inv_M(:,:,is) ;

            mem_deriv_propag_low.mem_dc.mem_dc_dti(:,j,is)              = - hat_du0_dtj * Kbt_sous_u0 ...
                                                                          - hat_u0 * tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dti(:,j,is) ...
                                                                          - hat_dv0_dtj * Kse_sous_v0 ...
                                                                          - hat_v0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) ...
                                                                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,is)'*tacr_construc.vect_tau_dist(:,is) ...
                                                                          - db_dti_j ;

            mem_deriv_propag_low.mem_dd.mem_dd_dti(:,j,is)              = - hat_du0_dtj * Kse_sous_v0 ...
                                                                          - hat_u0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dti(:,j,is) ...
                                                                          - mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,is)'*tacr_construc.vect_f_dist(:,is) ...
                                                                          - da_dti_j ;

            mem_deriv_propag_low.mem_dT0.mem_dT0_dti(:,:,j,is)          = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dti(:,:,j,is),mem_deriv_propag_low.mem_dp0.mem_dp0_dti(:,j,is)];zeros(1,4)] ;
          

        end

    end


    if simulation_param.bool_Cs0

        pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

        for tp_is0 = 1:length(pt_s0_LIT_curr)
            is0 = pt_s0_LIT_curr(tp_is0) ;
            
            for j = 1:3

                da_dtaus0_j   = zeros(3,1) ;
                db_dtaus0_j   = zeros(3,1) ;
                dA_dtaus0_j   = zeros(3,3) ;
                dB_dtaus0_j   = zeros(3,3) ;
                dG_dtaus0_j   = zeros(3,3) ;
                dH_dtaus0_j   = zeros(3,3) ;


                da_dfs0_j   = zeros(3,1) ;
                db_dfs0_j   = zeros(3,1) ;
                dA_dfs0_j   = zeros(3,3) ;
                dB_dfs0_j   = zeros(3,3) ;
                dG_dfs0_j   = zeros(3,3) ;
                dH_dfs0_j   = zeros(3,3) ;
                

                % ====================
                % ==== Pre-computing j dependent variables
    
                hat_du0_dtaus0j     = hat(mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0))  ;
                hat_du0_dfs0j       = hat(mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0))    ;
                hat_dv0_dtaus0j     = hat(mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0))  ;
                hat_dv0_dfs0j       = hat(mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0))    ;



                for i = 1 : length(vectT)
                    iT = vectT(i) ;
        
                    % ====================
                    % ==== Preliminary computations for derivatives wrt tau0(s0)
        
                    mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dtaus0_ds(:,iT,j,is,is0) = hat_du0_dtaus0j * tacr_construc.mem_ri(:,iT,is) ...
                                                                                         + mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) ;
        
                    % ====================
                    % ==== Pre-computing iT and j dependent variables
            
                    ddpi_dtaus0         = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dtaus0_ds(:,iT,j,is,is0) ;
                    hat_ddpi_dtaus0     = hat(ddpi_dtaus0) ;



                    dA_i_dtaus0_j       = - tacr_act.ti(iT)*( (hat_ddpi_dtaus0*hat_dpi(:,:,iT)+hat_dpi(:,:,iT)*hat_ddpi_dtaus0)*norm_dpi(iT)^2 - 3*((hat_dpi(:,:,iT))^2)*(ddpi_dtaus0'*mem_bvp.mem_dpi_ds(:,iT,is))  )/(norm_dpi(iT)^5) ;
        
                    mem_deriv_propag_low.mem_dAi.mem_dAi_dtaus0(:,:,iT,j,is,is0) = dA_i_dtaus0_j ;
        
                    dB_i_dtaus0_j       = hat_ri(:,:,iT)*dA_i_dtaus0_j ;
                    dG_i_dtaus0_j       = - dA_i_dtaus0_j * hat_ri(:,:,iT) ;
                    dH_i_dtaus0_j       = - dB_i_dtaus0_j * hat_ri(:,:,iT) ;
            
                    da_i_dtaus0_j       = dA_i_dtaus0_j * ( hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                            + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                            + tacr_construc.mem_ddri_ds(:,iT,is) ) ...
                                          + mem_bvp.mem_Ai(:,:,iT,is) * ( hat_du0_dtaus0j * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                          + hat_u0 * ddpi_dtaus0 ...
                                                                          + hat_du0_dtaus0j * tacr_construc.mem_dri_ds(:,iT,is) ) ;
            
                    db_i_dtaus0_j       = hat_ri(:,:,iT) * da_i_dtaus0_j ;
                    
                    da_dtaus0_j         = da_dtaus0_j + da_i_dtaus0_j ;
                    db_dtaus0_j         = db_dtaus0_j + db_i_dtaus0_j ;
                    dA_dtaus0_j         = dA_dtaus0_j + dA_i_dtaus0_j ;
                    dB_dtaus0_j         = dB_dtaus0_j + dB_i_dtaus0_j ;
                    dG_dtaus0_j         = dG_dtaus0_j + dG_i_dtaus0_j ;
                    dH_dtaus0_j         = dH_dtaus0_j + dH_i_dtaus0_j ;




                    % ====================
                    % ==== Preliminary computations for derivatives wrt f0(s0)
        
                    mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dfs0_ds(:,iT,j,is,is0) = hat_du0_dfs0j * tacr_construc.mem_ri(:,iT,is) ...
                                                                                       + mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0) ;
                

                    % ====================
                    % ==== Pre-computing iT and j dependent variables
            
                    ddpi_dfs0           = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dfs0_ds(:,iT,j,is,is0) ;
                    hat_ddpi_dfs0       = hat(ddpi_dfs0) ;
        
                    
                    dA_i_dfs0_j         = - tacr_act.ti(iT)*( (hat_ddpi_dfs0*hat_dpi(:,:,iT)+hat_dpi(:,:,iT)*hat_ddpi_dfs0)*norm_dpi(iT)^2 - 3*((hat_dpi(:,:,iT))^2)*(ddpi_dfs0'*mem_bvp.mem_dpi_ds(:,iT,is))  )/(norm_dpi(iT)^5) ;
        
                    mem_deriv_propag_low.mem_dAi.mem_dAi_dfs0(:,:,iT,j,is,is0) = dA_i_dfs0_j ;
        
                    dB_i_dfs0_j         = hat_ri(:,:,iT)*dA_i_dfs0_j ;
                    dG_i_dfs0_j         = - dA_i_dfs0_j * hat_ri(:,:,iT) ;
                    dH_i_dfs0_j         = - dB_i_dfs0_j * hat_ri(:,:,iT) ;
            
                    da_i_dfs0_j         = dA_i_dfs0_j * ( hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                          + hat_u0 * tacr_construc.mem_dri_ds(:,iT,is) ...
                                                          + tacr_construc.mem_ddri_ds(:,iT,is) ) ...
                                          + mem_bvp.mem_Ai(:,:,iT,is) * ( hat_du0_dfs0j * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                          + hat_u0 * mem_bvp.mem_dpi_ds(:,iT,is) ...
                                                                          + hat_du0_dfs0j * tacr_construc.mem_dri_ds(:,iT,is) ) ;
            
                    db_i_dfs0_j         = hat_ri(:,:,iT) * da_i_dfs0_j ;
                    
                    da_dfs0_j           = da_dfs0_j + da_i_dfs0_j ;
                    db_dfs0_j           = db_dfs0_j + db_i_dfs0_j ;
                    dA_dfs0_j           = dA_dfs0_j + dA_i_dfs0_j ;
                    dB_dfs0_j           = dB_dfs0_j + dB_i_dfs0_j ;
                    dG_dfs0_j           = dG_dfs0_j + dG_i_dfs0_j ;
                    dH_dfs0_j           = dH_dfs0_j + dH_i_dfs0_j ;
    
                end
    
                mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0) = tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) ;            
                mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,is,is0) = tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) ;
                mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0)   = tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0) ;            
                mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,is,is0)   = tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0) ;



                % ==========
                % ====== Case of a tendon termination 
            
                if ismember(is,tacr_construc.vect_ind_iT) && ~(is == tacr_construc.nbP)
            
                    end_vectT     = find(tacr_construc.vect_ind_iT == is) ;
                    
                    for tp_iT = 1:length(end_vectT)
                        iT  = end_vectT(tp_iT) ;
            
                        ddpi_ds_dtaus0j     = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dtaus0_ds(:,iT,j,is,is0)            ;
                        ddpi_ds_dfs0j       = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dfs0_ds(:,iT,j,is,is0)              ;
                        N                   = mem_bvp.mem_dpi_ds(:,iT,is)                                                                        ;
                        dN_dtaus0j          = ddpi_ds_dtaus0j                                                               ;
                        dN_dfs0j            = ddpi_ds_dfs0j                                                                 ; 
                        D                   = norm_dpi(iT)                                                                  ;
                        dD_dtaus0j          = 1/2 * (ddpi_ds_dtaus0j'*mem_bvp.mem_dpi_ds(:,iT,is) + mem_bvp.mem_dpi_ds(:,iT,is)'*ddpi_ds_dtaus0j) / (norm_dpi(iT)^3)  ;
                        dD_dfs0j            = 1/2 * (ddpi_ds_dfs0j'*mem_bvp.mem_dpi_ds(:,iT,is) + mem_bvp.mem_dpi_ds(:,iT,is)'*ddpi_ds_dfs0j) / (norm_dpi(iT)^3)      ;
                        dfi_dtaus0j         = - tacr_act.ti(iT) * (dN_dtaus0j*D - N*dD_dtaus0j) / (D^2)                     ;
                        dfi_dfs0j           = - tacr_act.ti(iT) * (dN_dfs0j*D - N*dD_dfs0j) / (D^2)                         ;
    
                        mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,is,is0)   - hat_ri(:,:,iT)*dfi_dtaus0j ;
                        mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,is,is0)     - hat_ri(:,:,iT)*dfi_dfs0j ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,is,is0)   - dfi_dtaus0j ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,is,is0)     - dfi_dfs0j ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0)   - tacr_carac.Kbt \ hat_ri(:,:,iT)*dfi_dtaus0j ;
                        mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0)     - tacr_carac.Kbt \ hat_ri(:,:,iT)*dfi_dfs0j ;
                        mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) = mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0)   - tacr_carac.Kse \ dfi_dtaus0j ; 
                        mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0)   = mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0)     - tacr_carac.Kse \ dfi_dfs0j ; 
                                
                    end
                end

                mem_deriv_propag_low.mem_dc.mem_dc_dtaus0(:,j,is,is0)           = - hat_du0_dtaus0j * Kbt_sous_u0 ...
                                                                                  - hat_u0 * tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dtaus0(:,j,is,is0) ...
                                                                                  - hat_dv0_dtaus0j * Kse_sous_v0 ...
                                                                                  - hat_v0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) ...
                                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0)'*tacr_construc.vect_tau_dist(:,is) ...
                                                                                  - mem_bvp.mem_T(1:3,1:3,is)'*(delta_ij(is,is0)*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)]/tacr_construc.vect_res(is)) ...
                                                                                  - db_dtaus0_j ;

                mem_deriv_propag_low.mem_dc.mem_dc_dfs0(:,j,is,is0)             = - hat_du0_dfs0j * Kbt_sous_u0 ...
                                                                                  - hat_u0 * tacr_carac.Kbt * mem_deriv_propag_low.mem_du0.mem_du0_dfs0(:,j,is,is0) ...
                                                                                  - hat_dv0_dfs0j * Kse_sous_v0 ...
                                                                                  - hat_v0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0) ...
                                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0)'*tacr_construc.vect_tau_dist(:,is) ...
                                                                                  - db_dfs0_j ;

                mem_deriv_propag_low.mem_dd.mem_dd_dtaus0(:,j,is,is0)           = - hat_du0_dtaus0j * Kse_sous_v0 ...
                                                                                  - hat_u0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0(:,j,is,is0) ...
                                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0)'*tacr_construc.vect_f_dist(:,is) ...
                                                                                  - da_dtaus0_j ;

                mem_deriv_propag_low.mem_dd.mem_dd_dfs0(:,j,is,is0)             = - hat_du0_dfs0j * Kse_sous_v0 ...
                                                                                  - hat_u0 * tacr_carac.Kse * mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0(:,j,is,is0) ...
                                                                                  - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0)'*tacr_construc.vect_f_dist(:,is) ...
                                                                                  - mem_bvp.mem_T(1:3,1:3,is)'*(delta_ij(is,is0)*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)]/tacr_construc.vect_res(is)) ...
                                                                                  - da_dfs0_j ;
    
                mem_deriv_propag_low.mem_dM.mem_dM_dtaus0(:,:,j,is,is0)         = [[dA_dtaus0_j , dG_dtaus0_j] ; [dB_dtaus0_j , dH_dtaus0_j]] ;
                mem_deriv_propag_low.mem_dM.mem_dM_dfs0(:,:,j,is,is0)           = [[dA_dfs0_j , dG_dfs0_j] ; [dB_dfs0_j , dH_dfs0_j]] ;
                mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dtaus0(:,:,j,is,is0) = - mem_bvp.mem_inv_M(:,:,is) * mem_deriv_propag_low.mem_dM.mem_dM_dtaus0(:,:,j,is,is0) * mem_bvp.mem_inv_M(:,:,is) ;
                mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dfs0(:,:,j,is,is0)   = - mem_bvp.mem_inv_M(:,:,is) * mem_deriv_propag_low.mem_dM.mem_dM_dfs0(:,:,j,is,is0) * mem_bvp.mem_inv_M(:,:,is) ;
                mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0(:,:,j,is,is0)       = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,is,is0),mem_deriv_propag_low.mem_dp0.mem_dp0_dtaus0(:,j,is,is0)];zeros(1,4)] ;
                mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0(:,:,j,is,is0)         = [[mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,is,is0),mem_deriv_propag_low.mem_dp0.mem_dp0_dfs0(:,j,is,is0)];zeros(1,4)] ;
                

            end
        end
    end
end