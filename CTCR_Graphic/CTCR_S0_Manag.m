function simulation_param = ...
         CTCR_S0_Manag(ctcr_construc,simulation_param)

% ======================================================================= %
% ======================================================================= %

% This function is used to prepare the s0 curvilinear abscissa 
% on which the generalized compliance matrix is going to be computed

% ====================
% ====== INPUTS ====== 

% ctcr_construc         : Robot features related to the model settings
% simulation_param      : Model settings

% ====================
% ===== OUTPUTS ====== 

% simulation_param      : Model settings

% ======================================================================= %
% ======================================================================= %

    simulation_param.pt_s0_LIT = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,ctcr_construc.nbP-ctcr_construc.ind_origin+1) ;
    
end