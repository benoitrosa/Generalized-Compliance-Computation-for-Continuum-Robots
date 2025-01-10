function mem_deriv_propag_low ...
        = Deriv_Propag_MaJ_Mem( ...
        bool_J , bool_Cs0 , is , ctcr_carac , ctcr_construc , mem_bvp , ...
        mem_deriv_propag_low , simulation_param)


% ======================================================================= %
% ======================================================================= %
%
% This function integrates the Low-Level derivatives using a manual 
% first order linearization 
%
% ====================
% ====== INPUTS ====== 
%
% bool_J                : (boolean) Compute the Joint Jacobian ?
% bool_Cs0              : (boolean) Compute the Generalized Compliance Matrix ?
% is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
% ctcr_carac            : (class) Robot features
% ctcr_construc         : (class) Robot features related to the model settings
% mem_bvp               : (class) Memory of the BVP variables 
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% simulation_param      : (class) Model settings
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
%
% ======================================================================= %
% ======================================================================= %
  

    % ========================================================== %
    % ================== Getting input values ================== %
    
    
    nbP             = ctcr_construc.nbP         ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin  ;
    nbT             = ctcr_carac.nbT            ;

    % ========================================================== %
    % ========================================================== %
    

    

    if ~(is==nbP)

        % Vectors of the tubes index involved or not at the current discretization point
        curr_vectT                      = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
        next_vectT                      = find(vect_ind_iT(:,1)<=is+1 & is+1<=vect_ind_iT(:,3)) ;
        vectT_first_outside_pt          = find(is+1 == vect_ind_iT(:,3)+1) ;




        % ============================== %
        % ======== mem_dti_dtcj ======== %

        for iv = 1:length(next_vectT)
            i = next_vectT(iv) ;
            mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,:,is+1)                     = mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,:,is)                 + mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds(i,:,is)               *ctcr_construc.vect_res(is) ;
        end


        % ============================== %
        % ======== mem_dti_dbcj ======== %

        for j = 1:nbT
            for i = 1:nbT
                if ismember(j,vectT_first_outside_pt)
                    mem_deriv_propag_low.mem_dti.mem_dti_dbcj(j,j,is+1)             = mem_deriv_propag_low.mem_dti.mem_dti_dbcj(j,j,is) + mem_bvp.mem_y.mem_t(j,is)/ctcr_construc.vect_res(is) ;
                elseif ismember(i,next_vectT)
                    mem_deriv_propag_low.mem_dti.mem_dti_dbcj(i,:,is+1)             = mem_deriv_propag_low.mem_dti.mem_dti_dbcj(i,:,is) + mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds(i,:,is)*ctcr_construc.vect_res(is) ;
                end
            end
        end


        if is >= ind_origin

            if bool_J

                % =============================== %
                % ======== mem_duzi_dtcj ======== %

                for iv = 1:length(next_vectT)
                    i = next_vectT(iv) ;
        
                    mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,is+1)           = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,is)               + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds(i,:,is)             *ctcr_construc.vect_res(is) ;
                    
                end

                % =============================== %
                % ======== mem_duzi_dbcj ======== %

                for j_out = 1:nbT
                    for i = 1:nbT

                        if ((is+1) == nbP) && ismember(i,curr_vectT) && ~( (j_out == nbT) && (i == nbT) )
                            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is+1)           = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is) + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds(i,j_out,is)       *ctcr_construc.vect_res(is) ;
                        elseif ismember(i,next_vectT) && ~ismember(is+1,vect_ind_iT(j_out,3)+1)
                            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is+1)           = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is) + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds(i,j_out,is)       *ctcr_construc.vect_res(is) ;
                        elseif ismember(j_out,vectT_first_outside_pt) && ismember(i,vectT_first_outside_pt)
                            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is+1)           =  mem_bvp.mem_ys.mem_uzs(i,is-1) + mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is) ;
                        elseif i ~= j_out
                            mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is+1)           = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j_out,is) ;
                        end

                    end
                end
                

                % =========================================================================== %
                % ======== mem_dm0_dtcj, mem_dn0_dtcj, mem_dR0_dtcj and mem_dp0_dtcj ======== %

                mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,:,is+1)                 = mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,:,is)                 + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds(:,:,is)               *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,:,is+1)                 = mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,:,is)                 + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds(:,:,is)               *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj(:,:,:,is+1)               = mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj(:,:,:,is)               + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtcj_ds(:,:,:,is)         *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj(:,:,is+1)                 = mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj(:,:,is)                 + mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtcj_ds(:,:,is)           *ctcr_construc.vect_res(is) ;
                
                for j = 1:nbT

                    
                    % =========================================================================== %
                    % ======== mem_dm0_dbcj, mem_dn0_dbcj, mem_dR0_dbcj and mem_dp0_dbcj ======== %

                    if is+1 == nbP

                        mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,nbT,is+1)       = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,nbT,is)               + mem_bvp.mem_y.mem_m0(:,is)/ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,nbT,is+1)       = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,nbT,is)               + mem_bvp.mem_y.mem_n0(:,is)/ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,is+1)       = mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,is)               + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds(:,:,j,is)         *ctcr_construc.vect_res(is-1) ;
                        mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj(:,:,is+1)         = mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj(:,:,is)                 + mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds(:,:,is)           *ctcr_construc.vect_res(is-1) ;

                    else

                        mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is+1)         = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is)                 + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds(:,j,is)               *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is+1)         = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is)                 + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds(:,j,is)               *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,is+1)       = mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,is)               + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds(:,:,j,is)         *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj(:,j,is+1)         = mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj(:,j,is)                 + mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds(:,j,is)           *ctcr_construc.vect_res(is) ;
                    
                    end
                end

            end

            


            if bool_Cs0

                pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

                for tp_is0 = 1:length(pt_s0_LIT_curr)
                    is0 = pt_s0_LIT_curr(tp_is0) ;
        
                    % =================================================================================== %
                    % ======== mem_dti0_dtaus0, mem_dti0_dfs0, mem_duzi_dtaus0 and mem_duzi_dfs0 ======== %

                    for iv = 1:length(next_vectT)
                        i = next_vectT(iv) ;
            
                        mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,:,is+1,is0)       = mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,:,is,is0)       + mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds(i,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,:,is+1,is0)         = mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,:,is,is0)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds(i,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,is+1,is0)     = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,is,is0)     + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds(i,:,is,is0)       *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,is+1,is0)       = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,is,is0)       + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds(i,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                            
                    end

                    % =================================================================================== %
                    % =========== mem_dm0_dtaus0, mem_dm0_dfs0, mem_dn0_dtaus0, mem_dn0_dfs0, =========== %
                    % ========== mem_dR0_dtaus0, mem_dR0_dfs0, mem_dp0_dtaus0 and mem_dp0_dfs0 ========== %

                    mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,:,is+1,is0)           = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds(:,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,:,is+1,is0)             = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds(:,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,:,is+1,is0)           = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds(:,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,:,is+1,is0)             = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds(:,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,:,is+1,is0)         = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,:,is,is0)     + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds(:,:,:,is,is0)   *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,:,is+1,is0)           = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,:,is,is0)       + mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds(:,:,:,is,is0)     *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0(:,:,is+1,is0)           = mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtaus0_ds(:,:,is,is0)     *ctcr_construc.vect_res(is)  ;                    
                    mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0(:,:,is+1,is0)             = mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dfs0_ds(:,:,is,is0)       *ctcr_construc.vect_res(is)  ;
    
                end
            end
        end

    end

end