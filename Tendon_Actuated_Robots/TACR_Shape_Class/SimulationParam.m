classdef SimulationParam

% ======================================================================= %
% ========================== simulation_param =========================== %
% ======================================================================= %
%
% This class contains the model settings
%
% res_step                  : (float) [m]               Discretization step away from discontinuity points
% bool_display_iter         : (boolean)                 Display the iteration of fsolve ?
% FunctionTolerance         : (float)                   'FunctionTolerance' options of optimoptions
% StepTolerance             : (float)                   'StepTolerance' options of optimoptions
% MaxIter                   : (int)                     'MaxIter' options of optimoptions
% MaxFunctionEvaluations    : (int)                     'MaxFunctionEvaluations' options of optimoptions
% bool_opt_lit              : (boolean)                 Computing the optimization jacobian using the LLDPM ? If not, use numerical finite differences
% bool_SIC                  : (boolean)                 Using the Smart Initial Guess ?
% nb_pt_dict                : (int > 0)                 Number of points before and after each discontinuity points
% resol_pt_disct            : (float) [m]               Discretization step near discontinuity points 
% pt_s0_LIT                 : (int ∊ [1 , nbP]) (1x_)   Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
% bool_J                    : (boolean)                 Compute the Joint Jacobian ?  
% bool_Cs0                  : (boolean)                 Compute the Generalized Compliance Matrix ?
% bool_problem_opt          : (boolean)                 Is there a problem solving the BVP ?
% bool_disp_terminal        : (boolean)                 Do you want to print the results in the terminal ?
% bool_back_st              : (boolean)                 Is the central backbone is initially straight ? If not, it is circularly curved
% bool_tendon_st            : (boolean)                 Is the tendons are initially straight ? If not, they are helicoidal
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        res_step                = [] ;
        bool_display_iter                 = [] ;
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
        bool_problem_opt        = [] ;
        bool_disp_terminal      = [] ;
        bool_back_st            = [] ;
        bool_tendon_st          = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = SimulationParam(varargin)
            if (nargin == 1) && (strcmp(varargin{1},'default'))

                mc.res_step                 = 0.002 ;
                mc.bool_display_iter        = false ;
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
                mc.bool_problem_opt         = false ;
                mc.bool_disp_terminal       = true  ;
                mc.bool_back_st             = true  ;
                mc.bool_tendon_st           = true  ;
                

            elseif nargin == 17

                mc.res_step                 = varargin{1}  ;
                mc.bool_display_iter        = varargin{2}  ;
                mc.FunctionTolerance        = varargin{3}  ;
                mc.StepTolerance            = varargin{4}  ;
                mc.MaxIter                  = varargin{5}  ;
                mc.MaxFunctionEvaluations   = varargin{6}  ;
                mc.bool_opt_lit             = varargin{7}  ;
                mc.bool_SIC                 = varargin{8}  ;
                mc.nb_pt_dict               = varargin{9}  ;
                mc.resol_pt_disct           = varargin{10} ;
                mc.pt_s0_LIT                = varargin{11} ;
                mc.bool_J                   = varargin{12} ;
                mc.bool_Cs0                 = varargin{13} ;
                mc.bool_problem_opt         = varargin{14} ;
                mc.bool_disp_terminal       = varargin{15} ;
                mc.bool_back_st             = varargin{16} ;
                mc.bool_tendon_st           = varargin{17} ;

            end
        end

        % ====== Get all ======
        function [res_step         , bool_display_iter  , FunctionTolerance      , ...
                  StepTolerance    , MaxIter            , MaxFunctionEvaluations , ...
                  bool_opt_lit     , bool_SIC           , ...
                  nb_pt_dict       , resol_pt_disct     , ...
                  pt_s0_LIT        , bool_J             , bool_Cs0               , ...
                  bool_problem_opt , bool_disp_terminal , ...
                  bool_back_st     , bool_tendon_st] ...
                  = Get_All_SimulationParam(mc)

            res_step                = mc.res_step               ;
            bool_display_iter       = mc.bool_display_iter      ;
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
            bool_problem_opt        = mc.bool_problem_opt       ;
            bool_disp_terminal      = mc.bool_disp_terminal     ;
            bool_back_st            = mc.bool_back_st           ;
            bool_tendon_st          = mc.bool_tendon_st         ;
           
        end
    
    end
end
