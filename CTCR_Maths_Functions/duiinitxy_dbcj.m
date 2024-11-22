function [duiinitxydbcj] = duiinitxy_dbcj(is,vect_res,Rc,i,j,theta_c,vect_ind_iT,ind_origin,nbT)
    
    duiinitxydbcj = zeros(2,1) ;
    
    if i == j
        temp = rotz(theta_c(i))*[dphi_dbcj(is,vect_res,Rc,i,j,vect_ind_iT,ind_origin,nbT);0;0] ;

        duiinitxydbcj = temp(1:2,1) ;
    end
    
end