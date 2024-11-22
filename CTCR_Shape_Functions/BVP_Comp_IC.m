function bvp_prop = BVP_Comp_IC(bvp_prop)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%

    % Regulate Jacobian
    try
        sigma = svd(bvp_prop.Bu) ; 
    catch exception
        disp(' ')
        disp('======================================================')
        disp(' ')
        disp('//!\\  SINGULAR JACOBIAN  //!\\')
        disp(' ')
        disp('======================================================')
        disp(' ')

        bvp_prop.IC_opt = 0.001*randn(length(bvp_prop.IC_opt),length(bvp_prop.IC_opt)) ;
    end

    % Verifying the Bu condition number  
    cond_th = 10^3 ;
    if sigma(1) / sigma(end) > cond_th
        bvp_prop.Bu = bvp_prop.Bu + 1/cond_th*sigma(end)*eye(length(bvp_prop.IC_opt),length(bvp_prop.IC_opt)) ;
    end

    % If BC norm is increasing, adapt scale and keep previous IC
    if bvp_prop.norm_tol > bvp_prop.norm_tol_prev

        % Reducing the opt scale
        bvp_prop.opt_scale = (bvp_prop.opt_scale - 1e-10)*0.9 + 1e-10 ;

        % Use previous IC
        bvp_prop.IC_opt = bvp_prop.IC_opt_prev ;

    % If BC norm is decreasing, save the good IC
    else

        % Update the IC for the next iteration if needed
        bvp_prop.IC_opt_prev = bvp_prop.IC_opt ;

        % Update IC
        bvp_prop.IC_opt = bvp_prop.IC_opt - bvp_prop.opt_scale * mldivide(bvp_prop.Bu , bvp_prop.vect_tol) ;

%         if bvp_prop.norm_tol_prev - bvp_prop.norm_tol < 10*bvp_prop.opt_scale
% 
%             % Increasing the opt scale
%             bvp_prop.opt_scale = (bvp_prop.opt_scale + 1e-10)*1.1 - 1e-10 ;
% 
% %             % Reducing the opt scale
% %             bvp_prop.opt_scale = (bvp_prop.opt_scale - 1e-10)*0.5 + 1e-10 ;
% 
%         end

%         % Increasing the opt scale
%         bvp_prop.opt_scale = (bvp_prop.opt_scale + 1e-10)*1.1 - 1e-10 ;

    end
    
    


    % Update the norm of BC for the next iteration
    bvp_prop.norm_tol_prev = bvp_prop.norm_tol ;
    
    
end


