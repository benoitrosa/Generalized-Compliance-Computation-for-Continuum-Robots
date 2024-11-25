function simulation_param = ...
         CTCR_S0_Manag( ...
         bool_complet_LIT,bool_pourc_LIT,bool_custom_LIT, ...
         bool_complet_FD,bool_pourc_FD,bool_custom_FD, ...
         index_s0_LIT,index_s0_FD, ...
         pourc_s0_LIT,pourc_s0_FD, ...
         ctcr_construc,simulation_param)

    % Points de calculs LIT des s0
    if bool_complet_LIT
        simulation_param.pt_s0_LIT = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,ctcr_construc.nbP-ctcr_construc.ind_origin+1) ;
    elseif bool_pourc_LIT
        simulation_param.pt_s0_LIT = floor(linspace(ctcr_construc.ind_origin,ctcr_construc.nbP,floor((ctcr_construc.nbP-ctcr_construc.ind_origin)/100*pourc_s0_LIT))) ;
    elseif bool_custom_LIT
        simulation_param.pt_s0_LIT = index_s0_LIT ;
    end
    
    % Points de calculs FD des s0
    simulation_param.pt_s0_FD = [] ;
    if bool_complet_FD
        simulation_param.pt_s0_FD = linspace(ctcr_construc.ind_origin,ctcr_construc.nbP-1,ctcr_construc.nbP-1-ctcr_construc.ind_origin+1) ;
    elseif bool_pourc_FD
        simulation_param.pt_s0_FD = floor(linspace(ctcr_construc.ind_origin,ctcr_construc.nbP-1,floor((ctcr_construc.nbP-1-ctcr_construc.ind_origin)/100*pourc_s0_FD))) ;
    elseif bool_custom_FD
        simulation_param.pt_s0_FD = index_s0_FD ;
    end

end