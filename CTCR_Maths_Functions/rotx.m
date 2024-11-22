function [R] = rotx(gamma)

    R = [
        [1 ,          0 ,           0] ;
        [0 , cos(gamma) , -sin(gamma)] ;
        [0 , sin(gamma) ,  cos(gamma)]
        ];
    
end