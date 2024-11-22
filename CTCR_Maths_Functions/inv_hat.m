

%% Opération inverse de ^
function R3 = inv_hat(skew)
    R3 = [skew(3,2); skew(1,3); skew(2,1)];
end

