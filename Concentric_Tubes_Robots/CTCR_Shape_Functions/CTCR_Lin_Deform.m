function [ctcr_shape_def_mod , ctcr_shape_def_jacob , mem_is0] = ...
         CTCR_Lin_Deform( ...
         prc_s0 , delta_f0 , ctcr_carac , ctcr_construc , ctcr_load , ...
         ctcr_shape , simulation_param , mem_CJ)


% ======================================================================= %
% ======================================================================= %
%
% This function takes as input a shape and mutiple forces variations and
% compute the generated deformed shape :
% 1) by computing again the whole quasi-static model
% 2) by adding the deformation linearization to the input shape thanks to 
%    the generalized compliance matrix
%
% ====================
% ====== INPUTS ====== 
%
% prc_s0                : (1 x nbF)         Vector of the curvilinear abscissa of the contact points in pourcent of the robot length L (index i for force i)
%                       | with nbF : the number of forces applied on the CTCR
% delta_f0              : (nbF x 3)         Matrix containing the vector force (row i for force i)
% ctcr_carac            : (class)           Robot features
% ctcr_construc         : (class)           Robot features related to the model settings
% ctcr_load             : (class)           Robot loads
% ctcr_shape            : (3 x nbP)         Robot shape
% simulation_param      : (class)           Model settings
% mem_CJ                : (class)           Memory of the Generalized Compliance Matrix and the Joint Jacobian
%
% ====================
% ===== OUTPUTS ====== 
%
% ctcr_shape_def_mod    : (3 x nbP)         Deformed robot shape computed thanks to the quasi-static model
% ctcr_shape_def_jacob  : (3 x nbP)         Deformed robot shape computed thanks to the generalized compliance matrix
% mem_is0               : (nbF x 1)         Vector of the index of the loaded points 
%
% ======================================================================= %
% ======================================================================= %

    % ================
    % ============== Adding the vector force to ctcr_construc ===============

    fprintf('\n ============= \n ==== ADDIND THE FORCE VARIATION \n') ;

    [ctcr_construc_new,ctcr_load_new,mem_is0] ...
    = Add_Force_var( ...
    prc_s0,delta_f0,ctcr_construc,ctcr_load) ;


    % ================
    % ============== Compute the model again ===============

    [ctcr_shape_def_mod , ~ , bvp_prop_def_mod , ~ , ...
    ~ , ~ , ~ , ctcr_construc_new , ~ , ~] ...
    = CTCR_Shape( ...
    simulation_param , ctcr_carac , ctcr_load_new , ctcr_construc_new) ;



    % ================
    % ==== Display in the terminal ====

    if simulation_param.bool_disp_terminal
        fprintf(' == Time for CTCR shape : %.2e [s] \n', bvp_prop_def_mod.clk_bvp) ;
        fprintf(' == Number of iterations : %.2e \n', bvp_prop_def_mod.nb_iter) ;
        fprintf(' == Optimization norm error : %.2e \n', bvp_prop_def_mod.norm_tol) ;
        fprintf(' == Number of discretization points : %.2e \n', ctcr_construc_new.nbP) ;
    end



    % ================
    % ============== Compute the deformation using the Generalized Compliance Matrix ===============

    fprintf('\n ============= \n ==== COMPUTING THE DEFORMED CTCR SHAPE BY LINEARIZATION USING THE GENERALIZED COMPLIANCE MATRIX \n') ;

    [ctcr_shape_def_jacob , time_comp_lin_deform] ...
    = Lin_Deform( ...
    mem_is0,delta_f0,ctcr_shape,ctcr_construc,mem_CJ.mem_Cs0) ;


    % ================
    % ==== Display in the terminal ====

    if simulation_param.bool_disp_terminal
        fprintf(' == Computation time for linearized deformations : %.2e [s] \n', time_comp_lin_deform) ;
    end
        

end