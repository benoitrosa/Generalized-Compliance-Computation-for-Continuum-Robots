function duixydtcj = duixy_dtcj(is,i,j,thetai,u0,mem_du0_dtcj,mem_dti_dtcj)

    temp = rotz(thetai)'*mem_du0_dtcj(:,j,is) + (hat([0;0;1])*rotz(thetai)*mem_dti_dtcj(i,j,is))'*u0 ;
    duixydtcj = temp(1:2,1) ;

end