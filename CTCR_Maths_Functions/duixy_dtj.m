function [duixydtj] = duixy_dtj(invsumKi,Kj,thetai,thetaj,ui_initj,u0,i,j)

    temp = delta_ij(i,j)*(hat([0,0,1])*rotz(thetai))'*u0 + rotz(thetai)'*du0_dtj(invsumKi,Kj,thetaj,ui_initj) ;
    duixydtj = temp(1:2,1) ;
    
end

