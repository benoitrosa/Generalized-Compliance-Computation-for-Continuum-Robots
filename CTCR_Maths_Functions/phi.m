function phi = phi(is,Rc,i,vect_ind_iT,ind_origin)

    first_change = max(ind_origin,vect_ind_iT(i,2)) ;
    last_change  = vect_ind_iT(i,3) ;

    phi = 0 ;

    if (first_change <= is) && (is <= last_change)
        phi = 1/Rc(i) ;
    end
    
end

