%% Opération inverse de ^
function R3 = inv_hat6(skew)
    R3 = [skew(1,4) ; skew(2,4) ; skew(3,4) ; skew(3,2); skew(1,3); skew(2,1)] ;
end
