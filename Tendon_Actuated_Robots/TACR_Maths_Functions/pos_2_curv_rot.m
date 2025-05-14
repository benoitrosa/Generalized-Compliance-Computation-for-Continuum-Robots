function [mem_u, R] = pos_2_curv_rot(mem_p, vect_res)
  
    digits(10) ;

    nbP             = size(mem_p, 2);

    R               = zeros(3, 3, nbP) ;  
    R(:,:,1)        = eye(3) ;      

    normal_prev     = R(:,2,1) ;
    tangent_prev    = R(:,3,1) ;

    for is = 1:nbP-1

        tangent     = mem_p(:,is+1) - mem_p(:,is) ;
        
        if norm(tangent) == 0
            tangent = tangent_prev ;
        end
        tangent     = tangent / norm(tangent) ;

        % Avoiding cross section twist
        normal      = normal_prev - dot(normal_prev, tangent) * tangent ;
        normal      = normal / norm(normal) ;

        % Section orientation at the current point
        binormal        = cross(normal,tangent) ;
        R(:,:,is+1)     = [binormal , normal , tangent] ;

        % Memory for next points
        normal_prev     = normal ;
        tangent_prev    = tangent ;

    end
    R(:,:,end) = R(:,:,end-1) ;    
    
   
    dR              = zeros(3,3,nbP) ;
    for is = 1:nbP-1
        dR(:,:,is)   = (R(:,:,is+1)-R(:,:,is))/vect_res(is) ;
    end
    dR(:,:,end-1)   = dR(:,:,end-2) ;
    dR(:,:,end)     = dR(:,:,end-2) ;
    
        
    mem_u           = zeros(3, nbP) ; 
    for is = 1:nbP
        mem_u(:, is) = inv_hat(R(:,:,is)'*dR(:,:,is)) ;
    end
    mem_u(:,end-1)      = mem_u(:,end-2) ;
    mem_u(:,end)        = mem_u(:,end-2) ;
    mem_u(3,:)          = zeros(1,size(mem_u,2)) ;
       
end