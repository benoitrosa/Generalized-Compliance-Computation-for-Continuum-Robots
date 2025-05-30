function [] = Plot_Comp_Deriv(numerateur              , derivateur , name     , ...
                              ctcr_construc           , ctcr_carac            , ...
                              mem_CJ                  , mem_deriv_propag_high , ...
                              mem_deriv_propag_low    , mem_FD_CJ             , mem_FD_deriv_propag_high , ...
                              mem_FD_deriv_propag_low , pt_s0_FD)

    [vect_select_quant , vect_select_deriv] = CTCR_3D_Comp_Manag(numerateur,derivateur) ;


    CTCR_3D_Graph_Comp( ...
        name                    ,  vect_select_quant    , ... 
        vect_select_deriv       , ctcr_construc         , ctcr_carac               , ...
        mem_CJ                  , mem_deriv_propag_high , ...
        mem_deriv_propag_low    , mem_FD_CJ             , mem_FD_deriv_propag_high , ...
        mem_FD_deriv_propag_low , pt_s0_FD) ;

end