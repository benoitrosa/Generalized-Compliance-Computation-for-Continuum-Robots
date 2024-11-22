function [R] = rotz(gamma)

    R = [
        [cos(gamma) , -sin(gamma), 0] ;
        [sin(gamma) , cos(gamma) , 0] ;
        [0          , 0          , 1]
        ];
    
end