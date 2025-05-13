function [mem_FD_duzi , mem_FD_dti , mem_FD_dm0 , mem_FD_dn0 , ...
          mem_FD_du0 , mem_FD_d00Rs , mem_FD_d00ps , mem_FD_B] ...
          = FD_Deriv_Propag_Low(...
          select_DF , epsJ , vect_iJ , simulation_param , ...
          ctcr_construc , ctcr_carac , ctcr_act , ctcr_load , bvp_prop)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT     = ctcr_carac.nbT ;   
    nbP     = ctcr_construc.nbP ;

    % ========================================================== %
    % ========================================================== %


    x = [bvp_prop.IC_opt ; ctcr_act.theta_c' ; ctcr_act.beta_c'] ;
    
    % ======== Save the initial properties ======== %
    ctcr_construc_init  = ctcr_construc ;
    ctcr_act_init       = ctcr_act ;
    bvp_prop_init       = bvp_prop ;

    mem_FD_duzi         = zeros(nbT,3*nbT+6,nbP) ;
    mem_FD_dti          = zeros(nbT,3*nbT+6,nbP) ;
    mem_FD_du0          = zeros(3,3*nbT+6,nbP)   ;
    mem_FD_dm0          = zeros(3,3*nbT+6,nbP)   ;
    mem_FD_dn0          = zeros(3,3*nbT+6,nbP)   ;
    mem_FD_d00Rs        = zeros(3,3,3*nbT+6,nbP) ;
    mem_FD_d00ps        = zeros(3,3*nbT+6,nbP)   ;
    mem_FD_B            = zeros(nbT+6,3*nbT+6)   ;
    
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
    tuned_eps       = 0 ;
    

    % For loop to consider every derivatives of C : tau(L0) and f(L0)
    for icol = 1:3*nbT+6

        % For loop the selected vibrations : + / - / 0 
        for iJ_tp = 1:length(vect_iJ)
            iJ = vect_iJ(iJ_tp) ;

            % ====== /!\ Special case for beta_c for which the only /!\ ====== %
            % ================== vibration applied is on Lc ================== %
    
            if 2*nbT+7 <= icol

                if strcmp(select_DF,'pn')
                    tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)) ;
                elseif strcmp(select_DF,'pm')
                    tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)) ...
                                + ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)-1) ;
                else  %strcmp(select_DF,'nm')
                    tuned_eps = ctcr_construc_init.vect_res(ctcr_construc_init.vect_ind_iT(icol-(2*nbT+7)+1,1)-1) ;
                end

            else
                tuned_eps = epsJ ;
            end
    
            % ================================================================ %
            % ================================================================ %
            
            
            % Adding the vibration only on the current derivative
            x_plus = x ;
            x_minus = x ;
            x_plus(icol) = x(icol) + tuned_eps ;
            x_minus(icol) = x(icol) - tuned_eps ;
    


            if iJ == 1
                x_perturb = x_plus ;
            elseif iJ == 2
                x_perturb = x ;
            else % iJ == 3
                x_perturb = x_minus ;
            end

            bvp_prop.IC_opt   = x_perturb(1:nbT+6)         ;
            ctcr_act.theta_c  = x_perturb(nbT+7:2*nbT+6)'  ;
            ctcr_act.beta_c   = x_perturb(2*nbT+7:end)'    ;
    
            % BVP memories initialization
            [mem_bvp , mem_deriv_propag_low] = Init_Mem(ctcr_construc , ctcr_carac , bvp_prop) ;


            % ====== /!\ Special case for beta_c for which the only /!\ ====== %
            % ================== vibration applied is on Lc ================== %
            
            if 2*nbT+7 <= icol
    
                % Construction of the CTCR
                ctcr_construc = FD_Deriv_Propag_CTCR_Construc_Betac(ctcr_construc , ctcr_carac , ctcr_act , iJ , icol-(2*nbT+6)) ;
                
            else

                % Construction of the CTCR
                ctcr_construc = CTCR_Construc(simulation_param , ctcr_carac , ctcr_act , ctcr_load) ;
    
            end
   


            % ================================================================ %
            % ================================================================ %

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
            ctcr_act            = ctcr_act_init ;
            bvp_prop            = bvp_prop_init ;
    
        end

        for is = 1:ctcr_construc.nbP

            if strcmp(select_DF,'pm')

                mem_FD_dti(:,icol,is)       = (memy_plus(1:nbT,is)              -   memy_minus(1:nbT,is))               /(2*tuned_eps) ;
                mem_FD_duzi(:,icol,is)      = (memy_plus(nbT+1:2*nbT,is)        -   memy_minus(nbT+1:2*nbT,is))         /(2*tuned_eps) ;
                mem_FD_dm0(:,icol,is)       = (memy_plus(2*nbT+1:2*nbT+3,is)    -   memy_minus(2*nbT+1:2*nbT+3,is))     /(2*tuned_eps) ;
                mem_FD_dn0(:,icol,is)       = (memy_plus(2*nbT+4:2*nbT+6,is)    -   memy_minus(2*nbT+4:2*nbT+6,is))     /(2*tuned_eps) ;
                mem_FD_du0(:,icol,is)       = (memu0_plus(:,is)                 -   memu0_minus(:,is))                  /(2*tuned_eps) ;
                mem_FD_d00Rs(:,:,icol,is)   = (memT_plus(1:3,1:3,is)            -   memT_minus(1:3,1:3,is))             /(2*tuned_eps) ;
                mem_FD_d00ps(:,icol,is)     = (memT_plus(1:3,4,is)              -   memT_minus(1:3,4,is))               /(2*tuned_eps) ;
                mem_FD_B(:,icol)            = (BC_plus                          -   BC_minus)                           /(2*tuned_eps) ;

            elseif strcmp(select_DF,'pn')

                mem_FD_dti(:,icol,is)       = (memy_plus(1:nbT,is)              -   memy_normal(1:nbT,is))              /tuned_eps ;
                mem_FD_duzi(:,icol,is)      = (memy_plus(nbT+1:2*nbT,is)        -   memy_normal(nbT+1:2*nbT,is))        /tuned_eps ;
                mem_FD_dm0(:,icol,is)       = (memy_plus(2*nbT+1:2*nbT+3,is)    -   memy_normal(2*nbT+1:2*nbT+3,is))    /tuned_eps ;
                mem_FD_dn0(:,icol,is)       = (memy_plus(2*nbT+4:2*nbT+6,is)    -   memy_normal(2*nbT+4:2*nbT+6,is))    /tuned_eps ;
                mem_FD_du0(:,icol,is)       = (memu0_plus(:,is)                 -   memu0_normal(:,is))                 /tuned_eps ;
                mem_FD_d00Rs(:,:,icol,is)   = (memT_plus(1:3,1:3,is)            -   memT_normal(1:3,1:3,is))            /tuned_eps ;
                mem_FD_d00ps(:,icol,is)     = (memT_plus(1:3,4,is)              -   memT_normal(1:3,4,is))              /tuned_eps ;
                mem_FD_B(:,icol)            = (BC_plus                          -   BC_normal)                          /tuned_eps ;

            else % strcmp(select_DF,'nm')
        
                mem_FD_dti(:,icol,is)       = (memy_normal(1:nbT,is)            -   memy_minus(1:nbT,is))               /tuned_eps ;
                mem_FD_duzi(:,icol,is)      = (memy_normal(nbT+1:2*nbT,is)      -   memy_minus(nbT+1:2*nbT,is))         /tuned_eps ;
                mem_FD_dm0(:,icol,is)       = (memy_normal(2*nbT+1:2*nbT+3,is)  -   memy_minus(2*nbT+1:2*nbT+3,is))     /tuned_eps ;
                mem_FD_dn0(:,icol,is)       = (memy_normal(2*nbT+4:2*nbT+6,is)  -   memy_minus(2*nbT+4:2*nbT+6,is))     /tuned_eps ;
                mem_FD_du0(:,icol,is)       = (memu0_normal(:,is)               -   memu0_minus(:,is))                  /tuned_eps ;
                mem_FD_d00Rs(:,:,icol,is)   = (memT_normal(1:3,1:3,is)          -   memT_minus(1:3,1:3,is))             /tuned_eps ;
                mem_FD_d00ps(:,icol,is)     = (memT_normal(1:3,4,is)            -   memT_minus(1:3,4,is))               /tuned_eps ;
                mem_FD_B(:,icol)            = (BC_normal                        -   BC_minus)                           /tuned_eps ;

            end

        end

    end

end