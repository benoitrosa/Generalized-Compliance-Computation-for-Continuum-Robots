function mem_CJ ...
         = Deriv_Propag_Comp_CJ(...
         tacr_construc , tacr_carac , simulation_param , bvp_prop , ...
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
% tacr_construc         : (class) Robot features related to the model settings
% tacr_carac            : (class) Robot features
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

    
   nbT             = tacr_carac.nbT ;    

   for is = 1:tacr_construc.nbP

        Eu      = mem_deriv_propag_high.mem_E(:,1:6,is) ;
        inv_Bu  = inv(bvp_prop.Bu) ;        
    
        if simulation_param.bool_J
    
            % ========================================================== %
            % =============== Joint jacobian computation =============== %
        
            Eq                   = mem_deriv_propag_high.mem_E(:,6+1:6+nbT,is) ;
            Bq                   = mem_deriv_propag_high.mem_B(:,6+1:6+nbT)    ;
        
            mem_CJ.mem_J(:,:,is) = Eq - Eu*inv_Bu*Bq ;
        
        end
    
    
    
        if simulation_param.bool_Cs0
    
            % ========================================================== %
            % =============== Compliance Cs0 computation =============== %

            Ews0        = mem_deriv_propag_high.mem_Ews0                            ;
            Bws0        = mem_deriv_propag_high.mem_Bws0                            ;
    
            for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
                is0 = simulation_param.pt_s0_LIT(tp_is0) ;
    
                mem_CJ.mem_Cs0(:,:,is,is0) = Ews0(:,:,is,is0) - Eu*inv_Bu*Bws0(:,:,is0) ;
    
            end
        end

   end

    
end