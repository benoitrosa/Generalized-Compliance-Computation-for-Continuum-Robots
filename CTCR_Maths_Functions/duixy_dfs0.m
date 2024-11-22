function [duixydfs0] = duixy_dfs0(ind,ind_is0,i,j,thetai,u0,mem_du0_dfs0,mem_dti_dfs0)
    
    temp = rotz(thetai)'*mem_du0_dfs0(:,j,ind,ind_is0) + (hat([0;0;1])*rotz(thetai)*mem_dti_dfs0(i,j,ind,ind_is0))'*u0 ;
    duixydfs0 = temp(1:2) ;

end