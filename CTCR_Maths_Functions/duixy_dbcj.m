function [duixydbcj] = duixy_dbcj(is,i,j,thetai,u0,mem_du0_dbcj,mem_dti_dbcj)
        
    temp = rotz(thetai)'*mem_du0_dbcj(:,j,is) + (hat([0;0;1])*rotz(thetai)*mem_dti_dbcj(i,j,is))'*u0 ;
    duixydbcj = temp(1:2,1) ;

end