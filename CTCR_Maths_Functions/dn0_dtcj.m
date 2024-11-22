function [dn0dtcj] = dn0_dtcj(j,is,memy,memvectT,memu0,memv0,memuixy,ui_init,K,vect_z_is,R_C,theta_c, beta_c, Lc, L, vect_ind_iT, ind_origin, vect_res)

    dn0dtcj = zeros(3,1) ;

    % Contrainte d'existence des ui_init
    for isbis = vect_ind_iT(j,1):is-1
        [~ , u0 , v0 , uinit , uixy , theta , m0 , n0 , invsumKi] = Calcul_preli(isbis,memy,memvectT,memu0,memv0,memuixy,ui_init,K) ;
        
        du0tildedtcj = du0tilde_dtcj(invsumKi, theta(j), K(:,:,j), uinit{j}, isbis, vect_z_is, R_C, j, theta_c, beta_c, Lc, L, vect_ind_iT, ind_origin) ;

        dn0dtcj = dn0dtcj + (-hat(du0tildedtcj)*n0)*vect_res(isbis) ;

    end

end