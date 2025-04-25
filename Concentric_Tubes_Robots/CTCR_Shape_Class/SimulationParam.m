classdef SimulationParam

% ======================================================================= %
% ========================== simulation_param =========================== %
% ======================================================================= %
%
% This class contains the model settings
%
% res_step                  : (float) [m]               Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
% Display                   : (string)                  'Display' options of optimoptions
% FunctionTolerance         : (float)                   'FunctionTolerance' options of optimoptions (𝜖 in the paper see Table 5)
% StepTolerance             : (float)                   'StepTolerance' options of optimoptions
% MaxIter                   : (int)                     'MaxIter' options of optimoptions
% MaxFunctionEvaluations    : (int)                     'MaxFunctionEvaluations' options of optimoptions
% bool_opt_lit              : (boolean)                 Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
% bool_SIC                  : (boolean)                 Using the Smart Initial Guess ?
% nb_pt_dict                : (int > 0)                 Number of points before and after each discontinuity points (see Table 5)
% resol_pt_disct            : (float) [m]               Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)
% pt_s0_LIT                 : (int ∊ [1 , nbP]) (1x_)   Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
% bool_J                    : (boolean)                 Compute the Joint Jacobian ?  
% bool_Cs0                  : (boolean)                 Compute the Generalized Compliance Matrix ?
% flag_ctcr                 : (boolean)                 Is the actuation, especially the translation of the tubes, correct ?
% bool_problem_opt          : (boolean)                 Is there a problem solving the BVP ?
% bool_disp_terminal        : (boolean)                 Do you want to print the results in the terminal ?
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        res_step                = [] ;
        Display                 = [] ;
        FunctionTolerance       = [] ;
        StepTolerance           = [] ;
        MaxIter                 = [] ;
        MaxFunctionEvaluations  = [] ;
        bool_opt_lit            = [] ;
        bool_SIC                = [] ;
        nb_pt_dict              = [] ;
        resol_pt_disct          = [] ;
        pt_s0_LIT               = [] ;
        bool_J                  = [] ;
        bool_Cs0                = [] ;
        flag_ctcr               = [] ;
        bool_problem_opt        = [] ;
        bool_disp_terminal      = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = SimulationParam(varargin)
            if (nargin == 1) && (strcmp(varargin{1},'default'))

                mc.res_step                 = 0.002 ;
                mc.Display                  = 'off' ;
                mc.FunctionTolerance        = 1e-10 ;
                mc.StepTolerance            = 1e-10 ;
                mc.MaxIter                  = 1000  ;
                mc.MaxFunctionEvaluations   = 10000 ;
                mc.bool_opt_lit             = true  ;
                mc.bool_SIC                 = false ;
                mc.nb_pt_dict               = 3     ;
                mc.resol_pt_disct           = 1e-5  ;
                mc.pt_s0_LIT                = []    ;
                mc.bool_J                   = true  ;
                mc.bool_Cs0                 = true  ;
                mc.flag_ctcr                = true  ;
                mc.bool_problem_opt         = false ;
                mc.bool_disp_terminal       = true  ;
                

            elseif nargin == 16

                mc.res_step                 = varargin{1} ;
                mc.Display                  = varargin{2} ;
                mc.FunctionTolerance        = varargin{3} ;
                mc.StepTolerance            = varargin{4} ;
                mc.MaxIter                  = varargin{5} ;
                mc.MaxFunctionEvaluations   = varargin{6} ;
                mc.bool_opt_lit             = varargin{7} ;
                mc.bool_SIC                 = varargin{8} ;
                mc.nb_pt_dict               = varargin{9} ;
                mc.resol_pt_disct           = varargin{10} ;
                mc.pt_s0_LIT                = varargin{11} ;
                mc.bool_J                   = varargin{12} ;
                mc.bool_Cs0                 = varargin{13} ;
                mc.flag_ctcr                = varargin{14} ;
                mc.bool_problem_opt         = varargin{15} ;
                mc.bool_disp_terminal       = varargin{16} ;

            end
        end

        % ====== Get all ======
        function [res_step         , Display          , FunctionTolerance      , ...
                  StepTolerance    , MaxIter          , MaxFunctionEvaluations , ...
                  bool_opt_lit     , bool_SIC         , ...
                  nb_pt_dict       , resol_pt_disct   , ...
                  pt_s0_LIT        , bool_J           , bool_Cs0               , ...
                  flag_ctcr        , bool_problem_opt , bool_disp_terminal] ...
                  = Get_All_SimulationParam(mc)

            res_step                = mc.res_step               ;
            Display                 = mc.Display                ;
            FunctionTolerance       = mc.FunctionTolerance      ;
            StepTolerance           = mc.StepTolerance          ;
            MaxIter                 = mc.MaxIter                ;
            MaxFunctionEvaluations  = mc.MaxFunctionEvaluations ;
            bool_opt_lit            = mc.bool_opt_lit           ;
            bool_SIC                = mc.bool_SIC               ;
            nb_pt_dict              = mc.nb_pt_dict             ;
            resol_pt_disct          = mc.resol_pt_disct         ;
            pt_s0_LIT               = mc.pt_s0_LIT              ;
            bool_J                  = mc.bool_J                 ;
            bool_Cs0                = mc.bool_Cs0               ;
            flag_ctcr               = mc.flag_ctcr              ;
            bool_problem_opt        = mc.bool_problem_opt       ;
            bool_disp_terminal      = mc.bool_disp_terminal     ;
           
        end
    
    end
end
