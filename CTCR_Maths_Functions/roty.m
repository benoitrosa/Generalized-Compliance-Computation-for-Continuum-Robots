function [R] = roty(gamma)

    R = [
        [cos(gamma)  , 0 , sin(gamma)] ;
        [0           , 1 ,          0] ;
        [-sin(gamma) , 0 , cos(gamma)]
        ];
    
end