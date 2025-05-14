function [vect_select_quant , vect_select_deriv] = ...
         CTCR_3D_Comp_Manag(numerateur,derivateur)

    % numerateur = {'Cs0(s)' , 'J(s)' , 'B' , 'uzi' , 'ti' , 'm0' , 'n0' , 'u0' , 'R0' , 'p0'} ; 
    % derivateur = {'uzj(0)' , 'm0(0)' , 'n0(0)' , 'tcj' , 'bcj' , 'tau(s0)' , 'f(s0)'} ;

    vect_select_quant = [] ;

    if ismember('Cs0(s)',numerateur)
        vect_select_quant = [vect_select_quant , 1] ;
    end
    if ismember('J(s)',numerateur)
        vect_select_quant = [vect_select_quant , 2] ;
    end
    if ismember('b',numerateur)
        vect_select_quant = [vect_select_quant , 3] ;
    end
    if ismember('uzi',numerateur)
        vect_select_quant = [vect_select_quant , 4] ;
    end
    if ismember('ti',numerateur)
        vect_select_quant = [vect_select_quant , 5] ;
    end
    if ismember('m0',numerateur)
        vect_select_quant = [vect_select_quant , 6] ;
    end
    if ismember('n0',numerateur)
        vect_select_quant = [vect_select_quant , 7] ;
    end
    if ismember('u0',numerateur)
        vect_select_quant = [vect_select_quant , 8] ;
    end
    if ismember('R0',numerateur)
        vect_select_quant = [vect_select_quant , 9] ;
    end
    if ismember('p0',numerateur)
        vect_select_quant = [vect_select_quant , 10] ;
    end
    



    vect_select_deriv = [] ;

    if ismember('uzj(0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 1] ;
    end
    if ismember('m0(0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 2] ;
    end
    if ismember('n0(0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 3] ;
    end
    if ismember('tcj',derivateur)
        vect_select_deriv = [vect_select_deriv , 4] ;
    end
    if ismember('bcj',derivateur)
        vect_select_deriv = [vect_select_deriv , 5] ;
    end
    if ismember('tau(s0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 6] ;
    end
    if ismember('f(s0)',derivateur)
        vect_select_deriv = [vect_select_deriv , 7] ;
    end

end