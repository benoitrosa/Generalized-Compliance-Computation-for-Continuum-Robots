function [duixydm0j] = duixy_dm0j(invsumKi,thetai,j)
    
    temp = rotz(thetai)'*du0_dm0j(invsumKi,j) ;
    duixydm0j = temp(1:2) ;
   

end
