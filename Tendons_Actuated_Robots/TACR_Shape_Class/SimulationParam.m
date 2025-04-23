classdef SimulationParam

% ======================================================================= %
% ========================== simulation_param =========================== %
% ======================================================================= %
%
% This class contains the model settings
%
% res_step              : (float) [m]               Discretization step away from discontinuity points
% opt_tol               : (float)                   Stopping criterion for solving the BVP
% bool_opt_lit          : (boolean)                 Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
% nb_disct_pt           : (int > 0)                 Number of points before and after each discontinuity points
% resol_pt_disct        : (float) [m]               Discretization step near discontinuity points 
% pt_s0_LIT             : (int ∊ [1 , nbP]) (1x_)   Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
% bool_J                : (boolean)                 Compute the Joint Jacobian ?  
% bool_Cs0              : (boolean)                 Compute the Generalized Compliance Matrix ?
% bool_problem_opt      : (boolean)                 Is there a problem solving the BVP ?
% bool_disp_terminal    : (boolean)                 Do you want to print the results in the terminal ?
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        res_step            = [] ;
        opt_tol             = [] ;
        bool_opt_lit        = [] ;
        nb_pt_dict          = [] ;
        resol_pt_disct      = [] ;
        pt_s0_LIT           = [] ;
        bool_J              = [] ;
        bool_Cs0            = [] ;
        bool_problem_opt    = [] ;
        bool_disp_terminal  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = SimulationParam(varargin)
            if (nargin == 1) && (strcmp(varargin{1},'default'))

                mc.res_step             = 0.002 ;
                mc.opt_tol              = 1e-10 ;
                mc.bool_opt_lit         = true ;
                mc.nb_pt_dict           = 3 ;
                mc.resol_pt_disct       = 1e-5 ;
                mc.pt_s0_LIT            = [] ;
                mc.bool_J               = true ;
                mc.bool_Cs0             = true ;
                mc.bool_problem_opt     = false ;
                mc.bool_disp_terminal   = true ;
                

            elseif nargin == 10

                mc.res_step             = varargin{1} ;
                mc.opt_tol              = varargin{2} ;
                mc.bool_opt_lit         = varargin{3} ;
                mc.nb_pt_dict           = varargin{4} ;
                mc.resol_pt_disct       = varargin{5} ;
                mc.pt_s0_LIT            = varargin{6} ;
                mc.bool_J               = varargin{7} ;
                mc.bool_Cs0             = varargin{8} ;
                mc.bool_problem_opt     = varargin{9} ;
                mc.bool_disp_terminal   = varargin{10} ;

            end
        end

        % ====== Get all ======
        function [res_step          , opt_tol        , bool_opt_lit , ...
                  nb_pt_dict        , resol_pt_disct , ...
                  pt_s0_LIT         , bool_J         , bool_Cs0 , ...
                  bool_problem_opt  , bool_disp_terminal] ...
                  = Get_All_SimulationParam(mc)

            res_step                = mc.res_step           ;
            opt_tol                 = mc.opt_tol            ;
            bool_opt_lit            = mc.bool_opt_lit       ;
            nb_pt_dict              = mc.nb_pt_dict         ;
            resol_pt_disct          = mc.resol_pt_disct     ;
            pt_s0_LIT               = mc.pt_s0_LIT          ;
            bool_J                  = mc.bool_J             ;
            bool_Cs0                = mc.bool_Cs0           ;
            bool_problem_opt        = mc.bool_problem_opt   ;
            bool_disp_terminal      = mc.bool_disp_terminal ;
           
        end
    
    end
end
