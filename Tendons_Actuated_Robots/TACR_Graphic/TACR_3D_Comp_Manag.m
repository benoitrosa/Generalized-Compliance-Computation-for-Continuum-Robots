function [vect_select_quant , vect_select_deriv] = ...
         TACR_3D_Comp_Manag(numerateur,derivateur)

    vect_select_quant = [] ;

    if ismember('Cs0(s)',numerateur)
        vect_select_quant = [vect_select_quant , 1] ;
    end
    if ismember('J(s)',numerateur)
        vect_select_quant = [vect_select_quant , 2] ;
    end
    if ismember('B',numerateur)
        vect_select_quant = [vect_select_quant , 3] ;
    end
    if ismember('u0',numerateur)
        vect_select_quant = [vect_select_quant , 4] ;
    end
    if ismember('v0',numerateur)
        vect_select_quant = [vect_select_quant , 5] ;
    end
    if ismember('R0',numerateur)
        vect_select_quant = [vect_select_quant , 6] ;
    end
    if ismember('p0',numerateur)
        vect_select_quant = [vect_select_quant , 7] ;
    end
    if ismember('m0',numerateur)
        vect_select_quant = [vect_select_quant , 8] ;
    end
    if ismember('n0',numerateur)
        vect_select_quant = [vect_select_quant , 9] ;
    end
    if ismember('c',numerateur)
        vect_select_quant = [vect_select_quant , 10] ;
    end
    if ismember('d',numerateur)
        vect_select_quant = [vect_select_quant , 11] ;
    end
    if ismember('M',numerateur)
        vect_select_quant = [vect_select_quant , 12] ;
    end
    if ismember('inv_M',numerateur)
        vect_select_quant = [vect_select_quant , 13] ;
    end
    if ismember('dpi_ds',numerateur)
        vect_select_quant = [vect_select_quant , 14] ;
    end
    if ismember('Ai',numerateur)
        vect_select_quant = [vect_select_quant , 15] ;
    end
    

    vect_select_deriv = [] ;

    if ismember('m0(0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 1] ;
    end
    if ismember('n0(0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 2] ;
    end
    if ismember('tj',derivateur)
        vect_select_deriv = [vect_select_deriv , 3] ;
    end
    if ismember('tau(s0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 4] ;
    end
    if ismember('f(s0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 5] ;
    end


end

