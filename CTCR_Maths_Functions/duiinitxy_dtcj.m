function [duiinitxydtcj] = duiinitxy_dtcj(is,Rc,i,j,theta_c,vect_ind_iT,ind_origin)
    
    duiinitxydtcj = zeros(2,1) ;
    
    if i==j
        temp = hat([0,0,1])*rotz(theta_c(i))*[phi(is,Rc,i,vect_ind_iT,ind_origin);0;0] ;
                            
        duiinitxydtcj = temp(1:2,1) ;
    end
    
end