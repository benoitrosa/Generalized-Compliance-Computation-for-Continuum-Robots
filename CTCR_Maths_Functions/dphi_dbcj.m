function dphidbcj = dphi_dbcj(is,vect_res,Rc,i,j,vect_ind_iT,ind_origin,nbT)

    first_change = max(ind_origin,vect_ind_iT(i,2)) ;
    last_change  = vect_ind_iT(i,3) ;

    dphidbcj = 0 ;

    if (i == j) && (is == first_change) && (vect_ind_iT(i,2) >= ind_origin)
        dphidbcj = -1/(Rc(i)*vect_res(is)) ;
    elseif (i == j) && ~(i == nbT) && (is == last_change)
        dphidbcj = 1/(Rc(i)*vect_res(is)) ;
    end 

end



