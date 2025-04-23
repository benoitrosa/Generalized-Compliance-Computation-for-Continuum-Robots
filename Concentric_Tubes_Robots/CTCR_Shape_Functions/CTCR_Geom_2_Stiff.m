function stiff = CTCR_Geom_2_Stiff(nbT,E,R,r)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the tubes transversal bending stiffness
% of the based on the geometric features and the material properties
%
% ====================
% ====== INPUTS ====== 
%
% nbT       : (int > 0)         Number of tubes of the CTCR 
% E         : (float) [Pa]      Young modulus (the same for all the tubes)
% R         : (1 x nbT) [m]     External radius of the tubes (index i for tube i)
% r         : (1 x nbT) [m]     Internal radius of the tubes (index i for tube i)
%
% ====================
% ===== OUTPUTS ====== 
%
% stiff     : (1 x nbT) [N.m2]  Vector of transversal bending stiffness (index i for tube i) 
%
% ======================================================================= %
% ======================================================================= %

    stiff = zeros(1,nbT) ;
    
    for i = 1:nbT

        stiff(1,i) = E*pi*(R(i)^4-r(i)^4)/4 ;

    end

end