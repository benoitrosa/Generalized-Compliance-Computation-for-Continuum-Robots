function stiff = CTCR_Geom_2_Stiff(nbT,E,R,r)

% ======================================================================= %
% ======================================================================= %

% This function computes the tubes transversal bending stiffness
% of the based on the geometric features and the material properties

% ====================
% ====== INPUTS ====== 

% nbT       : Number of tubes of the CTCR 
% E         : [Pa] Young modulus (the same for all the tubes)
% R         : [m] External radius of the tubes (index i for tube i)
% r         : [m] Internal radius of the tubes (index i for tube i)

% ====================
% ===== OUTPUTS ====== 

% stiff     : Vector of transversal bending stiffness (index i for tube i) 

% ======================================================================= %
% ======================================================================= %

    stiff = zeros(1,nbT) ;
    
    for i = 1:nbT

        stiff(1,i) = E*pi*(R(i)^4-r(i)^4)/4 ;

    end

end