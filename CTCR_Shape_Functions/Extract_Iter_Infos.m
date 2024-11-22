function stop = Extract_Iter_Infos(x, optimValues, state)

        
    global mem_Bu    mem_error_vect    mem_error_norm  ...
           mem_temps mem_IC mem_scale  bvp_prop        ...
           tic_iter  simulation_param

    nb_iter = optimValues.iteration + 1 ;

    mem_Bu(:,:,nb_iter)         = bvp_prop.Bu ;
    mem_error_norm(nb_iter)     = bvp_prop.norm_tol ;
    mem_error_vect(:,nb_iter)   = bvp_prop.vect_tol ;
    mem_IC(:,nb_iter)           = bvp_prop.IC_opt ;
    mem_scale(nb_iter)          = bvp_prop.opt_scale ;

    %mem_temps(nb_iter)          = toc(tic_iter);
    %mem_scale(nb_iter)          = optimValues.stepsize ;

    tic_iter = tic ;

    if bvp_prop.norm_tol <= simulation_param.opt_tol
        stop = true ;
    else
        stop = false ;
    end

end