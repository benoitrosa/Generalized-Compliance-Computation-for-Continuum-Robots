function [mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] ...
    = Deriv_Propag_Init_Mem(...
    ctcr_carac , ctcr_construc , mem_deriv_propag_low , bvp_prop , simulation_param)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    %digits(simulation_param.digits_length) ;
    %format long
    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT            ;    
    nbP             = ctcr_construc.nbP         ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    vect_res        = ctcr_construc.vect_res    ;
    ind_origin      = ctcr_construc.ind_origin  ;
    vect_z          = ctcr_construc.vect_z      ;
    K               = ctcr_construc.K           ;
    
    % ========================================================== %
    % ========================================================== %






%     % ===================================================================== %
%     % ======================== mem_deriv_propag_low ======================= %
% 
% 
%     % ===================================================================== %
%     % ============================== mem_duzi ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_duzi_dtcj            = zeros(nbT,nbT,nbP)         ;
%     mem_duzi_dbcj            = zeros(nbT,nbT,nbP)         ;
%     mem_duzi_dtaus0          = zeros(nbT,3,nbP,nbP)       ;
%     mem_duzi_dfs0            = zeros(nbT,3,nbP,nbP)       ;
% 
    % ====== Non-zero initialization

    % === mem_duzi_dbcj
    for iT = 1:nbT
        mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(iT,iT,vect_ind_iT(iT,1)) = - bvp_prop.IC_opt(iT)/vect_res(vect_ind_iT(iT,1)) ;
    end
