function [mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] ...
         = Init_Mem(...
         ctcr_construc , ctcr_carac , bvp_prop)


% ======================================================================= %
% ======================================================================= %
%
% This function initializes the memories variables for the state vector and the partial derivatives 
%
% ====================
% ====== INPUTS ====== 
%
% ctcr_construc         : (class)   Robot features related to the model settings
% ctcr_carac            : (class)   Robot features
% bvp_prop              : (class)   Results of the BVP resolution
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class) Memory of the BVP variables 
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
% mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
%
% ======================================================================= %
% ======================================================================= %


    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    
    nbP             = ctcr_construc.nbP ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ind_origin      = ctcr_construc.ind_origin ;
    vect_z          = ctcr_construc.vect_z ;
    vect_res        = ctcr_construc.vect_res ; 
    




    % ========================================================== %
    % ================= Initialization mem_bvp ================= %

    % y(s) memory initialization
    mem_t           = zeros(nbT,nbP) ;
    mem_uz          = zeros(nbT,nbP) ;
    mem_m0          = zeros(3,nbP) ;
    mem_n0          = zeros(3,nbP) ;
    mem_R0          = zeros(3,3,nbP) ;
    mem_p0          = zeros(3,nbP) ;

    % ====== Non-zero initialization
    mem_R0(:,:,1)   = eye(3,3) ;
    mem_p0(:,1)     = [0;0;ctcr_construc.vect_z(1)] ;

    mem_y   = MemY(mem_t , mem_uz , mem_m0 , mem_n0 , mem_R0 , mem_p0) ;

    % d_y_ds(s) memory initialization
    mem_ts      = zeros(nbT,nbP) ;
    mem_uzs     = zeros(nbT,nbP) ;
    mem_m0s     = zeros(3,nbP) ;
    mem_n0s     = zeros(3,nbP) ;
    mem_R0s     = zeros(3,3,nbP) ;
    mem_p0s     = zeros(3,nbP) ;

    mem_ys  = MemYS(mem_ts , mem_uzs , mem_m0s , mem_n0s , mem_R0s , mem_p0s) ;

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

    % === mem_duzi_dbcj
    for iT = 1:nbT
        mem_duzi_dbcj(iT,iT,vect_ind_iT(iT,1)) = - bvp_prop.IC_opt(iT)/vect_res(vect_ind_iT(iT,1)) ;
    end

    % ====== Final initialization

    mem_duzi = MemDUZi(mem_duzi_duzj0 , mem_duzi_dm0j0 , mem_duzi_dn0j0 , ...
        mem_duzi_dtcj , mem_duzi_dbcj , mem_duzi_dtaus0 , mem_duzi_dfs0) ;









    % ===================================================================== %
    % ============================ mem_duzi_ds ============================ %
    % ===================================================================== %

    % ====== Zero initialization

    mem_duzi_duzj0_ds        = zeros(nbT,nbT,nbP)       ;
    mem_duzi_dm0j0_ds        = zeros(nbT,3,nbP)         ;
    mem_duzi_dn0j0_ds        = zeros(nbT,3,nbP)         ;
    mem_duzi_dtcj_ds         = zeros(nbT,nbT,nbP)       ;
    mem_duzi_dbcj_ds         = zeros(nbT,nbT,nbP)       ;
    mem_duzi_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
    mem_duzi_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;


    % ====== Final initialization
    
    mem_duzi_ds = MemDUZiDS(mem_duzi_duzj0_ds , mem_duzi_dm0j0_ds , mem_duzi_dn0j0_ds , ...
        mem_duzi_dtcj_ds , mem_duzi_dbcj_ds , mem_duzi_dtaus0_ds , mem_duzi_dfs0_ds) ;










    % ===================================================================== %
    % ============================== mem_dti ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dti_duzj0           = zeros(nbT,nbT,nbP)       ;
    mem_dti_dm0j0           = zeros(nbT,3,nbP)         ;
    mem_dti_dn0j0           = zeros(nbT,3,nbP)         ;
    mem_dti_dtcj            = zeros(nbT,nbT,nbP)       ;
    mem_dti_dbcj            = zeros(nbT,nbT,nbP)       ;
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

    mem_dti_duzj0_ds        = zeros(nbT,nbT,nbP)       ;
    mem_dti_dm0j0_ds        = zeros(nbT,3,nbP)         ;
    mem_dti_dn0j0_ds        = zeros(nbT,3,nbP)         ;
    mem_dti_dtcj_ds         = zeros(nbT,nbT,nbP)       ;
    mem_dti_dbcj_ds         = zeros(nbT,nbT,nbP)       ;
    mem_dti_dtaus0_ds       = zeros(nbT,3,nbP,nbP)     ;
    mem_dti_dfs0_ds         = zeros(nbT,3,nbP,nbP)     ;


    % ====== Final initialization

    mem_dti_ds = MemDTiDS(mem_dti_duzj0_ds , mem_dti_dm0j0_ds , mem_dti_dn0j0_ds , ...
        mem_dti_dtcj_ds , mem_dti_dbcj_ds , mem_dti_dtaus0_ds , mem_dti_dfs0_ds) ;










    % ===================================================================== %
    % ============================== mem_dm0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dm0_duzj0           = zeros(3,nbT,nbP)       ;
    mem_dm0_dm0j0           = zeros(3,3,nbP)         ;
    mem_dm0_dn0j0           = zeros(3,3,nbP)         ;
    mem_dm0_dtcj            = zeros(3,nbT,nbP)       ;
    mem_dm0_dbcj            = zeros(3,nbT,nbP)       ;
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

    mem_dm0_duzj0_ds        = zeros(3,nbT,nbP)       ;
    mem_dm0_dm0j0_ds        = zeros(3,3,nbP)         ;
    mem_dm0_dn0j0_ds        = zeros(3,3,nbP)         ;
    mem_dm0_dtcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dm0_dbcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dm0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_dm0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_dm0_ds = MemDM0DS(mem_dm0_duzj0_ds , mem_dm0_dm0j0_ds , mem_dm0_dn0j0_ds , ...
        mem_dm0_dtcj_ds , mem_dm0_dbcj_ds , mem_dm0_dtaus0_ds , mem_dm0_dfs0_ds) ;









    % ===================================================================== %
    % ============================== mem_dn0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dn0_duzj0           = zeros(3,nbT,nbP)       ;
    mem_dn0_dm0j0           = zeros(3,3,nbP)         ;
    mem_dn0_dn0j0           = zeros(3,3,nbP)         ;
    mem_dn0_dtcj            = zeros(3,nbT,nbP)       ;
    mem_dn0_dbcj            = zeros(3,nbT,nbP)       ;
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

    mem_dn0_duzj0_ds        = zeros(3,nbT,nbP)       ;
    mem_dn0_dm0j0_ds        = zeros(3,3,nbP)         ;
    mem_dn0_dn0j0_ds        = zeros(3,3,nbP)         ;
    mem_dn0_dtcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dn0_dbcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dn0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_dn0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;


    % ====== Final initialization

    mem_dn0_ds = MemDN0DS(mem_dn0_duzj0_ds , mem_dn0_dm0j0_ds , mem_dn0_dn0j0_ds , ...
        mem_dn0_dtcj_ds , mem_dn0_dbcj_ds , mem_dn0_dtaus0_ds , mem_dn0_dfs0_ds) ;









    % ===================================================================== %
    % ============================== mem_du0 ============================== %
    % ===================================================================== %


    % ====== Zero initialization

    mem_du0_duzj0           = zeros(3,nbT,nbP)       ;
    mem_du0_dm0j0           = zeros(3,3,nbP)         ;
    mem_du0_dn0j0           = zeros(3,3,nbP)         ;
    mem_du0_dtcj            = zeros(3,nbT,nbP)       ;
    mem_du0_dbcj            = zeros(3,nbT,nbP)       ;
    mem_du0_dtaus0          = zeros(3,3,nbP,nbP)     ;
    mem_du0_dfs0            = zeros(3,3,nbP,nbP)     ;
    

    % ====== Final initialization

    mem_du0 = MemDU0(mem_du0_duzj0 , mem_du0_dm0j0 , mem_du0_dn0j0 , ...
        mem_du0_dtcj , mem_du0_dbcj , mem_du0_dtaus0 , mem_du0_dfs0) ;










    % ===================================================================== %
    % ============================== mem_dR0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dR0_duzj0           = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dm0j0           = zeros(3,3,3,nbP)         ;
    mem_dR0_dn0j0           = zeros(3,3,3,nbP)         ;
    mem_dR0_dtcj            = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dbcj            = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dtaus0          = zeros(3,3,3,nbP,nbP)     ;
    mem_dR0_dfs0            = zeros(3,3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_dR0 = MemDR0(mem_dR0_duzj0 , mem_dR0_dm0j0 , mem_dR0_dn0j0 , ...
        mem_dR0_dtcj , mem_dR0_dbcj , mem_dR0_dtaus0 , mem_dR0_dfs0) ;












    % ===================================================================== %
    % ============================ mem_dR0_ds ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dR0_duzj0_ds        = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dm0j0_ds        = zeros(3,3,3,nbP)         ;
    mem_dR0_dn0j0_ds        = zeros(3,3,3,nbP)         ;
    mem_dR0_dtcj_ds         = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dbcj_ds         = zeros(3,3,nbT,nbP)       ;
    mem_dR0_dtaus0_ds       = zeros(3,3,3,nbP,nbP)     ;
    mem_dR0_dfs0_ds         = zeros(3,3,3,nbP,nbP)     ;

    % ====== Final initialization
    
    mem_dR0_ds = MemDR0DS(mem_dR0_duzj0_ds , mem_dR0_dm0j0_ds , mem_dR0_dn0j0_ds , ...
        mem_dR0_dtcj_ds , mem_dR0_dbcj_ds , mem_dR0_dtaus0_ds , mem_dR0_dfs0_ds) ;



    % ===================================================================== %
    % ============================== mem_dP0 ============================== %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dP0_duzj0           = zeros(3,nbT,nbP)       ;
    mem_dP0_dm0j0           = zeros(3,3,nbP)         ;
    mem_dP0_dn0j0           = zeros(3,3,nbP)         ;
    mem_dP0_dtcj            = zeros(3,nbT,nbP)       ;
    mem_dP0_dbcj            = zeros(3,nbT,nbP)       ;
    mem_dP0_dtaus0          = zeros(3,3,nbP,nbP)     ;
    mem_dP0_dfs0            = zeros(3,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_dP0 = MemDP0(mem_dP0_duzj0 , mem_dP0_dm0j0 , mem_dP0_dn0j0 , ...
        mem_dP0_dtcj , mem_dP0_dbcj , mem_dP0_dtaus0 , mem_dP0_dfs0) ;





    % ===================================================================== %
    % ============================= mem_dP0_ds ============================ %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dP0_ds_duzj0        = zeros(3,nbT,nbP)       ;
    mem_dP0_ds_dm0j0        = zeros(3,3,nbP)         ;
    mem_dP0_ds_dn0j0        = zeros(3,3,nbP)         ;
    mem_dP0_dtcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dP0_dbcj_ds         = zeros(3,nbT,nbP)       ;
    mem_dP0_dtaus0_ds       = zeros(3,3,nbP,nbP)     ;
    mem_dP0_dfs0_ds         = zeros(3,3,nbP,nbP)     ;
   

    % ====== Final initialization

    mem_dP0_ds = MemDP0DS(mem_dP0_ds_duzj0 , mem_dP0_ds_dm0j0 , mem_dP0_ds_dn0j0 , ...
        mem_dP0_dtcj_ds , mem_dP0_dbcj_ds , mem_dP0_dtaus0_ds , mem_dP0_dfs0_ds) ;





    % ===================================================================== %
    % ============================= mem_dT0 ============================= %
    % ===================================================================== %

    % ====== Zero initialization

    mem_dT0_duzj0           = zeros(4,4,nbT,nbP)       ;
    mem_dT0_dm0j0           = zeros(4,4,3,nbP)         ;
    mem_dT0_dn0j0           = zeros(4,4,3,nbP)         ;
    mem_dT0_dtcj            = zeros(4,4,nbT,nbP)       ;
    mem_dT0_dbcj            = zeros(4,4,nbT,nbP)       ;
    mem_dT0_dtaus0          = zeros(4,4,3,nbP,nbP)     ;
    mem_dT0_dfs0            = zeros(4,4,3,nbP,nbP)     ;

    % ====== Final initialization

    mem_dT0 = MemDT0(mem_dT0_duzj0 , mem_dT0_dm0j0 , mem_dT0_dn0j0 , ...
        mem_dT0_dtcj , mem_dT0_dbcj , mem_dT0_dtaus0 , mem_dT0_dfs0) ;



    % ========================================================== %
    % ================== Setting output values ================= %

    mem_deriv_propag_low = MemDerivPropagLow( ...
        mem_du0 , mem_dm0 , mem_dm0_ds , mem_dn0 , mem_dn0_ds , ...
        mem_dti , mem_dti_ds , mem_duzi , mem_duzi_ds , ... 
        mem_dR0 , mem_dR0_ds , mem_dP0 , mem_dP0_ds , mem_dT0) ;

    % ========================================================== %
    % ========================================================== %








    % ===================================================================== %
    % ======================= mem_deriv_propag_high ======================= %

    mem_B                   = zeros(nbT+6 , 3*nbT+6)    ;
    mem_Bw0s0               = zeros(nbT+6 , 6 , nbP)    ;
    mem_E                   = zeros(6 , 3*nbT+12 , nbP) ;
    mem_Ew0s0               = zeros(6 , 6 , nbP , nbP)  ;
    mem_deriv_propag_high   = MemDerivPropagHigh(mem_B , mem_Bw0s0 , mem_E , mem_Ew0s0) ;






    % ===================================================================== %
    % =============================== mem_CJ ============================== %

    mem_Cs0     = zeros(6 , 6 , nbP , nbP) ;
    mem_J       = zeros(6 , 2*nbT , nbP) ;
    mem_CJ      = MemCJ(mem_Cs0 , mem_J) ;





    

    
    
end