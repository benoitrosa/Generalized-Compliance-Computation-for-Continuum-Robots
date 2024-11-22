function stiff = CTCR_Geom_2_Stiff(nbT,E,R,r)

% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    stiff = zeros(1,nbT) ;
    
    for i = 1:nbT

        stiff(1,i) = E*pi*(R(i)^4-r(i)^4)/4 ;

    end

end