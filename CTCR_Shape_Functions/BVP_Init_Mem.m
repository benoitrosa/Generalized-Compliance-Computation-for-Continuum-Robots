function [mem_bvp , mem_deriv_propag_low] ...
         = BVP_Init_Mem(...
         ctcr_construc , ctcr_carac)

% ======================================================================= %
% ======================================================================= %

% This function initializes the memories variables

% ====================
% ====== INPUTS ====== 

% ctcr_construc         : Robot features related to the model settings
% ctcr_carac            : Robot features

% ====================
% ===== OUTPUTS ====== 

% mem_bvp               : Memory of the BVP variables 
% mem_deriv_propag_low  : Memory of the low-level derivatives 

% ======================================================================= %
% ======================================================================= %


    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    
    nbP             = ctcr_construc.nbP ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    vect_z          = ctcr_construc.vect_z ;
    




    % ========================================================== %
    % ================= Initialization mem_bvp ================= %

    % y(s) memory initialization
    mem_t   = zeros(nbT,nbP) ;
    mem_uz  = zeros(nbT,nbP) ;
    mem_m0  = zeros(3,nbP) ;
    mem_n0  = zeros(3,nbP) ;

    mem_y   = MemY(mem_t , mem_uz , mem_m0 , mem_n0) ;

    % d_y_ds(s) memory initialization
    mem_ts  = zeros(nbT,nbP) ;
    mem_uzs = zeros(nbT,nbP) ;
    mem_m0s = zeros(3,nbP) ;
    mem_n0s = zeros(3,nbP) ;

    mem_ys  = MemYS(mem_ts , mem_uzs , mem_m0s , mem_n0s) ;

    % u0(s) memory initialization
    mem_u0          = zeros(3,nbP) ;

    % uixy memory initialization
    mem_uixy        = zeros(2,nbT,nbP) ;

    % B0(0)Ts memory initialization
    mem_T           = zeros(4,4,nbP) ;
    mem_T(:,:,1)    = [eye(3,3),[0;0;ctcr_construc.vect_z(1)];[0,0,0,1]] ;

    % ========================================================== %
    % ================== Setting output values ================= %

    mem_bvp = MemBVP(mem_y , mem_ys , mem_u0 , mem_uixy , mem_T , zeros(3,3,nbP)) ;








    % ===================================================================== %
    % ======================== mem_deriv_propag_low ======================= %
    



    % ===================================================================== %
    % ============================== mem_duzi ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_duzi_duzj0           = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dm0j0           = zeros(nbT,3,nbP)           ;
    mem_duzi_dn0j0           = zeros(nbT,3,nbP)           ;
    mem_duzi_dtcj            = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dbcj            = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dtaus0          = zeros(nbT,3,nbP,nbP)       ;
    mem_duzi_dfs0            = zeros(nbT,3,nbP,nbP)       ;    

    % ====== Non-zero initialization

    % === mem_duzi_duzj0
    for i = 1:nbT
        for is = vect_ind_iT(i,1):ind_origin
            mem_duzi_duzj0(i,i,is) = 1 ;
        end
    end

    % % === mem_duzi_dbcj
    % for iT = 1:nbT
    %     mem_duzi_dbcj(iT,iT,vect_ind_iT(iT,1)) = - bvp_prop.IC_opt(iT)/vect_res(vect_ind_iT(iT,1)) ;
    % end

    % ====== Final initialization

    mem_duzi = MemDUZi(mem_duzi_duzj0 , mem_duzi_dm0j0 , mem_duzi_dn0j0 , ...
        mem_duzi_dtcj , mem_duzi_dbcj , mem_duzi_dtaus0 , mem_duzi_dfs0) ;









    % ===================================================================== %
    % ============================ mem_duzi_ds ============================ %
    % ===================================================================== %

    % ====== Zero initialization

    mem_duzi_duzj0_ds        = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dm0j0_ds        = zeros(nbT,3,nbP)           ;
    mem_duzi_dn0j0_ds        = zeros(nbT,3,nbP)           ;
    mem_duzi_dtcj_ds         = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dbcj_ds         = zeros(nbT,nbT,nbP)         ;
    mem_duzi_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
    mem_duzi_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;


    % ====== Final initialization
    
    mem_duzi_ds = MemDUZiDS(mem_duzi_duzj0_ds , mem_duzi_dm0j0_ds , mem_duzi_dn0j0_ds , ...
        mem_duzi_dtcj_ds , mem_duzi_dbcj_ds , mem_duzi_dtaus0_ds , mem_duzi_dfs0_ds) ;










    % ===================================================================== %
    % ============================== mem_dti ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dti_duzj0           = zeros(nbT,nbT,nbP)         ;
    mem_dti_dm0j0           = zeros(nbT,3,nbP)           ;
    mem_dti_dn0j0           = zeros(nbT,3,nbP)           ;
    mem_dti_dtcj            = zeros(nbT,nbT,nbP)         ;
    mem_dti_dbcj            = zeros(nbT,nbT,nbP)         ;
    mem_dti_dtaus0          = zeros(nbT,3,nbP,nbP)     ;
    mem_dti_dfs0            = zeros(nbT,3,nbP,nbP)     ;

    % ====== Non-zero initialization

    % === mem_dti_duzj0
    for i = 1:nbT
        for is = vect_ind_iT(i,1):ind_origin
            mem_dti_duzj0(i,i,is) = vect_z(is) - vect_z(vect_ind_iT(i,1)) ;
        end
    end

    % ====== Final initialization

     mem_dti = MemDTi(mem_dti_duzj0 , mem_dti_dm0j0 , mem_dti_dn0j0 , ...
        mem_dti_dtcj , mem_dti_dbcj , mem_dti_dtaus0 , mem_dti_dfs0) ;






    % ===================================================================== %
    % ============================ mem_dti_ds ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dti_duzj0_ds        = zeros(nbT,nbT,nbP)         ;
    mem_dti_dm0j0_ds        = zeros(nbT,3,nbP)           ;
    mem_dti_dn0j0_ds        = zeros(nbT,3,nbP)           ;
    mem_dti_dtcj_ds         = zeros(nbT,nbT,nbP)         ;
    mem_dti_dbcj_ds         = zeros(nbT,nbT,nbP)         ;
    mem_dti_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
    mem_dti_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;


    % ====== Final initialization

    mem_dti_ds = MemDTiDS(mem_dti_duzj0_ds , mem_dti_dm0j0_ds , mem_dti_dn0j0_ds , ...
        mem_dti_dtcj_ds , mem_dti_dbcj_ds , mem_dti_dtaus0_ds , mem_dti_dfs0_ds) ;










    % ===================================================================== %
    % ============================== mem_dm0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dm0_duzj0           = zeros(3,nbT,nbP)         ;
    mem_dm0_dm0j0           = zeros(3,3,nbP)           ;
    mem_dm0_dn0j0           = zeros(3,3,nbP)           ;
    mem_dm0_dtcj            = zeros(3,nbT,nbP)         ;
    mem_dm0_dbcj            = zeros(3,nbT,nbP)         ;
    mem_dm0_dtaus0          = zeros(3,3,nbP,nbP)     ;
    mem_dm0_dfs0            = zeros(3,3,nbP,nbP)     ;

    % ====== Non-zero initialization

    % === mem_dm0_dm0j0
    mem_dm0_dm0j0(:,:,ind_origin) = eye(3) ;

    % ====== Final initialization

    mem_dm0 = MemDM0(mem_dm0_duzj0 , mem_dm0_dm0j0 , mem_dm0_dn0j0 , ...
        mem_dm0_dtcj , mem_dm0_dbcj , mem_dm0_dtaus0 , mem_dm0_dfs0) ;



    





    % ===================================================================== %
    % ============================ mem_dm0_ds ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dm0_duzj0_ds        = zeros(3,nbT,nbP)         ;
    mem_dm0_dm0j0_ds        = zeros(3,3,nbP)           ;
    mem_dm0_dn0j0_ds        = zeros(3,3,nbP)           ;
    mem_dm0_dtcj_ds         = zeros(3,nbT,nbP)         ;
    mem_dm0_dbcj_ds         = zeros(3,nbT,nbP)         ;
    mem_dm0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_dm0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_dm0_ds = MemDM0DS(mem_dm0_duzj0_ds , mem_dm0_dm0j0_ds , mem_dm0_dn0j0_ds , ...
        mem_dm0_dtcj_ds , mem_dm0_dbcj_ds , mem_dm0_dtaus0_ds , mem_dm0_dfs0_ds) ;









    % ===================================================================== %
    % ============================== mem_dn0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dn0_duzj0           = zeros(3,nbT,nbP)         ;
    mem_dn0_dm0j0           = zeros(3,3,nbP)           ;
    mem_dn0_dn0j0           = zeros(3,3,nbP)           ;
    mem_dn0_dtcj            = zeros(3,nbT,nbP)         ;
    mem_dn0_dbcj            = zeros(3,nbT,nbP)         ;
    mem_dn0_dtaus0          = zeros(3,3,nbP,nbP)     ;
    mem_dn0_dfs0            = zeros(3,3,nbP,nbP)     ;

    % ====== Non-zero initialization

    % === mem_dn0_dn0j0
    mem_dn0_dn0j0(:,:,ind_origin) = eye(3) ;

    % ====== Final initialization

    mem_dn0 = MemDN0(mem_dn0_duzj0 , mem_dn0_dm0j0 , mem_dn0_dn0j0 , ...
        mem_dn0_dtcj , mem_dn0_dbcj , mem_dn0_dtaus0 , mem_dn0_dfs0) ;










    % ===================================================================== %
    % ============================ mem_dn0_ds ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dn0_duzj0_ds        = zeros(3,nbT,nbP)         ;
    mem_dn0_dm0j0_ds        = zeros(3,3,nbP)           ;
    mem_dn0_dn0j0_ds        = zeros(3,3,nbP)           ;
    mem_dn0_dtcj_ds         = zeros(3,nbT,nbP)         ;
    mem_dn0_dbcj_ds         = zeros(3,nbT,nbP)         ;
    mem_dn0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_dn0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;


    % ====== Final initialization

    mem_dn0_ds = MemDN0DS(mem_dn0_duzj0_ds , mem_dn0_dm0j0_ds , mem_dn0_dn0j0_ds , ...
        mem_dn0_dtcj_ds , mem_dn0_dbcj_ds , mem_dn0_dtaus0_ds , mem_dn0_dfs0_ds) ;









    % ===================================================================== %
    % ============================== mem_du0 ============================== %
    % ===================================================================== %


    % ====== Zero initialization

    mem_du0_duzj0           = zeros(3,nbT,nbP)         ;
    mem_du0_dm0j0           = zeros(3,3,nbP)           ;
    mem_du0_dn0j0           = zeros(3,3,nbP)           ;
    mem_du0_dtcj            = zeros(3,nbT,nbP)         ;
    mem_du0_dbcj            = zeros(3,nbT,nbP)         ;
    mem_du0_dtaus0          = zeros(3,3,nbP,nbP)     ;
    mem_du0_dfs0            = zeros(3,3,nbP,nbP)     ;
    

    % ====== Final initialization

    mem_du0 = MemDU0(mem_du0_duzj0 , mem_du0_dm0j0 , mem_du0_dn0j0 , ...
        mem_du0_dtcj , mem_du0_dbcj , mem_du0_dtaus0 , mem_du0_dfs0) ;








    % ===================================================================== %
    % ============================ mem_du0_ds ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_du0_duzj0_ds        = zeros(3,nbT,nbP)         ;
    mem_du0_dm0j0_ds        = zeros(3,3,nbP)           ;
    mem_du0_dn0j0_ds        = zeros(3,3,nbP)           ;
    mem_du0_dtcj_ds         = zeros(3,nbT,nbP)         ;
    mem_du0_dbcj_ds         = zeros(3,nbT,nbP)         ;
    mem_du0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_du0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;

    % ====== Final initialization
    
    mem_du0_ds = MemDU0DS(mem_du0_duzj0_ds , mem_du0_dm0j0_ds , mem_du0_dn0j0_ds , ...
        mem_du0_dtcj_ds , mem_du0_dbcj_ds , mem_du0_dtaus0_ds , mem_du0_dfs0_ds) ;











    % ===================================================================== %
    % ============================= mem_d00Rs ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_d00Rs_duzj0         = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dm0j0         = zeros(3,3,3,nbP)         ;
    mem_d00Rs_dn0j0         = zeros(3,3,3,nbP)         ;
    mem_d00Rs_dtcj          = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dbcj          = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dtaus0        = zeros(3,3,3,nbP,nbP)     ;
    mem_d00Rs_dfs0          = zeros(3,3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_d00Rs = MemD00RS(mem_d00Rs_duzj0 , mem_d00Rs_dm0j0 , mem_d00Rs_dn0j0 , ...
        mem_d00Rs_dtcj , mem_d00Rs_dbcj , mem_d00Rs_dtaus0 , mem_d00Rs_dfs0) ;












    % ===================================================================== %
    % =========================== mem_d00Rs_ds ============================ %
    % ===================================================================== %

    % ====== Zero initialization

    mem_d00Rs_duzj0_ds      = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dm0j0_ds      = zeros(3,3,3,nbP)         ;
    mem_d00Rs_dn0j0_ds      = zeros(3,3,3,nbP)         ;
    mem_d00Rs_dtcj_ds       = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dbcj_ds       = zeros(3,3,nbT,nbP)       ;
    mem_d00Rs_dtaus0_ds     = zeros(3,3,3,nbP,nbP)     ;
    mem_d00Rs_dfs0_ds       = zeros(3,3,3,nbP,nbP)     ;

    % ====== Final initialization
    
    mem_d00Rs_ds = MemD00RSDS(mem_d00Rs_duzj0_ds , mem_d00Rs_dm0j0_ds , mem_d00Rs_dn0j0_ds , ...
        mem_d00Rs_dtcj_ds , mem_d00Rs_dbcj_ds , mem_d00Rs_dtaus0_ds , mem_d00Rs_dfs0_ds) ;




    % ===================================================================== %
    % ============================= mem_d00Ps ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_d00Ps_duzj0         = zeros(3,nbT,nbP)       ;
    mem_d00Ps_dm0j0         = zeros(3,3,nbP)         ;
    mem_d00Ps_dn0j0         = zeros(3,3,nbP)         ;
    mem_d00Ps_dtcj          = zeros(3,nbT,nbP)       ;
    mem_d00Ps_dbcj          = zeros(3,nbT,nbP)       ;
    mem_d00Ps_dtaus0        = zeros(3,3,nbP,nbP)     ;
    mem_d00Ps_dfs0          = zeros(3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_d00Ps = MemD00PS(mem_d00Ps_duzj0 , mem_d00Ps_dm0j0 , mem_d00Ps_dn0j0 , ...
        mem_d00Ps_dtcj , mem_d00Ps_dbcj , mem_d00Ps_dtaus0 , mem_d00Ps_dfs0) ;





    % ===================================================================== %
    % ============================ mem_d00Ps_ds =========================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_d00Ps_ds_duzj0         = zeros(3,nbT,nbP)       ;
    mem_d00Ps_ds_dm0j0         = zeros(3,3,nbP)         ;
    mem_d00Ps_ds_dn0j0         = zeros(3,3,nbP)         ;
    mem_d00Ps_dtcj_ds       = zeros(3,nbT,nbP)       ;
    mem_d00Ps_dbcj_ds       = zeros(3,nbT,nbP)       ;
    mem_d00Ps_dtaus0_ds     = zeros(3,3,nbP,nbP)     ;
    mem_d00Ps_dfs0_ds       = zeros(3,3,nbP,nbP)     ;
   

    % ====== Final initialization

    mem_d00Ps_ds = MemD00PSDS(mem_d00Ps_ds_duzj0 , mem_d00Ps_ds_dm0j0 , mem_d00Ps_ds_dn0j0 , ...
        mem_d00Ps_dtcj_ds , mem_d00Ps_dbcj_ds , mem_d00Ps_dtaus0_ds , mem_d00Ps_dfs0_ds) ;





    % ===================================================================== %
    % ============================= mem_d00Ts ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_d00Ts_duzj0         = zeros(4,4,nbT,nbP)       ;
    mem_d00Ts_dm0j0         = zeros(4,4,3,nbP)         ;
    mem_d00Ts_dn0j0         = zeros(4,4,3,nbP)         ;
    mem_d00Ts_dtcj          = zeros(4,4,nbT,nbP)       ;
    mem_d00Ts_dbcj          = zeros(4,4,nbT,nbP)       ;
    mem_d00Ts_dtaus0        = zeros(4,4,3,nbP,nbP)     ;
    mem_d00Ts_dfs0          = zeros(4,4,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_d00Ts = MemD00TS(mem_d00Ts_duzj0 , mem_d00Ts_dm0j0 , mem_d00Ts_dn0j0 , ...
        mem_d00Ts_dtcj , mem_d00Ts_dbcj , mem_d00Ts_dtaus0 , mem_d00Ts_dfs0) ;




    % ========================================================== %
    % ================== Setting output values ================= %

    mem_deriv_propag_low = MemDerivPropagLow(mem_du0 , mem_du0_ds , ...
        mem_dm0 , mem_dm0_ds , mem_dn0 , mem_dn0_ds , mem_dti , mem_dti_ds , ...
        mem_duzi , mem_duzi_ds , mem_d00Rs , mem_d00Rs_ds , mem_d00Ps , mem_d00Ps_ds , mem_d00Ts) ;

    % ========================================================== %
    % ========================================================== %

    
    
end