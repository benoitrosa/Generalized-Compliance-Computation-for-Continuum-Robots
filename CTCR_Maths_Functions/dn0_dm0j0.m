function [dn0dm0j0] = dn0_dm0j0(invsumKi,j,memy,vect_res,is)

    int_n0 = zeros(3,1) ;

    for isbis = 1:is-1
        n0 = memy{isbis}{4} ;
        int_n0 = int_n0 + n0*vect_res(isbis) ;
    end

    dn0dm0j0 = hat(du0_dm0j0(invsumKi,j))*int_n0 ;

end