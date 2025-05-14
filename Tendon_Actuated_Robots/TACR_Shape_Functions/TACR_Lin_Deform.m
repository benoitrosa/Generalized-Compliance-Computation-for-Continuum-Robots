function [tacr_shape_def_mod , tacr_shape_def_jacob , ...
         mem_bvp_def_mod , mem_bvp_def_jacob , ...
         tacr_construc_def_mod , tacr_construc_def_jacob , ...
         mem_is0] = ...
         TACR_Lin_Deform( ...
         prc_s0 , delta_f0 , tacr_carac , tacr_construc , tacr_load , ...
         tacr_shape , tacr_act , simulation_param , mem_bvp , mem_CJ)


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
%                       | with nbF : the number of forces applied on the TACR
% delta_f0              : (nbF x 3)         Matrix containing the vector force (row i for force i)
% tacr_carac            : (class)           Robot features
% tacr_construc         : (class)           Robot features related to the model settings
% tacr_load             : (class)           Robot loads
% tacr_shape            : (3 x nbP)         Robot shape
% tacr_act              : (class)           Robot actuation
% simulation_param      : (class)           Model settings
% mem_bvp               : (class)           Memory of the BVP variables 
% mem_CJ                : (class)           Memory of the Generalized Compliance Matrix and the Joint Jacobian
%
% ====================
% ===== OUTPUTS ====== 
%
% tacr_shape_def_mod    : (3 x nbP)         Deformed robot shape computed thanks to the quasi-static model
% tacr_shape_def_jacob  : (3 x nbP)         Deformed robot shape computed thanks to the generalized compliance matrix
% mem_is0               : (nbF x 1)         Vector of the index of the loaded points 
%
% ======================================================================= %
% ======================================================================= %


    % ================
    % ============== Adding the vector force to tacr_construc ===============

    fprintf('\n ============= \n ==== ADDIND THE FORCE VARIATION \n') ;

    [tacr_construc_def_mod , tacr_load_new , mem_is0] ...
    = Add_Force_var( ...
    prc_s0 , delta_f0 , tacr_construc , tacr_load) ;



    % ================
    % ============== Compute the model again ===============

    fprintf('\n ============= \n ==== COMPUTING THE DEFORMED TACR SHAPE USING THE SHAPE MODEL \n') ;

    [tacr_shape_def_mod , mem_bvp_def_mod , bvp_prop_def_mod , ~ , ...
    ~ , ~ , ~ , tacr_construc_def_mod , ~ , ~] ...
    = TACR_Shape( ...
    simulation_param , tacr_carac , tacr_act , tacr_load_new , tacr_construc_def_mod) ;



    % ================
    % ==== Display in the terminal ====

    if simulation_param.bool_disp_terminal
        fprintf(' == Time for TACR shape : %.2e [s] \n', bvp_prop_def_mod.clk_bvp) ;
        fprintf(' == Number of iterations : %.2e \n', bvp_prop_def_mod.nb_iter) ;
        fprintf(' == Optimization norm error : %.2e \n', bvp_prop_def_mod.norm_tol) ;
        fprintf(' == Number of discretization points : %.2e \n', tacr_construc_def_mod.nbP) ;
    end



    % ================
    % ============== Compute the deformation using the Generalized Compliance Matrix ===============

    fprintf('\n ============= \n ==== COMPUTING THE DEFORMED TACR SHAPE BY LINEARIZATION USING THE GENERALIZED COMPLIANCE MATRIX \n') ;

    [tacr_shape_def_jacob , time_comp_lin_deform , tacr_construc_def_jacob , mem_bvp_def_jacob] ...
    = Lin_Deform( ...
    mem_is0 , delta_f0 , tacr_carac , tacr_shape , tacr_construc , mem_CJ.mem_Cs0 , mem_bvp) ;


    % ================
    % ==== Display in the terminal ====

    if simulation_param.bool_disp_terminal
        fprintf(' == Computation time for linearized deformations : %.2e [s] \n', time_comp_lin_deform) ;
    end        

end