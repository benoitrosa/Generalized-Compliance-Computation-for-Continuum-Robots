function [duixyduzj0] = duixy_duzj0(is,i,j,thetai,u0,mem_du0_duzj0,mem_dti_duzj0)
    
    temp = rotz(thetai)'*mem_du0_duzj0(:,j,is) + (hat([0;0;1])*rotz(thetai)*mem_dti_duzj0(i,j,is))'*u0 ;
    duixyduzj0 = temp(1:2) ;

end