function [mem_bvp , mem_deriv_propag_low] = IVP_MaJ_Mem(is , mem_bvp , ctcr_construc , mem_deriv_propag_low)


% ======================================================================= %
% ======================================================================= %

% This function integrates the state vector ODE and the Low-Level derivatives
% involved in the optimization Jacobian computation using a manual first order linearization 

% ====================
% ====== INPUTS ====== 

% is                    : [int] Index of the current curvilinear abscissa
% mem_bvp               : Memory of the BVP variables 
% ctcr_construc         : Robot features related to the model settings
% mem_deriv_propag_low  : Memory of the low-level derivatives 

% ====================
% ===== OUTPUTS ====== 

% mem_bvp               : Memory of the BVP variables 
% mem_deriv_propag_low  : Memory of the low-level derivatives 

% ======================================================================= %
% ======================================================================= %


    % ========================================================== %
    % ================== Getting input values ================== %
        
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    vect_res        = ctcr_construc.vect_res ;

    % ========================================================== %
    % ========================================================== %
    

    
    if ~ (is == ctcr_construc.nbP)
    
        next_vectT      = find(vect_ind_iT(:,1)<=is+1 & is+1<=vect_ind_iT(:,3)) ;
        vectT_first_pt  = find(is+1 == vect_ind_iT(:,1)) ;

        if ~isempty(vectT_first_pt)
            next_vectT = next_vectT(next_vectT ~= vectT_first_pt) ;
        end



        mem_bvp.mem_y.mem_R0(:,:,is+1)          = mem_bvp.mem_y.mem_R0(:,:,is)  + mem_bvp.mem_ys.mem_R0s(:,:,is)*vect_res(is) ;
        mem_bvp.mem_y.mem_p0(:,is+1)            = mem_bvp.mem_y.mem_p0(:,is)    + mem_bvp.mem_ys.mem_p0s(:,is)*vect_res(is) ;

        for iv = 1:length(next_vectT)
            i = next_vectT(iv) ; 

            mem_bvp.mem_y.mem_t(i,is+1)         = mem_bvp.mem_y.mem_t(i,is)     + mem_bvp.mem_ys.mem_ts(i,is)*vect_res(is) ; 
            mem_bvp.mem_y.mem_uz(i,is+1)        = mem_bvp.mem_y.mem_uz(i,is)    + mem_bvp.mem_ys.mem_uzs(i,is)*vect_res(is) ; 
        

            mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,:,is+1)    = mem_deriv_propag_low.mem_dti.mem_dti_duzj0(i,:,is)         + mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(i,:,is)       *ctcr_construc.vect_res(is) ;
                

        end

        if is >= ctcr_construc.ind_origin

            mem_bvp.mem_y.mem_m0(:,is+1)        = mem_bvp.mem_y.mem_m0(:,is)    + mem_bvp.mem_ys.mem_m0s(:,is)*vect_res(is) ;             
            mem_bvp.mem_y.mem_n0(:,is+1)        = mem_bvp.mem_y.mem_n0(:,is)    + mem_bvp.mem_ys.mem_n0s(:,is)*vect_res(is) ;


            for iv = 1:length(next_vectT)
                i = next_vectT(iv) ;

                
                mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,is+1)          = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0(i,:,is)      + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(i,:,is)        *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,is+1)          = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0(i,:,is)      + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(i,:,is)        *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,is+1)          = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0(i,:,is)      + mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(i,:,is)        *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,:,is+1)            = mem_deriv_propag_low.mem_dti.mem_dti_dm0j0(i,:,is)        + mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(i,:,is)          *ctcr_construc.vect_res(is) ;
                mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,:,is+1)            = mem_deriv_propag_low.mem_dti.mem_dti_dn0j0(i,:,is)        + mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(i,:,is)          *ctcr_construc.vect_res(is) ;
            

            end

            
            mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,:,is+1)                = mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0(:,:,is)        + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,:,is+1)                = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0(:,:,is)        + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,:,is+1)                = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0(:,:,is)        + mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,:,is+1)                = mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0(:,:,is)        + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,:,is+1)                = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0(:,:,is)        + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,:,is+1)                = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0(:,:,is)        + mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,:,is)          *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,:,is+1)          = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_duzj0(:,:,:,is)  + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_duzj0_ds(:,:,:,is)    *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,:,is+1)          = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dm0j0(:,:,:,is)  + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dm0j0_ds(:,:,:,is)    *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,:,is+1)          = mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dn0j0(:,:,:,is)  + mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dn0j0_ds(:,:,:,is)    *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is+1)            = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dm0j0(:,:,is)    + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dm0j0_ds(:,:,is)      *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is+1)            = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dn0j0(:,:,is)    + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dn0j0_ds(:,:,is)      *ctcr_construc.vect_res(is) ;
            mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is+1)            = mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_duzj0(:,:,is)    + mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_duzj0_ds(:,:,is)      *ctcr_construc.vect_res(is) ;

        end
    end
end





