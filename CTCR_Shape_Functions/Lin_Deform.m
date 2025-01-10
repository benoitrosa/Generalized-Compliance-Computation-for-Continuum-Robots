function ctcr_shape_def_jacob ...
         = Lin_Deform( ...
         mem_is0,delta_f0,ctcr_shape_init,ctcr_construc_init,mem_Cs0_init,bool_disp_terminal)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the deformation of the CTCR, by linearization of 
% the deformation, when a force variation is applied
%
% ====================
% ====== INPUTS ====== 
%
% mem_is0               : (int) (_ x 1)         Vector with the index of the loaded points
% delta_f0              : (_ x 3)               Matrix with the force variaitons vectors (row i for force i)
% ctcr_shape_init       : (3 x _)               Initial CTCR shape before applying the force variation
% ctcr_construc_init    : (class)               Robot features related to the model settings for the initial shape
% mem_Cs0_init          : (3 x 3 x nbP x nbP)   The Generalized Compliance Matrix associated to the initial shape
%
% ====================
% ===== OUTPUTS ====== 
%
% ctcr_shape_def_jacob  : (3 x _)               Deformed CTCR shape, due to the force variations, computed using the Generalized Compliance Matrix
%
% ======================================================================= %
% ======================================================================= %

    tic_lin_deform          = tic ;
    ctcr_shape_def_jacob    = ctcr_shape_init ;

    for i = 1:length(mem_is0)
        for is = ctcr_construc_init.ind_origin:ctcr_construc_init.nbP
            is0                         = mem_is0(i) ;
            ctcr_shape_def_jacob(:,is)  = ctcr_shape_def_jacob(:,is) ...
                                          + mem_Cs0_init(1:3,4:6,is,is0)*delta_f0(i,1:3)' ;
        end
    end

    % Display computation time
    time_comp_lin_deform = toc(tic_lin_deform) ;
    if bool_disp_terminal
        disp(' ') ; disp(' ') ; disp(' ============ Computation time for linearized deformations ') ; disp([' ====  ' , num2str(time_comp_lin_deform), '  [s]'])
    end


end