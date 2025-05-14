function [mem_FD_duzi  , mem_FD_dti   , mem_FD_dm0 , mem_FD_dn0 , mem_FD_du0 ,...
          mem_FD_dR0 , mem_FD_dP0 , mem_FD_dB] ...
          = FD_Deriv_Propag_Low_dws0(...
          select_DF , epsJ , vect_iJ , simulation_param , ctcr_construc , ...
          ctcr_carac , ctcr_load , bvp_prop , pt_s0_FD)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT        ; 
    nbP             = ctcr_construc.nbP     ;
    

    % ========================================================== %
    % ===================== Initialization ===================== %

    mem_FD_duzi     = zeros(nbT,6,nbP,nbP)  ;
    mem_FD_dti      = zeros(nbT,6,nbP,nbP)  ;
    mem_FD_dm0      = zeros(3,6,nbP,nbP)    ;
    mem_FD_dn0      = zeros(3,6,nbP,nbP)    ;
    mem_FD_du0      = zeros(3,6,nbP,nbP)    ;
    mem_FD_dR0      = zeros(3,3,6,nbP,nbP)  ;
    mem_FD_dP0      = zeros(3,6,nbP,nbP)    ;
    mem_FD_dB       = zeros(nbT+6,6,nbP)    ;
    
    memy_plus       = zeros(2*nbT+12,nbP)   ;
    memy_normal     = zeros(2*nbT+12,nbP)   ;
    memy_minus      = zeros(2*nbT+12,nbP)   ;
    memu0_plus      = zeros(3,nbP)          ;
    memu0_normal    = zeros(3,nbP)          ;
    memu0_minus     = zeros(3,nbP)          ;
    memT_plus       = zeros(4,4,nbP)        ;
    memT_normal     = zeros(4,4,nbP)        ;
    memT_minus      = zeros(4,4,nbP)        ;
    BC_plus         = zeros(nbT+6,1)        ;
    BC_normal       = zeros(nbT+6,1)        ;
    BC_minus        = zeros(nbT+6,1)        ;


    % ========================================================== %
    % ================= Save the initial values ================ %
    
    ctcr_construc_init  = ctcr_construc ;
    ctcr_load_init      = ctcr_load ;
    
    
    for tp_is0 = 1:length(pt_s0_FD)
        is0 = pt_s0_FD(tp_is0) ;
        
        x = zeros(6,1) ;

        % For loop to consider every derivatives of C : tau(s0) and f(s0)
        for icol = 1:6
        
            tuned_eps = epsJ  ;
            
            % Adding the vibration only on the current derivative
            x_plus              = x ;
            x_minus             = x ;
            x_plus(icol,1)      = x(icol,1) + tuned_eps ;
            x_minus(icol,1)     = x(icol,1) - tuned_eps ;
        
            % For loop the selected vibrations : + / - / 0 
            for iJ_tp = 1:length(vect_iJ)
                iJ = vect_iJ(iJ_tp) ;
    
                if iJ == 1
                    x_perturb = x_plus ;
                elseif iJ == 2
                    x_perturb = x ;
                else % iJ == 3
                    x_perturb = x_minus ;
                end                
                
                if ~(is0 == ctcr_construc.vect_ind_iT(nbT,3))
                    ctcr_construc.vect_tau_dist(:,is0)  = ctcr_construc.vect_tau_dist(:,is0) + x_perturb(1:3,1)/ctcr_construc.vect_res(is0) ; 
                    ctcr_construc.vect_f_dist(:,is0)    = ctcr_construc.vect_f_dist(:,is0)   + x_perturb(4:6,1)/ctcr_construc.vect_res(is0) ;
                else
                    ctcr_load.tau_tip = ctcr_load.tau_tip + x_perturb(1:3,1)' ;
                    ctcr_load.f_tip   = ctcr_load.f_tip   + x_perturb(4:6,1)' ;
                end
        
                % BVP memories initialization
                [mem_bvp , mem_deriv_propag_low] = Init_Mem(ctcr_construc , ctcr_carac , bvp_prop) ;
    
                % Integration of IC in BVP memories
                mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;
            
                % IVP integration
                [mem_bvp , ~] = IVP_Int(ctcr_construc , ctcr_carac , mem_bvp , mem_deriv_propag_low , simulation_param.bool_opt_lit) ;
              
                % Distal boundaries conditions comparaison expected / calculated from IC
                bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load) ;
                
    
                % Memorizing the values depending on the DF vibration
                if iJ == 1
                    [~ , BC_plus , memy_plus , ~ , memT_plus , memu0_plus] ...
                    = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
                elseif iJ == 2
                    [~ , BC_normal , memy_normal , ~ , memT_normal , memu0_normal] ...
                    = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
                else % iJ == 3
                    [~ , BC_minus , memy_minus , ~ , memT_minus , memu0_minus] ...
                    = FD_Deriv_Propag_Extrac_Values(ctcr_carac , ctcr_construc , bvp_prop , mem_bvp) ;
                end

                % Updating with the original value without any derivative vibration
                ctcr_construc       = ctcr_construc_init ;
                ctcr_load           = ctcr_load_init ;
        
            end
    
            for is0_2 = 1:ctcr_construc.vect_ind_iT(nbT,3)
    
                if strcmp(select_DF,'pm')
    
                    mem_FD_dti(:,icol,is0_2,is0)       = (memy_plus(1:nbT,is0_2)              -   memy_minus(1:nbT,is0_2))               /(2*tuned_eps) ;
                    mem_FD_duzi(:,icol,is0_2,is0)      = (memy_plus(nbT+1:2*nbT,is0_2)        -   memy_minus(nbT+1:2*nbT,is0_2))         /(2*tuned_eps) ;
                    mem_FD_dm0(:,icol,is0_2,is0)       = (memy_plus(2*nbT+1:2*nbT+3,is0_2)    -   memy_minus(2*nbT+1:2*nbT+3,is0_2))     /(2*tuned_eps) ;
                    mem_FD_dn0(:,icol,is0_2,is0)       = (memy_plus(2*nbT+4:2*nbT+6,is0_2)    -   memy_minus(2*nbT+4:2*nbT+6,is0_2))     /(2*tuned_eps) ;
                    mem_FD_du0(:,icol,is0_2,is0)       = (memu0_plus(:,is0_2)                 -   memu0_minus(:,is0_2))                  /(2*tuned_eps) ;
                    mem_FD_dR0(:,:,icol,is0_2,is0)     = (memT_plus(1:3,1:3,is0_2)            -   memT_minus(1:3,1:3,is0_2))             /(2*tuned_eps) ;
                    mem_FD_dP0(:,icol,is0_2,is0)       = (memT_plus(1:3,4,is0_2)              -   memT_minus(1:3,4,is0_2))               /(2*tuned_eps) ;
                    mem_FD_dB(:,icol,is0)              = (BC_plus                             -   BC_minus)                              /(2*tuned_eps) ;

                elseif strcmp(select_DF,'pn')
    
                    mem_FD_dti(:,icol,is0_2,is0)       = (memy_plus(1:nbT,is0_2)              -   memy_normal(1:nbT,is0_2))              /tuned_eps ;
                    mem_FD_duzi(:,icol,is0_2,is0)      = (memy_plus(nbT+1:2*nbT,is0_2)        -   memy_normal(nbT+1:2*nbT,is0_2))        /tuned_eps ;
                    mem_FD_dm0(:,icol,is0_2,is0)       = (memy_plus(2*nbT+1:2*nbT+3,is0_2)    -   memy_normal(2*nbT+1:2*nbT+3,is0_2))    /tuned_eps ;
                    mem_FD_dn0(:,icol,is0_2,is0)       = (memy_plus(2*nbT+4:2*nbT+6,is0_2)    -   memy_normal(2*nbT+4:2*nbT+6,is0_2))    /tuned_eps ;
                    mem_FD_du0(:,icol,is0_2,is0)       = (memu0_plus(:,is0_2)                 -   memu0_normal(:,is0_2))                 /tuned_eps ;
                    mem_FD_dR0(:,:,icol,is0_2,is0)     = (memT_plus(1:3,1:3,is0_2)            -   memT_normal(1:3,1:3,is0_2))            /tuned_eps ;
                    mem_FD_dP0(:,icol,is0_2,is0)       = (memT_plus(1:3,4,is0_2)              -   memT_normal(1:3,4,is0_2))              /tuned_eps ;
                    mem_FD_dB(:,icol,is0)              = (BC_plus                             -   BC_normal)                             /tuned_eps ;

                else % strcmp(select_DF,'nm')
            
                    mem_FD_dti(:,icol,is0_2,is0)       = (memy_normal(1:nbT,is0_2)            -   memy_minus(1:nbT,is0_2))               /tuned_eps ;
                    mem_FD_duzi(:,icol,is0_2,is0)      = (memy_normal(nbT+1:2*nbT,is0_2)      -   memy_minus(nbT+1:2*nbT,is0_2))         /tuned_eps ;
                    mem_FD_dm0(:,icol,is0_2,is0)       = (memy_normal(2*nbT+1:2*nbT+3,is0_2)  -   memy_minus(2*nbT+1:2*nbT+3,is0_2))     /tuned_eps ;
                    mem_FD_dn0(:,icol,is0_2,is0)       = (memy_normal(2*nbT+4:2*nbT+6,is0_2)  -   memy_minus(2*nbT+4:2*nbT+6,is0_2))     /tuned_eps ;
                    mem_FD_du0(:,icol,is0_2,is0)       = (memu0_normal(:,is0_2)               -   memu0_minus(:,is0_2))                  /tuned_eps ;
                    mem_FD_dR0(:,:,icol,is0_2,is0)     = (memT_normal(1:3,1:3,is0_2)          -   memT_minus(1:3,1:3,is0_2))             /tuned_eps ;
                    mem_FD_dP0(:,icol,is0_2,is0)       = (memT_normal(1:3,4,is0_2)            -   memT_minus(1:3,4,is0_2))               /tuned_eps ;
                    mem_FD_dB(:,icol,is0)              = (BC_normal                           -   BC_minus)                              /tuned_eps ;

                end
    
            end

        end

    end

end