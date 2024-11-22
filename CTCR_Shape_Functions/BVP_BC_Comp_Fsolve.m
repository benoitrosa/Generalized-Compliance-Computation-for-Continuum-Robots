function [error , jacobianMatrix , bvp_prop , mem_bvp , mem_deriv_propag_low] = BVP_BC_Comp_Fsolve(IC , ...
    simulation_param , ctcr_construc , ctcr_carac , ctcr_load , ctcr_act , bvp_prop , ...
    mem_bvp , mem_deriv_propag_low , select_opt , bool_deriv_propag)

%  , bool_deriv_propag

% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    % IC initialization
    bvp_prop.IC_opt = IC ;

    mem_T           = zeros(4,4,ctcr_construc.nbP) ;
    mem_T(:,:,1)    = [eye(3,3),[0;0;ctcr_construc.vect_z(1)];[0,0,0,1]] ;
    mem_bvp.mem_T   = mem_T ;

    % Integration of IC in BVP memories
    mem_bvp = BVP_Init_IC(bvp_prop , mem_bvp , ctcr_construc , ctcr_carac) ;

    % IVP integration
    [mem_bvp , mem_deriv_propag_low] = IVP_Int(bool_deriv_propag , ctcr_construc , ctcr_carac , simulation_param , mem_bvp , mem_deriv_propag_low , select_opt) ;
  
    if strcmp(select_opt,'fsolve_Bu_lit')
        % Assignation of Bu matrix
        bvp_prop.Bu = BVP_Bu_Construc(mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ctcr_act , ctcr_load) ;
    end

    % Distal boundaries conditions comparaison expected / calculated from IC
    bvp_prop = BVP_Comp_BC(mem_bvp , bvp_prop , ctcr_carac , ctcr_construc , ctcr_load) ;

    % Setting the output
    error = bvp_prop.vect_tol ;

    % Setting the manually computed optimization jacobian
    if nargout>1
        jacobianMatrix = bvp_prop.Bu ;
    end
    
end