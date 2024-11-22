function [mem_deriv_propag_low , mem_deriv_propag_high]...
        = Deriv_Propag_MaJ_Mem( ...
        bool_J , bool_Cs0 , is , ctcr_carac , ctcr_construc , mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , ...
        simulation_param)



% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % ========================================================== %
    % ================== Getting input values ================== %
    
    
    nbP             = ctcr_construc.nbP         ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin  ;

    nbT             = ctcr_carac.nbT            ;

    % ==================================================
    

    

    if ~(is==nbP)

        % Vector of the tubes involved on the current discretization point
        curr_vectT                      = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;
        next_vectT                      = find(vect_ind_iT(:,1)<=is+1 & is+1<=vect_ind_iT(:,3)) ;
        vectT_first_outside_pt          = find(is+1 == vect_ind_iT(:,3)+1) ;






        for iv = 1:length(next_vectT)
            i = next_vectT(iv) ;
            mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,:,is+1)                     = mem_deriv_propag_low.mem_dti.mem_dti_dtcj(i,:,is)                 + mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds(i,:,is)               *ctcr_construc.vect_res(is) ;
        end

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

                for iv = 1:length(next_vectT)
                    i = next_vectT(iv) ;
        
                    mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,is+1)           = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,is)               + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds(i,:,is)             *ctcr_construc.vect_res(is) ;
                    
                end

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
                

                mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,:,is+1)                 = mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,:,is)                 + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds(:,:,is)               *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,:,is+1)                 = mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,:,is)                 + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds(:,:,is)               *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,:,is+1)           = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,:,is)           + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtcj_ds(:,:,:,is)         *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtcj(:,:,is+1)             = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtcj(:,:,is)             + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtcj_ds(:,:,is)           *ctcr_construc.vect_res(is) ;
                
                for j = 1:nbT

                    
                    if is+1 == nbP

                        mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,nbT,is+1)       = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,nbT,is)               + mem_bvp.mem_y.mem_m0(:,is)/ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,nbT,is+1)       = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,nbT,is)               + mem_bvp.mem_y.mem_n0(:,is)/ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is+1)   = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)           + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dbcj_ds(:,:,j,is)         *ctcr_construc.vect_res(is-1) ;
                        mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj(:,:,is+1)     = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj(:,:,is)             + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dbcj_ds(:,:,is)           *ctcr_construc.vect_res(is-1) ;

                    else

                        mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is+1)         = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,is)                 + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds(:,j,is)               *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is+1)         = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,is)                 + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds(:,j,is)               *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is+1)   = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,is)           + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dbcj_ds(:,:,j,is)         *ctcr_construc.vect_res(is) ;
                        mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj(:,j,is+1)     = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj(:,j,is)             + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dbcj_ds(:,j,is)           *ctcr_construc.vect_res(is) ;
                    
                    end
                end

            end

            % mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is+1)                = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is)            + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_duzj0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            % mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is+1)                = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is)            + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dm0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            % mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is+1)                = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is)            + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dn0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
                



            if bool_Cs0

                pt_s0_LIT_curr = simulation_param.pt_s0_LIT(simulation_param.pt_s0_LIT<= is) ;

                for tp_is0 = 1:length(pt_s0_LIT_curr)
                    is0 = pt_s0_LIT_curr(tp_is0) ;
        
                    for iv = 1:length(next_vectT)
                        i = next_vectT(iv) ;
            
                        mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,:,is+1,is0)       = mem_deriv_propag_low.mem_dti.mem_dti_dtaus0(i,:,is,is0)       + mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds(i,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,:,is+1,is0)         = mem_deriv_propag_low.mem_dti.mem_dti_dfs0(i,:,is,is0)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds(i,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,is+1,is0)     = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,is,is0)     + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds(i,:,is,is0)       *ctcr_construc.vect_res(is)  ;
                        mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,is+1,is0)       = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,is,is0)       + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds(i,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                            
                    end

                    mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,:,is+1,is0)           = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds(:,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,:,is+1,is0)             = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds(:,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,:,is+1,is0)           = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,:,is,is0)       + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds(:,:,is,is0)         *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,:,is+1,is0)             = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,:,is,is0)         + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds(:,:,is,is0)           *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,:,is+1,is0)     = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,:,is,is0) + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtaus0_ds(:,:,:,is,is0)   *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,:,is+1,is0)       = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,:,is,is0)   + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dfs0_ds(:,:,:,is,is0)     *ctcr_construc.vect_res(is)  ;
                    mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtaus0(:,:,is+1,is0)       = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtaus0(:,:,is,is0)   + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtaus0_ds(:,:,is,is0)     *ctcr_construc.vect_res(is)  ;                    
                    mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dfs0(:,:,is+1,is0)         = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dfs0(:,:,is,is0)     + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dfs0_ds(:,:,is,is0)       *ctcr_construc.vect_res(is)  ;
    
                end
            end
        end

    end

end