% 
% 
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj      = mem_duzi_dtcj ;
%     mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj      = mem_duzi_dbcj ;
%     mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0    = mem_duzi_dtaus0 ;
%     mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0      = mem_duzi_dfs0 ;
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================ mem_duzi_ds ============================ %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_duzi_dtcj_ds         = zeros(nbT,nbT,nbP)         ;
%     mem_duzi_dbcj_ds         = zeros(nbT,nbT,nbP)         ;
%     mem_duzi_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
%     mem_duzi_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds   = mem_duzi_dtcj_ds ;
%     mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds   = mem_duzi_dbcj_ds ;
%     mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds = mem_duzi_dtaus0_ds ;
%     mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds   = mem_duzi_dfs0_ds ;
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================== mem_dti ============================== %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dti_dtcj            = zeros(nbT,nbT,nbP)         ;
%     mem_dti_dbcj            = zeros(nbT,nbT,nbP)         ;
%     mem_dti_dtaus0          = zeros(nbT,3,nbP,nbP)     ;
%     mem_dti_dfs0            = zeros(nbT,3,nbP,nbP)     ;
% 
%     % ====== Non-zero initialization
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_dti.mem_dti_dtcj = mem_dti_dtcj ;
%     mem_deriv_propag_low.mem_dti.mem_dti_dbcj = mem_dti_dbcj ;
%     mem_deriv_propag_low.mem_dti.mem_dti_dtaus0 = mem_dti_dtaus0 ;
%     mem_deriv_propag_low.mem_dti.mem_dti_dfs0 = mem_dti_dfs0 ;
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================ mem_dti_ds ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dti_dtcj_ds         = zeros(nbT,nbT,nbP)         ;
%     mem_dti_dbcj_ds         = zeros(nbT,nbT,nbP)         ;
%     mem_dti_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
%     mem_dti_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds = mem_dti_dtcj_ds ;
%     mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds = mem_dti_dbcj_ds ;
%     mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds = mem_dti_dtaus0_ds ;
%     mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds = mem_dti_dfs0_ds ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================== mem_dm0 ============================== %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dm0_dtcj            = zeros(3,nbT,nbP)         ;
%     mem_dm0_dbcj            = zeros(3,nbT,nbP)         ;
%     mem_dm0_dtaus0          = zeros(3,3,nbP,nbP)     ;
%     mem_dm0_dfs0            = zeros(3,3,nbP,nbP)     ;
% 
% %     % ====== Non-zero initialization
% % 
% % 
% %     ind_origin_is0  = find(simulation_param.pt_compl == ind_origin) ;
% % 
% %     % === mem_dm0_dtaus0
% %     mem_dm0_dtaus0(:,:,ind_origin_is0,ind_origin_is0) = -eye(3,3) ;
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj   = mem_dm0_dtcj ;
%     mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj   = mem_dm0_dbcj ;
%     mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0 = mem_dm0_dtaus0 ;
%     mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0   = mem_dm0_dfs0 ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================ mem_dm0_ds ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dm0_dtcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_dm0_dbcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_dm0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
%     mem_dm0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds = mem_dm0_dtcj_ds ;
%    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds = mem_dm0_dbcj_ds ;
%    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds = mem_dm0_dtaus0_ds ;
%    mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds = mem_dm0_dfs0_ds ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================== mem_dn0 ============================== %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dn0_dtcj            = zeros(3,nbT,nbP)         ;
%     mem_dn0_dbcj            = zeros(3,nbT,nbP)         ;
%     mem_dn0_dtaus0          = zeros(3,3,nbP,nbP)     ;
%     mem_dn0_dfs0            = zeros(3,3,nbP,nbP)     ;
% 
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj = mem_dn0_dtcj ;
%     mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj = mem_dn0_dbcj ;
%     mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0 = mem_dn0_dtaus0 ;
%     mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0 = mem_dn0_dfs0 ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================ mem_dn0_ds ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_dn0_dtcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_dn0_dbcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_dn0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
%     mem_dn0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds = mem_dn0_dtcj_ds ;
%     mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds = mem_dn0_dbcj_ds ;
%     mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds = mem_dn0_dtaus0_ds ;
%     mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds = mem_dn0_dfs0_ds ;
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================== mem_du0 ============================== %
%     % ===================================================================== %
% 
% 
%     % ====== Zero initialization
% 
%     mem_du0_dtcj            = zeros(3,nbT,nbP)         ;
%     mem_du0_dbcj            = zeros(3,nbT,nbP)         ;
%     mem_du0_dtaus0          = zeros(3,3,nbP,nbP)     ;
%     mem_du0_dfs0            = zeros(3,3,nbP,nbP)     ;
% 
% 
%      % ====== Non-zero initialization
% 
% 
% %     ind_origin_is0  = find(simulation_param.pt_compl == ind_origin) ;
% %     
% %     % === mem_du0_dtaus0 & mem_du0_dfs0
% %     sum_Ki = zeros(3) ;
% %     for i = 1:nbT
% %         sum_Ki = sum_Ki + K(:,:,i) ;
% %     end
% %     inv_sum_Ki = diag(1./[sum_Ki(1,1),sum_Ki(2,2),sum_Ki(3,3)]) ;
% % 
% %     temp_dtaus0 = -inv_sum_Ki ;
% %     mem_du0_dtaus0(:,:,ind_origin_is0,ind_origin_is0)   = [temp_dtaus0(1:2,:);zeros(1,3)]  ;
% % 
% %     temp_dfs0 = -inv_sum_Ki ;
% %     mem_du0_dfs0(:,:,ind_origin_is0,ind_origin_is0)     = [temp_dfs0(1:2,:);zeros(1,3)]    ;
% %         
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_du0.mem_du0_dtcj = mem_du0_dtcj ;
%     mem_deriv_propag_low.mem_du0.mem_du0_dbcj = mem_du0_dbcj ;
%     mem_deriv_propag_low.mem_du0.mem_du0_dtaus0 = mem_du0_dtaus0 ;
%     mem_deriv_propag_low.mem_du0.mem_du0_dfs0 = mem_du0_dfs0 ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================ mem_du0_ds ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_du0_dtcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_du0_dbcj_ds         = zeros(3,nbT,nbP)         ;
%     mem_du0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
%     mem_du0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_du0_ds.mem_du0_dtcj_ds = mem_du0_dtcj_ds ;
%     mem_deriv_propag_low.mem_du0_ds.mem_du0_dbcj_ds = mem_du0_dbcj_ds ;
%     mem_deriv_propag_low.mem_du0_ds.mem_du0_dtaus0_ds = mem_du0_dtaus0_ds ;
%     mem_deriv_propag_low.mem_du0_ds.mem_du0_dfs0_ds = mem_du0_dfs0_ds ;
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================= mem_d00Rs ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_d00Rs_dtcj          = zeros(3,3,nbT,nbP)       ;
%     mem_d00Rs_dbcj          = zeros(3,3,nbT,nbP)       ;
%     mem_d00Rs_dtaus0        = zeros(3,3,3,nbP,nbP)     ;
%     mem_d00Rs_dfs0          = zeros(3,3,3,nbP,nbP)     ;
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj = mem_d00Rs_dtcj ;
%     mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj = mem_d00Rs_dbcj ;
%     mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0 = mem_d00Rs_dtaus0 ;
%     mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0 = mem_d00Rs_dfs0 ;
% 
% 
% 
% 
% 
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % =========================== mem_d00Rs_ds ============================ %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_d00Rs_dtcj_ds       = zeros(3,3,nbT,nbP)       ;
%     mem_d00Rs_dbcj_ds       = zeros(3,3,nbT,nbP)       ;
%     mem_d00Rs_dtaus0_ds     = zeros(3,3,3,nbP,nbP)     ;
%     mem_d00Rs_dfs0_ds       = zeros(3,3,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtcj_ds = mem_d00Rs_dtcj_ds ;
%     mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dbcj_ds = mem_d00Rs_dbcj_ds ;
%     mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dtaus0_ds = mem_d00Rs_dtaus0_ds ;
%     mem_deriv_propag_low.mem_d00Rs_ds.mem_d00Rs_dfs0_ds = mem_d00Rs_dfs0_ds ;
% 
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================= mem_d00Ps ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     %mem_d00Ps_duzj0         = zeros(3,nbT,nbP)       ;
%     %mem_d00Ps_dm0j0         = zeros(3,3,nbP)         ;
%     %mem_d00Ps_dn0j0         = zeros(3,3,nbP)         ;
%     mem_d00Ps_dtcj          = zeros(3,nbT,nbP)       ;
%     mem_d00Ps_dbcj          = zeros(3,nbT,nbP)       ;
%     mem_d00Ps_dtaus0        = zeros(3,3,nbP,nbP)     ;
%     mem_d00Ps_dfs0          = zeros(3,3,nbP,nbP)     ;
% 
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtcj   = mem_d00Ps_dtcj ;
%     mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dbcj   = mem_d00Ps_dbcj ;
%     mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dtaus0 = mem_d00Ps_dtaus0 ;
%     mem_deriv_propag_low.mem_d00Ps.mem_d00Ps_dfs0   = mem_d00Ps_dfs0 ;
% 
% 
%     % ===================================================================== %
%     % =========================== mem_d00Ps_ds ============================ %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     % mem_d00Ps_duzj0_ds      = zeros(3,nbT,nbP)       ;
%     % mem_d00Ps_dm0j0_ds      = zeros(3,3,nbP)         ;
%     % mem_d00Ps_dn0j0_ds      = zeros(3,3,nbP)         ;
%     mem_d00Ps_dtcj_ds       = zeros(3,nbT,nbP)       ;
%     mem_d00Ps_dbcj_ds       = zeros(3,nbT,nbP)       ;
%     mem_d00Ps_dtaus0_ds     = zeros(3,3,nbP,nbP)     ;
%     mem_d00Ps_dfs0_ds       = zeros(3,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtcj_ds   = mem_d00Ps_dtcj_ds ;
%     mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dbcj_ds   = mem_d00Ps_dbcj_ds ;
%     mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dtaus0_ds = mem_d00Ps_dtaus0_ds ;
%     mem_deriv_propag_low.mem_d00Ps_ds.mem_d00Ps_dfs0_ds   = mem_d00Ps_dfs0_ds ;
% 
% 
% 
% 
% 
%     % ===================================================================== %
%     % ============================= mem_d00Ts ============================= %
%     % ===================================================================== %
% 
%     % ====== Zero initialization
% 
%     mem_d00Ts_duzj0         = zeros(4,4,nbT,nbP)       ;
%     mem_d00Ts_dm0j0         = zeros(4,4,3,nbP)         ;
%     mem_d00Ts_dn0j0         = zeros(4,4,3,nbP)         ;
%     mem_d00Ts_dtcj          = zeros(4,4,nbT,nbP)       ;
%     mem_d00Ts_dbcj          = zeros(4,4,nbT,nbP)       ;
%     mem_d00Ts_dtaus0        = zeros(4,4,3,nbP,nbP)     ;
%     mem_d00Ts_dfs0          = zeros(4,4,3,nbP,nbP)     ;
% 
%     % ====== Final initialization
% 
%     mem_deriv_propag_low.mem_d00Ts = MemD00TS(mem_d00Ts_duzj0 , mem_d00Ts_dm0j0 , mem_d00Ts_dn0j0 , ...
%         mem_d00Ts_dtcj , mem_d00Ts_dbcj , mem_d00Ts_dtaus0 , mem_d00Ts_dfs0) ;




    % ===================================================================== %
    % ======================= mem_deriv_propag_high ======================= %

    mem_B           = zeros(nbT+6 , 3*nbT+6)  ;
    mem_Bw0s0       = zeros(nbT+6 , 6 , nbP) ;

    mem_E           = zeros(6 , 3*nbT+12 , nbP) ;
    mem_Ew0s0       = zeros(6 , 6 , nbP , nbP) ;

    mem_deriv_propag_high = MemDerivPropagHigh(mem_B , mem_Bw0s0 , mem_E , mem_Ew0s0) ;




    % ===================================================================== %
    % =============================== mem_CJ ============================== %

    mem_Cs0 = zeros(6 , 6 , nbP , nbP) ;
    mem_J   = zeros(6 , 2*nbT , nbP) ;

    mem_CJ  = MemCJ(mem_Cs0 , mem_J) ;




end