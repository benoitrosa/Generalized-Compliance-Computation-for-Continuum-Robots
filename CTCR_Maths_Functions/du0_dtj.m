function [du0dtj] = du0_dtj(invsumKi,Kj,thetaj,ui_initj)

    temp = invsumKi*hat([0;0;1])*rotz(thetaj)*Kj*ui_initj ;
    
    du0dtj = [temp(1:2,1);0] ;
    
end

