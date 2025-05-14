function [tacr_shape_def_jacob , time_comp_lin_deform , tacr_construc_def_jacob , mem_bvp_def_jacob] ...
         = Lin_Deform( ...
         mem_is0 , delta_f0 , tacr_carac , tacr_shape_init , tacr_construc_init , mem_Cs0_init , mem_bvp_init)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the deformation of the TACR, by linearization of 
% the deformation, when a force variation is applied
%
% ====================
% ====== INPUTS ====== 
%
% mem_is0                   : (int) (nbF x 1)       Vector with the index of the loaded points
% delta_f0                  : (nbF x 3)             Matrix with the force variaitons vectors (row i for force i)
%                           | with nbF : the number of forces applied on the TACR
% tacr_shape_init           : (3 x nbP)             Initial TACR shape before applying the force variation
% tacr_construc_init        : (class)               Robot features related to the model settings for the initial shape
% mem_Cs0_init              : (3 x 3 x nbP x nbP)   The Generalized Compliance Matrix associated to the initial shape
%
% ====================
% ===== OUTPUTS ====== 
%
% tacr_shape_def_jacob      : (3 x nbF)             Deformed TACR shape, due to the force variations, computed using the Generalized Compliance Matrix
%                           | with nbF : the number of forces applied on the TACR
% time_comp_lin_deform      : (float)               [s] Computation time to linearize the TACR deformations
% tacr_construc_def_jacob   : (class)               Robot features related to the model settings for the linearized deformed shape
% mem_bvp_def_jacob         : (class)               Memory of the BVP variables for the linearized deformed shape
%
% ======================================================================= %
% ======================================================================= %

    tic_lin_deform          = tic ;
    tacr_shape_def_jacob    = tacr_shape_init ;
    mem_bvp_def_jacob       = mem_bvp_init ;

    for is = 1:tacr_construc_init.nbP 
        for i = 1:length(mem_is0)
            is0                         = mem_is0(i) ;

            tacr_shape_def_jacob(:,is)  = tacr_shape_def_jacob(:,is) + mem_Cs0_init(1:3,4:6,is,is0)*delta_f0(i,1:3)' ;

            % ========
            % ==== Computing the linearized orientation deformation

            for j = 1:3

                % ==========
                % Use of the Euler-Rodriguez formula

                inv_hat_dR0s_df0s0                          = mem_Cs0_init(4:6,3+j,is,is0) ;
                u                                           = inv_hat_dR0s_df0s0/norm(inv_hat_dR0s_df0s0) ;
                t                                           = delta_f0(i,j)'*norm(inv_hat_dR0s_df0s0) ;
                delta_R0s                                   = eye(3) * cos(t) + u * u'*(1-cos(t)) + hat(u) * sin(t) ;
                mem_bvp_def_jacob.mem_y.mem_R0(:,:,is)      = delta_R0s*mem_bvp_def_jacob.mem_y.mem_R0(:,:,is) ;

                % ==========
                % Direct one order linearization
                % 
                % delta_R0s                                 = hat(mem_Cs0_init(4:6,4:6,is,is0)*delta_f0(i,1:3)') ;
                % mem_bvp_def_jacob.mem_y.mem_R0(:,:,is)    = mem_bvp_def_jacob.mem_y.mem_R0(:,:,is) + delta_R0s ;
            end

        end
    end

    time_comp_lin_deform            = toc(tic_lin_deform)  ;
    
    tacr_construc_def_jacob         = tacr_construc_init   ;
    tacr_construc_def_jacob.mem_p0  = tacr_shape_def_jacob ;

    % Re-computing the tendon routings
    for iT = 1:tacr_carac.nbT
        for is = 1:tacr_construc_def_jacob.nbP
            tacr_construc_def_jacob.mem_pi(:,iT,is) = tacr_shape_def_jacob(:,is) + mem_bvp_def_jacob.mem_y.mem_R0(:,:,is)*tacr_construc_def_jacob.mem_ri(:,iT,is) ;
        end
    end

    
    


end