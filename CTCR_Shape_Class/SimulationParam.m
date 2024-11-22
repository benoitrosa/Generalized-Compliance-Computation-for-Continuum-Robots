classdef SimulationParam

% ======================================================================= %
% ========================== simulation_param =========================== %
% ======================================================================= %

% This class contains the model settings

% res_step [m]          : Discretization step away from discontinuity points (𝛥(𝑠) in the paper see Table 5)
% opt_tol               : Stopping criterion for solving the BVP (𝜖 in the paper see Table 5)
% digits_length         : Precision of symbolic computations involving variable-precision arithmetic
% epsilon_disct_pt [m]  : Discretization step near discontinuity points (𝛥(𝑠) in the paper see Table 5)
% nb_disct_pt           : Number of points before and after each discontinuity points (see Table 5)= [] ;
% pt_s0_LIT             : Vector of the point indexes (s0) on which the generalized compliance matrix will be computed
% pt_s0_FD              : (NOT USED) Vector of the point indexes (s0) on which the generalized compliance matrix will be computed by finite differences

% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        res_step            = [] ;
        opt_tol             = [] ;
        digits_length       = [] ;
        epsilon_disct_pt    = [] ;
        nb_disct_pt         = [] ;
        pt_s0_LIT           = [] ;
        pt_s0_FD            = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = SimulationParam(varargin)
            if (nargin == 1) && (strcmp(varargin{1},'default'))

                mc.res_step         = 0.002 ;
                mc.opt_tol          = 1e-10 ;
                mc.digits_length    = 64 ;
                mc.epsilon_disct_pt = 1e-5 ;
                mc.nb_disct_pt      = 3 ;
                mc.pt_s0_LIT        = [] ;
                mc.pt_s0_FD         = [] ;
                

            elseif nargin == 7

                mc.res_step         = varargin{1} ;
                mc.opt_tol          = varargin{2} ;
                mc.digits_length    = varargin{3} ;
                mc.epsilon_disct_pt = varargin{4} ;
                mc.nb_disct_pt      = varargin{5} ;
                mc.pt_s0_LIT        = varargin{6} ;
                mc.pt_s0_FD         = varargin{7} ;

            end
        end

        % ====== Get all ======
        function [res_step , opt_tol , digits_length , epsilon_disct_pt , ...
                  nb_disct_pt , pt_s0_LIT , pt_s0_FD] ...
                  = Get_All_SimulationParam(mc)

            res_step            = mc.res_step           ;
            opt_tol             = mc.opt_tol            ;
            digits_length       = mc.digits_length      ;
            epsilon_disct_pt    = mc.epsilon_disct_pt   ;
            nb_disct_pt         = mc.nb_disct_pt        ;
            pt_s0_LIT           = mc.pt_s0_LIT          ;
            pt_s0_FD            = mc.pt_s0_FD           ;
           
        end
    
    end
end
