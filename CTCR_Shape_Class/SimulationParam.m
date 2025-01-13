classdef SimulationParam

% ======================================================================= %
% ========================== simulation_param =========================== %
% ======================================================================= %
%
% This class contains the model settings
%
% res_step           : (float) [m]              Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
% opt_tol            : (float)                  Stopping criterion for solving the BVP (𝜖 in the paper see Table 5)
% epsilon_disct_pt   : (float) [m]              Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)
% nb_disct_pt        : (int > 0)                Number of points before and after each discontinuity points (see Table 5) ;
% pt_s0_LIT          : (int ∊ [1 , nbP]) (1x_)  Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
% bool_J             : (boolean)                Compute the Joint Jacobian ?  
% bool_Cs0           : (boolean)                Compute the Generalized Compliance Matrix ?
% flag_ctcr          : (boolean)                Is the actuation, especially the translation of the tubes, correct ?
% bool_problem_opt   : (boolean)                Is there a problem solving the BVP ?
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        res_step            = [] ;
        opt_tol             = [] ;
        epsilon_disct_pt    = [] ;
        nb_disct_pt         = [] ;
        pt_s0_LIT           = [] ;
        bool_J              = [] ;
        bool_Cs0            = [] ;
        flag_ctcr           = [] ;
        bool_problem_opt    = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = SimulationParam(varargin)
            if (nargin == 1) && (strcmp(varargin{1},'default'))

                mc.res_step         = 0.002 ;
                mc.opt_tol          = 1e-10 ;
                mc.epsilon_disct_pt = 1e-5 ;
                mc.nb_disct_pt      = 3 ;
                mc.pt_s0_LIT        = [] ;
                mc.bool_J           = true ;
                mc.bool_Cs0         = true ;
                mc.flag_ctcr        = [] ;
                mc.bool_problem_opt = [] ;
                

            elseif nargin == 9

                mc.res_step         = varargin{1} ;
                mc.opt_tol          = varargin{2} ;
                mc.epsilon_disct_pt = varargin{3} ;
                mc.nb_disct_pt      = varargin{4} ;
                mc.pt_s0_LIT        = varargin{5} ;
                mc.bool_J           = varargin{6} ;
                mc.bool_Cs0         = varargin{7} ;
                mc.flag_ctcr        = varargin{8} ;
                mc.bool_problem_opt = varargin{9} ;

            end
        end

        % ====== Get all ======
        function [res_step , opt_tol , epsilon_disct_pt , nb_disct_pt , ...
                  pt_s0_LIT , bool_J , bool_Cs0 , flag_ctcr , bool_problem_opt] ...
                  = Get_All_SimulationParam(mc)

            res_step            = mc.res_step           ;
            opt_tol             = mc.opt_tol            ;
            epsilon_disct_pt    = mc.epsilon_disct_pt   ;
            nb_disct_pt         = mc.nb_disct_pt        ;
            pt_s0_LIT           = mc.pt_s0_LIT          ;
            bool_J              = mc.bool_J             ;
            bool_Cs0            = mc.bool_Cs0           ;
            flag_ctcr           = mc.flag_ctcr          ;
            bool_problem_opt    = mc.bool_problem_opt   ;
           
        end
    
    end
end
