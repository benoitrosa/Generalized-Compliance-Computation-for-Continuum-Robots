function mem_CJ ...
         = Deriv_Propag_Comp_CJ(...
         ctcr_construc , ctcr_carac , simulation_param , bvp_prop , ...
         mem_CJ , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the Generalized Compliance Matrix and
% the Joint Jacobian using the High-Level derivatives Ex and Bx
% obtained thanks to the Low-Level derivatives computed by the Low-Level
% Derivative Propagation Method
%
% ====================
% ====== INPUTS ====== 
%
% ctcr_construc         : (class) Robot features related to the model settings
% ctcr_carac            : (class) Robot features
% simulation_param      : (class) Model settings
% bvp_prop              : (class) Results of the BVP resolution
% mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
%
% ======================================================================= %
% ======================================================================= %



    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    

    % ========================================================== %
    % ========================================================== %


   for is = ctcr_construc.ind_origin:ctcr_construc.nbP

        Eu          = mem_deriv_propag_high.mem_E(:,1:nbT+6,is)  ;
        pinv_Bu     = pinv(bvp_prop.Bu,simulation_param.opt_tol) ;
        
    
        if simulation_param.bool_J
    
            % ========================================================== %
            % =============== Joint jacobian computation =============== %
            % (eq 16)
        
            Eq                   = mem_deriv_propag_high.mem_E(:,nbT+7:3*nbT+6,is) ;
            Bq                   = mem_deriv_propag_high.mem_B(:,nbT+7:3*nbT+6)    ;
        
            mem_CJ.mem_J(:,:,is) = Eq - Eu*pinv_Bu*Bq ;
        
        end
    
    
    
        if simulation_param.bool_Cs0
    
            % ========================================================== %
            % =============== Compliance Cs0 computation =============== %
            % (eq 15)

            Ews0        = mem_deriv_propag_high.mem_Ews0                            ;
            Bws0        = mem_deriv_propag_high.mem_Bws0                            ;
    
            for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
                is0 = simulation_param.pt_s0_LIT(tp_is0) ;
    
                mem_CJ.mem_Cs0(:,:,is,is0) = Ews0(:,:,is,is0) - Eu*pinv_Bu*Bws0(:,:,is0) ;
    
            end
        end

   end

    
end