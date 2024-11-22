function duixydn0j0 = duixy_dn0j0(is,i,j,thetai,u0,mem_du0_dn0j0,mem_dti_dn0j0)

    temp = rotz(thetai)'*mem_du0_dn0j0(:,j,is) + (hat([0;0;1])*rotz(thetai)*mem_dti_dn0j0(i,j,is))'*u0 ;
    duixydn0j0 = temp(1:2) ;
    
end