function [du0dm0] = du0_dm0(invsumKi)
    
    du0dm0 = [invsumKi(1:2,:);zeros(1,3)] ;
    
end