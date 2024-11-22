function [ctcr_carac,ctcr_act] =  CTCR_Shape_Random_Config(nbT)


    stiff       = 1*1e-2 +rand(1,nbT)*1e-2 ; %Python : env 1e-2 N.m2
    coeff_poiss = 0.3                   ;

    Rc          = zeros(1,nbT) ;
    Lc          = zeros(1,nbT) ;
    Lr          = zeros(1,nbT) ;
    beta_c      = zeros(1,nbT) ;
    theta_c     = zeros(1,nbT) ;

    for iT = 1:nbT
         Rc(iT)  = (5 + rand*20) ;

        if iT == 1
            Lc(iT)      = 1 + rand*50 ;
            Lr(iT)      = 1 + rand*50 ;
            beta_c(iT)  = 1 + rand*(Lc(iT)+Lr(iT)-1) ;
        else
            beta_c(iT)  = (10 + beta_c(iT-1) + rand*50) ;
            Lc(iT)      = 1 + rand*50 ;
            Lr(iT)      = Lc(iT-1)+Lr(iT-1)-Lc(iT) + 1+rand*50 ;
            
        end

        Lc(iT)          = (10 + rand*(L(iT) - 10)) ;
        theta_c(iT)     = rand*360 ;
    end
    

    ctcr_carac = CTCRCarac(nbT , stiff , coeff_poiss , Rc , L , Lc) ;
    ctcr_act = CTCRAct(beta_c , theta_c) ;

end