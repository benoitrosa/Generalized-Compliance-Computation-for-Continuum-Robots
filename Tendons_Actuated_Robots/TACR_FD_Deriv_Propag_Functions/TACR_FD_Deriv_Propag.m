function [mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low] ...
    = TACR_FD_Deriv_Propag( ...
    select_DF , ampl_vibr , tacr_carac , tacr_construc , ...
    tacr_act , tacr_load , simulation_param , bvp_prop , pt_s0_FD)


    tic_FD = tic ;    

    % ====== DF type initialisation ====== %
    % 1 = v+
    % 2 = v0
    % 3 = v-

    if strcmp(select_DF,'pm')

        vect_iJ = [1 , 2 , 3] ;

    elseif strcmp(select_DF,'pn')

        vect_iJ = [1 , 2] ;

    else %strcmp(select_DF,'nm')

        vect_iJ = [2 , 3] ;

    end



    % ================================= %
    % ====== FD Deriv_Propag_Low ====== %

    fprintf(' ============ Computing FD Low Deriv \n') ;

    [tp_mem_FD_du0 , tp_mem_FD_dv0    , tp_mem_FD_dR0     , tp_mem_FD_dp0 , ...
     tp_mem_FD_dm0 , tp_mem_FD_dn0    , tp_mem_FD_dc      , tp_mem_FD_dd  , ...
     tp_mem_FD_dM  , tp_mem_FD_dinv_M , tp_mem_FD_ddpi_ds , tp_mem_FD_dAi , ...
     mem_FD_dB] ...
    = FD_Deriv_Propag_Low(...
    select_DF , ampl_vibr , vect_iJ , tacr_construc , ...
    tacr_carac , tacr_act , tacr_load , bvp_prop , simulation_param) ;
    



    % =================================== %
    % =============== FD J ============== %

    fprintf(' ============ Computing FD J(s) \n') ;


    [mem_FD_J] ...
    = FD_Deriv_Propag_J(...
    select_DF , ampl_vibr , vect_iJ , tacr_construc , ...
    tacr_carac , tacr_act , tacr_load , bvp_prop , simulation_param) ;



    % ===================================== %
    % ============ FD LOW DWS0 ============ %

    fprintf(' ============ Computing FD Low Deriv ws0 \n') ;

     [tp_mem_FD_du0_dws0 , tp_mem_FD_dv0_dws0    , tp_mem_FD_dR0_dws0     , tp_mem_FD_dp0_dws0 , ...
     tp_mem_FD_dm0_dws0  , tp_mem_FD_dn0_dws0    , tp_mem_FD_dc_dws0      , tp_mem_FD_dd_dws0  , ...
     tp_mem_FD_dM_dws0   , tp_mem_FD_dinv_M_dws0 , tp_mem_FD_ddpi_dws0_ds , tp_mem_FD_dAi_dws0 , ...
     mem_FD_dB_dws0] ...
     = FD_Deriv_Propag_Low_dws0(...
     select_DF , ampl_vibr , vect_iJ , ...
     tacr_construc , tacr_carac , ...
     tacr_act , tacr_load , bvp_prop , pt_s0_FD , simulation_param) ;



    % ===================================== %
    % =============== FD CS0 ============== %

    fprintf(' ============ Computing FD Cs0(s) \n') ;

    [mem_FD_Cs0] ...
    = FD_Deriv_Propag_Cs0(...
      select_DF , ampl_vibr , vect_iJ , ...
      tacr_construc , tacr_carac , tacr_act , tacr_load , ...
      bvp_prop , pt_s0_FD , simulation_param) ;


    toc_FD = toc(tic_FD) ;
    



    % ==================================================================== %
    % ======================== Class construction ======================== %




    % ============= %
    % ==== Derivatives of u0(s)

    mem_FD_du0 = MemDU0([] , [] , [] , [] , []) ;

    mem_FD_du0.mem_du0_dm0      = tp_mem_FD_du0(:,1:3,:)        ;
    mem_FD_du0.mem_du0_dn0      = tp_mem_FD_du0(:,4:6,:)        ;
    mem_FD_du0.mem_du0_dti      = tp_mem_FD_du0(:,7:end,:)      ;
    mem_FD_du0.mem_du0_dtaus0   = tp_mem_FD_du0_dws0(:,1:3,:,:) ;
    mem_FD_du0.mem_du0_dfs0     = tp_mem_FD_du0_dws0(:,4:6,:,:) ;



    % ============= %
    % ==== Derivatives of v0(s)

    mem_FD_dv0 = MemDV0([] , [] , [] , [] , []) ;

    mem_FD_dv0.mem_dv0_dm0      = tp_mem_FD_dv0(:,1:3,:)        ;
    mem_FD_dv0.mem_dv0_dn0      = tp_mem_FD_dv0(:,4:6,:)        ;
    mem_FD_dv0.mem_dv0_dti      = tp_mem_FD_dv0(:,7:end,:)      ;
    mem_FD_dv0.mem_dv0_dtaus0   = tp_mem_FD_dv0_dws0(:,1:3,:,:) ;
    mem_FD_dv0.mem_dv0_dfs0     = tp_mem_FD_dv0_dws0(:,4:6,:,:) ;
    


    % ============= %
    % ==== Derivatives of R0(s)

    mem_FD_dR0 = MemDR0([] , [] , [] , [] , []) ;

    mem_FD_dR0.mem_dR0_dm0      = tp_mem_FD_dR0(:,:,1:3,:)          ;
    mem_FD_dR0.mem_dR0_dn0      = tp_mem_FD_dR0(:,:,4:6,:)          ;
    mem_FD_dR0.mem_dR0_dti      = tp_mem_FD_dR0(:,:,7:end,:)        ;
    mem_FD_dR0.mem_dR0_dtaus0   = tp_mem_FD_dR0_dws0(:,:,1:3,:,:)   ;
    mem_FD_dR0.mem_dR0_dfs0     = tp_mem_FD_dR0_dws0(:,:,4:6,:,:)   ;


    % ============= %
    % ==== Derivatives of p0(s)

    mem_FD_dp0 = MemDP0([] , [] , [] , [] , []) ;

    mem_FD_dp0.mem_dp0_dm0      = tp_mem_FD_dp0(:,1:3,:)        ;
    mem_FD_dp0.mem_dp0_dn0      = tp_mem_FD_dp0(:,4:6,:)        ;
    mem_FD_dp0.mem_dp0_dti      = tp_mem_FD_dp0(:,7:end,:)      ;
    mem_FD_dp0.mem_dp0_dtaus0   = tp_mem_FD_dp0_dws0(:,1:3,:,:) ;
    mem_FD_dp0.mem_dp0_dfs0     = tp_mem_FD_dp0_dws0(:,4:6,:,:) ;

   
    % ============= %
    % ==== Derivatives of m0(s)

    mem_FD_dm0 = MemDM0([] , [] , [] , [] , []) ;
    
    mem_FD_dm0.mem_dm0_dm0      = tp_mem_FD_dm0(:,1:3,:)        ;
    mem_FD_dm0.mem_dm0_dn0      = tp_mem_FD_dm0(:,4:6,:)        ;
    mem_FD_dm0.mem_dm0_dti      = tp_mem_FD_dm0(:,7:end,:)      ;
    mem_FD_dm0.mem_dm0_dtaus0   = tp_mem_FD_dm0_dws0(:,1:3,:,:) ;
    mem_FD_dm0.mem_dm0_dfs0     = tp_mem_FD_dm0_dws0(:,4:6,:,:) ;


    % ============= %
    % ==== Derivatives of n0(s)

    mem_FD_dn0 = MemDN0([] , [] , [] , [] , []) ;

    mem_FD_dn0.mem_dn0_dm0      = tp_mem_FD_dn0(:,1:3,:)        ;
    mem_FD_dn0.mem_dn0_dn0      = tp_mem_FD_dn0(:,4:6,:)        ;
    mem_FD_dn0.mem_dn0_dti      = tp_mem_FD_dn0(:,7:end,:)      ;
    mem_FD_dn0.mem_dn0_dtaus0   = tp_mem_FD_dn0_dws0(:,1:3,:,:) ;
    mem_FD_dn0.mem_dn0_dfs0     = tp_mem_FD_dn0_dws0(:,4:6,:,:) ;


    % ============= %
    % ==== Derivatives of c(s)

    mem_FD_dc = MemDC([] , [] , [] , [] , []) ;

    mem_FD_dc.mem_dc_dm0      = tp_mem_FD_dc(:,1:3,:)        ;
    mem_FD_dc.mem_dc_dn0      = tp_mem_FD_dc(:,4:6,:)        ;
    mem_FD_dc.mem_dc_dti      = tp_mem_FD_dc(:,7:end,:)      ;
    mem_FD_dc.mem_dc_dtaus0   = tp_mem_FD_dc_dws0(:,1:3,:,:) ;
    mem_FD_dc.mem_dc_dfs0     = tp_mem_FD_dc_dws0(:,4:6,:,:) ;


    % ============= %
    % ==== Derivatives of d(s)

    mem_FD_dd = MemDD([] , [] , [] , [] , []) ;

    mem_FD_dd.mem_dd_dm0      = tp_mem_FD_dd(:,1:3,:)        ;
    mem_FD_dd.mem_dd_dn0      = tp_mem_FD_dd(:,4:6,:)        ;
    mem_FD_dd.mem_dd_dti      = tp_mem_FD_dd(:,7:end,:)      ;
    mem_FD_dd.mem_dd_dtaus0   = tp_mem_FD_dd_dws0(:,1:3,:,:) ;
    mem_FD_dd.mem_dd_dfs0     = tp_mem_FD_dd_dws0(:,4:6,:,:) ;



    % ============= %
    % ==== Derivatives of M(s)

    mem_FD_dM = MemDM([] , [] , [] , [] , []) ;

    mem_FD_dM.mem_dM_dm0      = tp_mem_FD_dM(:,:,1:3,:)          ;
    mem_FD_dM.mem_dM_dn0      = tp_mem_FD_dM(:,:,4:6,:)          ;
    mem_FD_dM.mem_dM_dti      = tp_mem_FD_dM(:,:,7:end,:)        ;
    mem_FD_dM.mem_dM_dtaus0   = tp_mem_FD_dM_dws0(:,:,1:3,:,:)   ;
    mem_FD_dM.mem_dM_dfs0     = tp_mem_FD_dM_dws0(:,:,4:6,:,:)   ;



    % ============= %
    % ==== Derivatives of inv_M(s)

    mem_FD_dinv_M = MemDinvM([] , [] , [] , [] , []) ;

    mem_FD_dinv_M.mem_dinv_M_dm0      = tp_mem_FD_dinv_M(:,:,1:3,:)          ;
    mem_FD_dinv_M.mem_dinv_M_dn0      = tp_mem_FD_dinv_M(:,:,4:6,:)          ;
    mem_FD_dinv_M.mem_dinv_M_dti      = tp_mem_FD_dinv_M(:,:,7:end,:)        ;
    mem_FD_dinv_M.mem_dinv_M_dtaus0   = tp_mem_FD_dinv_M_dws0(:,:,1:3,:,:)   ;
    mem_FD_dinv_M.mem_dinv_M_dfs0     = tp_mem_FD_dinv_M_dws0(:,:,4:6,:,:)   ;



    % ============= %
    % ==== Derivatives of dpi_ds(s)

    mem_FD_ddpi_ds = MemDDPIDS([] , [] , [] , [] , []) ;

    mem_FD_ddpi_ds.mem_ddpi_dm0_ds      = tp_mem_FD_ddpi_ds(:,:,1:3,:)          ;
    mem_FD_ddpi_ds.mem_ddpi_dn0_ds      = tp_mem_FD_ddpi_ds(:,:,4:6,:)          ;
    mem_FD_ddpi_ds.mem_ddpi_dti_ds      = tp_mem_FD_ddpi_ds(:,:,7:end,:)        ;
    mem_FD_ddpi_ds.mem_ddpi_dtaus0_ds   = tp_mem_FD_ddpi_dws0_ds(:,:,1:3,:,:)   ;
    mem_FD_ddpi_ds.mem_ddpi_dfs0_ds     = tp_mem_FD_ddpi_dws0_ds(:,:,4:6,:,:)   ;




    % ============= %
    % ==== Derivatives of dAi(s)

    mem_FD_dAi = MemDAi([] , [] , [] , [] , []) ;

    mem_FD_dAi.mem_dAi_dm0      = tp_mem_FD_dAi(:,:,:,1:3,:)         ;
    mem_FD_dAi.mem_dAi_dn0      = tp_mem_FD_dAi(:,:,:,4:6,:)         ;
    mem_FD_dAi.mem_dAi_dti      = tp_mem_FD_dAi(:,:,:,7:end,:)       ;
    mem_FD_dAi.mem_dAi_dtaus0   = tp_mem_FD_dAi_dws0(:,:,:,1:3,:,:)   ;
    mem_FD_dAi.mem_dAi_dfs0     = tp_mem_FD_dAi_dws0(:,:,:,4:6,:,:)   ;




    mem_FD_deriv_propag_low     = MemFDDerivPropagLow(mem_FD_du0 , mem_FD_dv0    , mem_FD_dR0     , mem_FD_dp0 , ...
                                                      mem_FD_dm0 , mem_FD_dn0    , mem_FD_dc      , mem_FD_dd  , ...
                                                      mem_FD_dM  , mem_FD_dinv_M , mem_FD_ddpi_ds , mem_FD_dAi) ;

    
    mem_FD_deriv_propag_high    = MemFDDerivPropagHigh(mem_FD_dB , mem_FD_dB_dws0 , [] , []) ;
        
    mem_FD_CJ                   = MemFDCJ(mem_FD_Cs0 , mem_FD_J) ;



    fprintf(' ============ Time for FD computation \n') ;
    fprintf(' == Time for FD computation : %.2e [s] \n', toc_FD) ;



end