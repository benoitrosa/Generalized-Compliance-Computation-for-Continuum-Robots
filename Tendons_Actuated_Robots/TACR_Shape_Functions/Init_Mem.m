function [mem_bvp , mem_deriv_propag_low , mem_deriv_propag_high , mem_CJ] ...
         = Init_Mem(...
         tacr_construc , tacr_carac)


% ======================================================================= %
% ======================================================================= %
%
% This function initializes the memories variables for the state vector and the partial derivatives 
%
% ====================
% ====== INPUTS ====== 
%
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
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
    
    nbT             = tacr_carac.nbT ;    
    nbP             = tacr_construc.nbP ;
    




    % ========================================================== %
    % ================= Initialization mem_bvp ================= %

    % y(s) memory initialization
    mem_u0          = zeros(3,nbP)      ;
    mem_v0          = zeros(3,nbP)      ;
    mem_R0          = zeros(3,3,nbP)    ;
    mem_p0          = zeros(3,nbP)      ;

    % ====== Non-zero initialization
    mem_R0(:,:,1)   = eye(3,3)          ;
    mem_p0(:,1)     = [0;0;0]           ;

    mem_y   = MemY(mem_u0 , mem_v0 , mem_R0 , mem_p0) ;

    % d_y_ds(s) memory initialization
    mem_u0s          = zeros(3,nbP)     ;
    mem_v0s          = zeros(3,nbP)     ;
    mem_R0s          = zeros(3,3,nbP)   ;
    mem_p0s          = zeros(3,nbP)     ;

    mem_ys  = MemYS(mem_u0s , mem_v0s , mem_R0s , mem_p0s) ;


    % Extra memories initialization
    mem_dpi_ds  = zeros(3,nbT,nbP)      ;
    mem_M       = zeros(6,6,nbP)        ;
    mem_inv_M   = zeros(6,6,nbP)        ;
    mem_d       = zeros(3,nbP)          ;
    mem_c       = zeros(3,nbP)          ;
    mem_m0      = zeros(3,nbP)          ;
    mem_n0      = zeros(3,nbP)          ;
    mem_T0      = zeros(4,4,nbP)        ;
    mem_Ai      = zeros(3,3,nbT,nbP)    ;

    % ====== Non-zero initialization
    mem_T0(:,:,1)    = [mem_R0(:,:,1) , mem_p0(:,1) ; [0,0,0,1]] ;

    % ========================================================== %
    % ================== Setting output values ================= %

    mem_bvp = MemBVP(mem_y , mem_ys , mem_dpi_ds , mem_M , mem_inv_M , ...
                     mem_d , mem_c , mem_m0 , mem_n0 , mem_T0 , mem_Ai) ;

    








    % ===================================================================== %
    % ======================== mem_deriv_propag_low ======================= %
    


    % ========================= %
    % ==== mem_du0

    mem_du0_dn0     = zeros(3,3,nbP)         ;
    mem_du0_dm0     = zeros(3,3,nbP)         ;
    mem_du0_dti     = zeros(3,nbT,nbP)       ;
    mem_du0_dtaus0  = zeros(3,3,nbP,nbP)     ;
    mem_du0_dfs0    = zeros(3,3,nbP,nbP)     ;
    
    mem_du0_dm0(:,:,1) = inv(tacr_carac.Kbt) ;
    
    mem_du0 = MemDU0(mem_du0_dn0    , mem_du0_dm0 , mem_du0_dti , ...
                     mem_du0_dtaus0 , mem_du0_dfs0) ;



    % ========================= %
    % ==== mem_du0_ds

    mem_du0_dn0_ds      = zeros(3,3,nbP)        ;
    mem_du0_dm0_ds      = zeros(3,3,nbP)        ;
    mem_du0_dti_ds      = zeros(3,nbT,nbP)      ;
    mem_du0_dtaus0_ds   = zeros(3,3,nbP,nbP)    ;
    mem_du0_dfs0_ds     = zeros(3,3,nbP,nbP)    ;
    
    mem_du0_ds = MemDU0DS(mem_du0_dn0_ds    , mem_du0_dm0_ds , mem_du0_dti_ds , ...
                          mem_du0_dtaus0_ds , mem_du0_dfs0_ds) ;




    
    % ========================= %
    % ==== mem_dv0

    mem_dv0_dn0     = zeros(3,3,nbP)         ;
    mem_dv0_dm0     = zeros(3,3,nbP)         ;
    mem_dv0_dti     = zeros(3,nbT,nbP)       ;
    mem_dv0_dtaus0  = zeros(3,3,nbP,nbP)     ;
    mem_dv0_dfs0    = zeros(3,3,nbP,nbP)     ;

    mem_dv0_dn0(:,:,1) = inv(tacr_carac.Kse) ;
    
    mem_dv0 = MemDV0(mem_dv0_dn0    , mem_dv0_dm0 , mem_dv0_dti , ...
                     mem_dv0_dtaus0 , mem_dv0_dfs0) ;



    % ========================= %
    % ==== mem_dv0_ds

    mem_dv0_dn0_ds      = zeros(3,3,nbP)        ;
    mem_dv0_dm0_ds      = zeros(3,3,nbP)        ;
    mem_dv0_dti_ds      = zeros(3,nbT,nbP)      ;
    mem_dv0_dtaus0_ds   = zeros(3,3,nbP,nbP)    ;
    mem_dv0_dfs0_ds     = zeros(3,3,nbP,nbP)    ;
    
    mem_dv0_ds = MemDV0DS(mem_dv0_dn0_ds    , mem_dv0_dm0_ds , mem_dv0_dti_ds , ...
                          mem_dv0_dtaus0_ds , mem_dv0_dfs0_ds) ;




    % ========================= %
    % ==== mem_dR0

    mem_dR0_dn0     = zeros(3,3,3,nbP)      ;
    mem_dR0_dm0     = zeros(3,3,3,nbP)      ;
    mem_dR0_dti     = zeros(3,3,nbT,nbP)    ;
    mem_dR0_dtaus0  = zeros(3,3,3,nbP,nbP)  ;
    mem_dR0_dfs0    = zeros(3,3,3,nbP,nbP)  ;
    
    mem_dR0 = MemDR0(mem_dR0_dn0 , mem_dR0_dm0 , mem_dR0_dti , ...
                     mem_dR0_dtaus0 , mem_dR0_dfs0) ;



    % ========================= %
    % ==== mem_dR0_ds

    mem_dR0_dn0_ds     = zeros(3,3,3,nbP)       ;
    mem_dR0_dm0_ds     = zeros(3,3,3,nbP)       ;
    mem_dR0_dti_ds     = zeros(3,3,nbT,nbP)     ;
    mem_dR0_dtaus0_ds  = zeros(3,3,3,nbP,nbP)   ;
    mem_dR0_dfs0_ds    = zeros(3,3,3,nbP,nbP)   ;
    
    mem_dR0_ds = MemDR0DS(mem_dR0_dn0_ds , mem_dR0_dm0_ds , mem_dR0_dti_ds , ...
                          mem_dR0_dtaus0_ds , mem_dR0_dfs0_ds) ;



    % ========================= %
    % ==== mem_dp0

    mem_dp0_dn0     = zeros(3,3,nbP)        ;
    mem_dp0_dm0     = zeros(3,3,nbP)        ;
    mem_dp0_dti     = zeros(3,nbT,nbP)      ;
    mem_dp0_dtaus0  = zeros(3,3,nbP,nbP)    ;
    mem_dp0_dfs0    = zeros(3,3,nbP,nbP)    ;
    
    mem_dp0 = MemDP0(mem_dp0_dn0    , mem_dp0_dm0 , mem_dp0_dti , ...
                     mem_dp0_dtaus0 , mem_dp0_dfs0) ;




    % ========================= %
    % ==== mem_dp0_ds

    mem_dp0_dn0_ds     = zeros(3,3,nbP)         ;
    mem_dp0_dm0_ds     = zeros(3,3,nbP)         ;
    mem_dp0_dti_ds     = zeros(3,nbT,nbP)       ;
    mem_dp0_dtaus0_ds  = zeros(3,3,nbP,nbP)     ;
    mem_dp0_dfs0_ds    = zeros(3,3,nbP,nbP)     ;
    
    mem_dp0_ds = MemDP0DS(mem_dp0_dn0_ds , mem_dp0_dm0_ds , mem_dp0_dti_ds , ...
                          mem_dp0_dtaus0_ds , mem_dp0_dfs0_ds) ;




    % ========================= %
    % ==== mem_dm0

    mem_dm0_dn0     = zeros(3,3,nbP)        ;
    mem_dm0_dm0     = zeros(3,3,nbP)        ;
    mem_dm0_dti     = zeros(3,nbT,nbP)      ;
    mem_dm0_dtaus0  = zeros(3,3,nbP,nbP)    ;
    mem_dm0_dfs0    = zeros(3,3,nbP,nbP)    ;
    
    %mem_dm0_dm0(:,:,1)  = eye(3,3)  ;

    mem_dm0 = MemDM0(mem_dm0_dn0    , mem_dm0_dm0 , mem_dm0_dti , ...
                     mem_dm0_dtaus0 , mem_dm0_dfs0) ;



    % ========================= %
    % ==== mem_dn0

    mem_dn0_dn0     = zeros(3,3,nbP)        ;
    mem_dn0_dm0     = zeros(3,3,nbP)        ;
    mem_dn0_dti     = zeros(3,nbT,nbP)      ;
    mem_dn0_dtaus0  = zeros(3,3,nbP,nbP)    ;
    mem_dn0_dfs0    = zeros(3,3,nbP,nbP)    ;
    
    mem_dn0 = MemDN0(mem_dn0_dn0    , mem_dn0_dm0 , mem_dn0_dti , ...
                     mem_dn0_dtaus0 , mem_dn0_dfs0) ;




    % ========================= %
    % ==== mem_dT0

    mem_dT0_dn0     = zeros(4,4,3,nbP)      ;
    mem_dT0_dm0     = zeros(4,4,3,nbP)      ;
    mem_dT0_dti     = zeros(4,4,nbT,nbP)    ;
    mem_dT0_dtaus0  = zeros(4,4,3,nbP,nbP)  ;
    mem_dT0_dfs0    = zeros(4,4,3,nbP,nbP)  ;
    
    mem_dT0 = MemDT0(mem_dT0_dn0    , mem_dT0_dm0 , mem_dT0_dti , ...
                     mem_dT0_dtaus0 , mem_dT0_dfs0) ;


    % ========================= %
    % ==== mem_dM

    mem_dM_dn0     = zeros(6,6,3,nbP)      ;
    mem_dM_dm0     = zeros(6,6,3,nbP)      ;
    mem_dM_dti     = zeros(6,6,nbT,nbP)    ;
    mem_dM_dtaus0  = zeros(6,6,3,nbP,nbP)  ;
    mem_dM_dfs0    = zeros(6,6,3,nbP,nbP)  ;
    
    mem_dM = MemDM(mem_dM_dn0    , mem_dM_dm0 , mem_dM_dti , ...
                   mem_dM_dtaus0 , mem_dM_dfs0) ;


    % ========================= %
    % ==== mem_dinvM

    mem_dinv_M_dn0     = zeros(6,6,3,nbP)      ;
    mem_dinv_M_dm0     = zeros(6,6,3,nbP)      ;
    mem_dinv_M_dti     = zeros(6,6,nbT,nbP)    ;
    mem_dinv_M_dtaus0  = zeros(6,6,3,nbP,nbP)  ;
    mem_dinv_M_dfs0    = zeros(6,6,3,nbP,nbP)  ;
    
    mem_dinv_M = MemDinvM(mem_dinv_M_dn0    , mem_dinv_M_dm0 , mem_dinv_M_dti , ...
                   mem_dinv_M_dtaus0 , mem_dinv_M_dfs0) ;



    % ========================= %
    % ==== mem_dc

    mem_dc_dn0     = zeros(3,3,nbP)        ;
    mem_dc_dm0     = zeros(3,3,nbP)        ;
    mem_dc_dti     = zeros(3,nbT,nbP)      ;
    mem_dc_dtaus0  = zeros(3,3,nbP,nbP)    ;
    mem_dc_dfs0    = zeros(3,3,nbP,nbP)    ;
    
    mem_dc = MemDC(mem_dc_dn0    , mem_dc_dm0 , mem_dc_dti , ...
                     mem_dc_dtaus0 , mem_dc_dfs0) ;




    % ========================= %
    % ==== mem_dd

    mem_dd_dn0     = zeros(3,3,nbP)        ;
    mem_dd_dm0     = zeros(3,3,nbP)        ;
    mem_dd_dti     = zeros(3,nbT,nbP)      ;
    mem_dd_dtaus0  = zeros(3,3,nbP,nbP)    ;
    mem_dd_dfs0    = zeros(3,3,nbP,nbP)    ;
    
    mem_dd = MemDD(mem_dd_dn0    , mem_dd_dm0 , mem_dd_dti , ...
                   mem_dd_dtaus0 , mem_dd_dfs0) ;




    % ========================= %
    % ==== mem_dpi_ds

    mem_ddpi_dn0_ds     = zeros(3,nbT,3,nbP)        ;
    mem_ddpi_dm0_ds     = zeros(3,nbT,3,nbP)        ;
    mem_ddpi_dti_ds     = zeros(3,nbT,nbT,nbP)      ;
    mem_ddpi_dtaus0_ds  = zeros(3,nbT,3,nbP,nbP)    ;
    mem_ddpi_dfs0_ds    = zeros(3,nbT,3,nbP,nbP)    ;
    
    mem_ddpi_ds = MemDDPIDS(mem_ddpi_dn0_ds    , mem_ddpi_dm0_ds , mem_ddpi_dti_ds , ...
                            mem_ddpi_dtaus0_ds , mem_ddpi_dfs0_ds) ;



    % ========================= %
    % ==== mem_dAi

    mem_dAi_dn0     = zeros(3,3,nbT,3,nbP)      ;
    mem_dAi_dm0     = zeros(3,3,nbT,3,nbP)      ;
    mem_dAi_dti     = zeros(3,3,nbT,nbT,nbP)    ;
    mem_dAi_dtaus0  = zeros(3,3,nbT,3,nbP,nbP)  ;
    mem_dAi_dfs0    = zeros(3,3,nbT,3,nbP,nbP)  ;
    
    mem_dAi = MemDAi(mem_dAi_dn0    , mem_dAi_dm0 , mem_dAi_dti , ...
                     mem_dAi_dtaus0 , mem_dAi_dfs0) ;





    

    % ========================================================== %
    % ================== Setting output values ================= %

    mem_deriv_propag_low = MemDerivPropagLow( ...
            mem_du0     , mem_du0_ds , mem_dv0 , mem_dv0_ds , ...
            mem_dR0     , mem_dR0_ds , mem_dp0 , mem_dp0_ds , ...
            mem_dm0     , mem_dn0    , mem_dT0 , ...
            mem_dc      , mem_dd     , mem_dM  , mem_dinv_M , ...
            mem_ddpi_ds , mem_dAi) ;

    % ========================================================== %
    % ========================================================== %








    % ===================================================================== %
    % ======================= mem_deriv_propag_high ======================= %

    mem_B                   = zeros(6 , 6+nbT)          ;
    mem_Bw0s0               = zeros(6 , 6 , nbP)        ;
    mem_E                   = zeros(6 , 6+nbT , nbP)    ;
    mem_Ew0s0               = zeros(6 , 6 , nbP , nbP)  ;
    mem_deriv_propag_high   = MemDerivPropagHigh(mem_B , mem_Bw0s0 , mem_E , mem_Ew0s0) ;






    % ===================================================================== %
    % =============================== mem_CJ ============================== %

    mem_Cs0     = zeros(6 , 6 , nbP , nbP)  ;
    mem_J       = zeros(6 , nbT , nbP)      ;
    mem_CJ      = MemCJ(mem_Cs0 , mem_J)    ;





    

    
    
end