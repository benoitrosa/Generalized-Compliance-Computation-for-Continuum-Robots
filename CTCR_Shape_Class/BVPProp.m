classdef BVPProp



% ======================================================================= %
% ============================== bvp_prop =============================== %
% ======================================================================= %

% This class contains the results of the BVP resolution


% vect_tol          : Residual vector (b in the paper)
% norm_tol          : Norm of b (at the iteration k)
% norm_tol_prev     : Norm of b (at the iteration k-1)
% opt_scale         : Optimization scale used only for custom BVP solver
% flag_bvp          : [boolean] Has the BVP optimization-based resolution converged ? Used only for custom BVP solver
% clk_bvp           : Computation time for BVP resolution
% Bu                : Optimization jacobian Bu = ∂b/∂yu(0)
% nb_iter           : Number of iterations for convergence
% IC_opt            : Initial conditions yu(0) estimated (at the iteration k)
% IC_opt_prev       : Initial conditions yu(0) estimated (at the iteration k-1)

% ======================================================================= %
% ======================================================================= %



    % ====== Members ======
    properties

        vect_tol            = [] ;
        norm_tol            = [] ;
        norm_tol_prev       = [] ;
        opt_scale           = [] ;
        flag_bvp            = [] ;
        clk_bvp             = [] ;
        Bu                  = [] ;
        nb_iter             = [] ;
        IC_opt              = [] ;
        IC_opt_prev         = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = BVPProp(varargin)
            if nargin == 10

                mc.vect_tol             = varargin{1}   ;
                mc.norm_tol             = varargin{2}   ;
                mc.norm_tol_prev        = varargin{3}   ;
                mc.opt_scale            = varargin{4}   ;
                mc.flag_bvp             = varargin{5}   ;
                mc.clk_bvp              = varargin{6}   ;
                mc.Bu                   = varargin{7}   ;
                mc.nb_iter              = varargin{8}   ;
                mc.IC_opt               = varargin{9}   ;
                mc.IC_opt_prev          = varargin{10}  ;

            else
            
                mc.vect_tol             = [] ;
                mc.norm_tol             = [] ;
                mc.norm_tol_prev        = [] ;
                mc.opt_scale            = 1  ;
                mc.flag_bvp             = [] ;
                mc.clk_bvp              = [] ;
                mc.Bu                   = [] ;
                mc.nb_iter              = 1  ;
                mc.IC_opt               = [] ;
                mc.IC_opt_prev          = [] ;

            end

        end

        % ====== Get all ======
        function [vect_tol , norm_tol , norm_tol_prev , opt_scale , flag_bvp , clk_bvp , Bu , nb_iter , IC_opt , IC_opt_prev] = Get_All_BVPProp(mc)

            vect_tol            = mc.vect_tol           ;
            norm_tol            = mc.norm_tol           ;
            norm_tol_prev       = mc.norm_tol_prev      ;
            opt_scale           = mc.opt_scale          ;
            flag_bvp            = mc.flag_bvp           ;
            clk_bvp             = mc.clk_bvp            ;
            Bu                  = mc.Bu                 ;
            nb_iter             = mc.nb_iter            ;
            IC_opt              = mc.IC_opt             ;
            IC_opt_prev         = mc.IC_opt_prev        ;
           
        end
   
    end
end