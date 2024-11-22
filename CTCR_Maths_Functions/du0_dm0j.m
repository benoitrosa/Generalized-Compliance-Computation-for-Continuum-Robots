function [du0dm0j] = du0_dm0j(invsumKi,j)
    
    temp = invsumKi*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)] ;
    du0dm0j = [temp(1:2);0] ;
    
end

