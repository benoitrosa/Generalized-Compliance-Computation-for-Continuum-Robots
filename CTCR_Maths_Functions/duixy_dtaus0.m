function [duixydtaus0] = duixy_dtaus0(ind,ind_is0,i,j,thetai,u0,mem_du0_dtaus0,mem_dti_dtaus0)
    
    temp = rotz(thetai)'*mem_du0_dtaus0(:,j,ind,ind_is0) + (hat([0;0;1])*rotz(thetai)*mem_dti_dtaus0(i,j,ind,ind_is0))'*u0 ;
    duixydtaus0 = temp(1:2) ;

end