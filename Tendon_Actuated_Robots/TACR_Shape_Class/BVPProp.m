classdef BVPProp

% ======================================================================= %
% ============================== bvp_prop =============================== %
% ======================================================================= %
%
% This class contains the results of the BVP resolution
%
% vect_tol          : (6 x 1)           Residual vector of the IVP
% norm_tol          : (float)           Norm of b (at the iteration k)
% clk_bvp           : (float) [s]       Computation time for BVP resolution
% Bu                : (6 x 6)           Optimization jacobian Bu = ∂b/∂yu(0)
% nb_iter           : (int)             Number of iterations for convergence
% IC_opt            : (6 x 1)           Value of the guess yu(0) when the optimization has converged
%
% ======================================================================= %
% ======================================================================= %



    % ====== Members ======
    properties

        vect_tol            = [] ;
        norm_tol            = [] ;
        clk_bvp             = [] ;
        Bu                  = [] ;
        nb_iter             = [] ;
        IC_opt              = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = BVPProp(varargin)
            if nargin == 6

                mc.vect_tol             = varargin{1}   ;
                mc.norm_tol             = varargin{2}   ;
                mc.clk_bvp              = varargin{3}   ;
                mc.Bu                   = varargin{4}   ;
                mc.nb_iter              = varargin{5}   ;
                mc.IC_opt               = varargin{6}   ;

            else
            
                mc.vect_tol             = [] ;
                mc.norm_tol             = [] ;
                mc.clk_bvp              = [] ;
                mc.Bu                   = [] ;
                mc.nb_iter              = 1  ;
                mc.IC_opt               = [] ;

            end

        end

        % ====== Get all ======
        function [vect_tol , norm_tol , clk_bvp , Bu , nb_iter , IC_opt] = Get_All_BVPProp(mc)

            vect_tol            = mc.vect_tol           ;
            norm_tol            = mc.norm_tol           ;
            clk_bvp             = mc.clk_bvp            ;
            Bu                  = mc.Bu                 ;
            nb_iter             = mc.nb_iter            ;
            IC_opt              = mc.IC_opt             ;
           
        end
   
    end
end