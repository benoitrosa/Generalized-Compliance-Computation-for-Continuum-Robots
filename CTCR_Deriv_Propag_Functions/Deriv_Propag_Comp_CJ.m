function mem_CJ ...
         = Deriv_Propag_Comp_CJ(...
         bool_J , bool_Cs0 , is , ctcr_carac , simulation_param , bvp_prop , mem_CJ , mem_deriv_propag_high)


% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    

    % ========================================================== %
    % ========================================================== %


   
    
    Eu          = mem_deriv_propag_high.mem_E(:,1:nbT+6,is)      ;
%     Bu          = [ [bvp_prop.Bu(1:nbT,1:nbT),bvp_prop.Bu(1:nbT,nbT*(1+2*3)+1:nbT*(1+2*3)+6)] ; ...
%                     [bvp_prop.Bu(nbT*(1+2*3)+1:nbT*(1+2*3)+6,1:nbT),bvp_prop.Bu(nbT*(1+2*3)+1:nbT*(1+2*3)+6,nbT*(1+2*3)+1:nbT*(1+2*3)+6)] ] ;
    pinv_Bu     = pinv(bvp_prop.Bu,simulation_param.opt_tol) ;
    

    if bool_J

        % ========================================================== %
        % ============= Articular jacobian computation ============= %
    
        Eq                   = mem_deriv_propag_high.mem_E(:,nbT+7:3*nbT+6,is) ;
        Bq                   = mem_deriv_propag_high.mem_B(:,nbT+7:3*nbT+6)    ;
    
        mem_CJ.mem_J(:,:,is) = Eq - Eu*pinv_Bu*Bq ;
    
    end



    if bool_Cs0

        % ========================================================== %
        % =============== Compliance Cs0 computation =============== %

        Ews0        = mem_deriv_propag_high.mem_Ews0                            ;
        Bws0        = mem_deriv_propag_high.mem_Bws0                            ;

        for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
            is0 = simulation_param.pt_s0_LIT(tp_is0) ;

    
            mem_CJ.mem_Cs0(:,:,is,is0) = Ews0(:,:,is,is0) - Eu*pinv_Bu*Bws0(:,:,is0) ;

        end
    end


    
end