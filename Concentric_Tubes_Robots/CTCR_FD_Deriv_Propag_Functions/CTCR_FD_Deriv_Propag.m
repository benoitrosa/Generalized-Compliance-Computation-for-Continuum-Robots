function [mem_FD_CJ , mem_FD_deriv_propag_high , mem_FD_deriv_propag_low] ...
    = CTCR_FD_Deriv_Propag( ...
    select_DF , ampl_vibr , ctcr_carac , ctcr_construc , ctcr_act , ...
    ctcr_load , simulation_param , bvp_prop , pt_s0_FD)



    tic_FD              = tic ;
    nbT                 = ctcr_carac.nbT ;

    % ====== DF type initialisation ====== %
    % 1 = v+
    % 2 = v0
    % 3 = v-

    if strcmp(select_DF,'pm')

        vect_iJ = [1 , 2 , 3] ;

    elseif strcmp(select_DF,'pn')

        vect_iJ = [1 , 2] ;

    else  %strcmp(select_DF,'nm')

        vect_iJ = [2 , 3] ;

    end



    % ================================= %
    % ====== FD Deriv_Propag_Low ====== %

    fprintf(' ============ Computing FD Low Deriv \n') ;

    [tp_mem_FD_duzi  , tp_mem_FD_dti , tp_mem_FD_dm0 , ...
     tp_mem_FD_dn0   , tp_mem_FD_du0 , tp_mem_FD_dR0 , ...
     tp_mem_FD_dP0 , mem_FD_B] ...
     = FD_Deriv_Propag_Low(...
     select_DF , ampl_vibr , vect_iJ , simulation_param , ...
     ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , bvp_prop) ;



    % =================================== %
    % =============== FD J ============== %

    % mem_FD_J = [] ;

    fprintf(' ============ Computing FD J(s) \n') ;

    [mem_FD_J] ...
    = FD_Deriv_Propag_J(...
    select_DF , ampl_vibr , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ...
    ctcr_act , ctcr_load , bvp_prop) ;
        


    
    
    % ===================================== %
    % ============ FD LOW DWS0 ============ %


    fprintf(' ============ Computing FD Low Deriv ws0 \n') ;

    [tp_mem_FD_duzi_dws0  , tp_mem_FD_dti_dws0  , tp_mem_FD_dm0_dws0    , ...
     tp_mem_FD_dn0_dws0   , tp_mem_FD_du0_dws0  , tp_mem_FD_dR0_dws0  , ...
     tp_mem_FD_dP0_dws0 , mem_FD_dB_dws0] ...
     = FD_Deriv_Propag_Low_dws0(...
     select_DF , ampl_vibr , vect_iJ , simulation_param , ctcr_construc , ...
     ctcr_carac , ctcr_load , bvp_prop , pt_s0_FD) ;



    % ===================================== %
    % =============== FD CS0 ============== %

    % mem_FD_Cs0 = [] ;

    fprintf(' ============ Computing FD Cs0(s) \n') ;

    [mem_FD_Cs0] ...
    = FD_Deriv_Propag_Cs0(...
      select_DF , ampl_vibr , vect_iJ , simulation_param , ctcr_construc , ctcr_carac , ...
      ctcr_load , bvp_prop , pt_s0_FD) ;


    

    toc_FD = toc(tic_FD) ;
    
    


    % ==================================================================== %
    % ======================== Class construction ======================== %

    % ============================================== %
    % ============= Derivatives of u0 ============== %

    mem_FD_du0 = MemDU0([] , [] , [] , [] , [] , [] , []) ;

    mem_FD_du0.mem_du0_duzj0  = tp_mem_FD_du0(:,1:nbT,:)                 ;
    mem_FD_du0.mem_du0_dm0j0  = tp_mem_FD_du0(:,nbT+1:nbT+3,:)           ;
    mem_FD_du0.mem_du0_dn0j0  = tp_mem_FD_du0(:,nbT+4:nbT+6,:)           ;
    mem_FD_du0.mem_du0_dtcj   = tp_mem_FD_du0(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_du0.mem_du0_dbcj   = tp_mem_FD_du0(:,2*nbT+7:3*nbT+6,:)       ;
    mem_FD_du0.mem_du0_dtaus0 = tp_mem_FD_du0_dws0(:,1:3,:,:)            ;
    mem_FD_du0.mem_du0_dfs0   = tp_mem_FD_du0_dws0(:,4:6,:,:)            ;



    % ============================================= %
    % ============= Derivatives of m0 ============= %

    mem_FD_dm0 = MemDM0([] , [] , [] , [] , [] , [] , []) ;

    mem_FD_dm0.mem_dm0_duzj0  = tp_mem_FD_dm0(:,1:nbT,:)                 ;
    mem_FD_dm0.mem_dm0_dm0j0  = tp_mem_FD_dm0(:,nbT+1:nbT+3,:)           ;
    mem_FD_dm0.mem_dm0_dn0j0  = tp_mem_FD_dm0(:,nbT+4:nbT+6,:)           ;
    mem_FD_dm0.mem_dm0_dtcj   = tp_mem_FD_dm0(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_dm0.mem_dm0_dbcj   = tp_mem_FD_dm0(:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_dm0.mem_dm0_dtaus0 = tp_mem_FD_dm0_dws0(:,1:3,:,:)            ;
    mem_FD_dm0.mem_dm0_dfs0   = tp_mem_FD_dm0_dws0(:,4:6,:,:)            ;


    % ============================================== %
    % ============= Derivatives of n0 ============== %

    mem_FD_dn0 = MemDN0([] , [] , [] , [] , [] , [] , []) ;

    mem_FD_dn0.mem_dn0_duzj0  = tp_mem_FD_dn0(:,1:nbT,:)                 ;
    mem_FD_dn0.mem_dn0_dm0j0  = tp_mem_FD_dn0(:,nbT+1:nbT+3,:)           ;
    mem_FD_dn0.mem_dn0_dn0j0  = tp_mem_FD_dn0(:,nbT+4:nbT+6,:)           ;
    mem_FD_dn0.mem_dn0_dtcj   = tp_mem_FD_dn0(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_dn0.mem_dn0_dbcj   = tp_mem_FD_dn0(:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_dn0.mem_dn0_dtaus0 = tp_mem_FD_dn0_dws0(:,1:3,:,:)            ;
    mem_FD_dn0.mem_dn0_dfs0   = tp_mem_FD_dn0_dws0(:,4:6,:,:)            ;


    % ============================================= %
    % ============= Derivatives of ti ============= %

    mem_FD_dti = MemDTi([] , [] , [] , [] , [] , [] , []) ;

    mem_FD_dti.mem_dti_duzj0  = tp_mem_FD_dti(:,1:nbT,:)                 ;
    mem_FD_dti.mem_dti_dm0j0  = tp_mem_FD_dti(:,nbT+1:nbT+3,:)           ;
    mem_FD_dti.mem_dti_dn0j0  = tp_mem_FD_dti(:,nbT+4:nbT+6,:)           ;
    mem_FD_dti.mem_dti_dtcj   = tp_mem_FD_dti(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_dti.mem_dti_dbcj   = tp_mem_FD_dti(:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_dti.mem_dti_dtaus0 = tp_mem_FD_dti_dws0(:,1:3,:,:)            ;
    mem_FD_dti.mem_dti_dfs0   = tp_mem_FD_dti_dws0(:,4:6,:,:)            ;



    % ============================================== %
    % ============= Derivatives of uzi ============= %

    mem_FD_duzi = MemDUZi([] , [] , [] , [] , [] , [] , []) ;
    
    mem_FD_duzi.mem_duzi_duzj0  = tp_mem_FD_duzi(:,1:nbT,:)                 ;
    mem_FD_duzi.mem_duzi_dm0j0  = tp_mem_FD_duzi(:,nbT+1:nbT+3,:)           ;
    mem_FD_duzi.mem_duzi_dn0j0  = tp_mem_FD_duzi(:,nbT+4:nbT+6,:)           ;
    mem_FD_duzi.mem_duzi_dtcj   = tp_mem_FD_duzi(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_duzi.mem_duzi_dbcj   = tp_mem_FD_duzi(:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_duzi.mem_duzi_dtaus0 = tp_mem_FD_duzi_dws0(:,1:3,:,:)            ;
    mem_FD_duzi.mem_duzi_dfs0   = tp_mem_FD_duzi_dws0(:,4:6,:,:)            ;



    % =============================================== %
    % ============= Derivatives of 00Rs ============= %

    mem_FD_dR0 = MemDR0([] , [] , [] , [] , [] , [] , []) ;

    mem_FD_dR0.mem_dR0_duzj0  = tp_mem_FD_dR0(:,:,1:nbT,:)                 ;
    mem_FD_dR0.mem_dR0_dm0j0  = tp_mem_FD_dR0(:,:,nbT+1:nbT+3,:)           ;
    mem_FD_dR0.mem_dR0_dn0j0  = tp_mem_FD_dR0(:,:,nbT+4:nbT+6,:)           ;
    mem_FD_dR0.mem_dR0_dtcj   = tp_mem_FD_dR0(:,:,nbT+7:2*nbT+6,:)         ;
    mem_FD_dR0.mem_dR0_dbcj   = tp_mem_FD_dR0(:,:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_dR0.mem_dR0_dtaus0 = tp_mem_FD_dR0_dws0(:,:,1:3,:,:)            ;
    mem_FD_dR0.mem_dR0_dfs0   = tp_mem_FD_dR0_dws0(:,:,4:6,:,:)            ;



    % =============================================== %
    % ============== Derivatives of p0 ============== %

    mem_FD_dP0 = MemDP0([] , [] , [] , [] , [] , [] , []) ;
    
    mem_FD_dP0.mem_dP0_duzj0  = tp_mem_FD_dP0(:,1:nbT,:)                 ;
    mem_FD_dP0.mem_dP0_dm0j0  = tp_mem_FD_dP0(:,nbT+1:nbT+3,:)           ;
    mem_FD_dP0.mem_dP0_dn0j0  = tp_mem_FD_dP0(:,nbT+4:nbT+6,:)           ;
    mem_FD_dP0.mem_dP0_dtcj   = tp_mem_FD_dP0(:,nbT+7:2*nbT+6,:)         ;
    mem_FD_dP0.mem_dP0_dbcj   = tp_mem_FD_dP0(:,2*nbT+7:3*nbT+6,:)       ;

    mem_FD_dP0.mem_dP0_dtaus0 = tp_mem_FD_dP0_dws0(:,1:3,:,:)            ;
    mem_FD_dP0.mem_dP0_dfs0   = tp_mem_FD_dP0_dws0(:,4:6,:,:)            ;

    mem_FD_deriv_propag_low  = MemFDDerivPropagLow(mem_FD_du0 , mem_FD_dm0  , mem_FD_dn0  , ...
                                                       mem_FD_dti , mem_FD_duzi ,mem_FD_dR0 , ...
                                                       mem_FD_dP0 ) ;


        
    mem_FD_deriv_propag_high = MemFDDerivPropagHigh(mem_FD_B , mem_FD_dB_dws0 , [] , []) ;
    
    mem_FD_CJ = MemFDCJ(mem_FD_Cs0 , mem_FD_J) ;


    fprintf(' ============ Time for FD computation \n') ;
    fprintf(' == Time for FD computation : %.2e [s] \n', toc_FD) ;



end