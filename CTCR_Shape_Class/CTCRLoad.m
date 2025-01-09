classdef CTCRLoad

% ======================================================================= %
% ============================== ctcr_load ============================== %
% ======================================================================= %
%
% This class contains the robot loads
%
% tau_tip       : [N.m] Bending moment applied on the tip of the robot  
% f_tip         : [N] Force applied on the tip of the robot 
% load_lim_1    : [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
% tau_dist_1    : [N.m] Distributed bending moment applied on the robot  
% f_dist_1      : [N] Distributed force applied on the robot 
% load_lim_2    : [m] Range for the curvilinear abscissa on which a distributed load is applied ([l_min,l_max] in the paper)
% tau_dist_2    : [N.m] Distributed bending moment applied on the robot  
% f_dist_2      : [N] Distributed force applied on the robot 
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        tau_tip     = [] ;
        f_tip       = [] ;
        load_lim_1  = [] ;
        tau_dist_1  = [] ;
        f_dist_1    = [] ;
        load_lim_2  = [] ;
        tau_dist_2  = [] ;
        f_dist_2    = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = CTCRLoad(varargin)
            if nargin == 8

                mc.tau_tip      = varargin{1} ;
                mc.f_tip        = varargin{2} ;
                mc.load_lim_1   = varargin{3} ;
                mc.tau_dist_1   = varargin{4} ;
                mc.f_dist_1     = varargin{5} ;
                mc.load_lim_2   = varargin{6} ;
                mc.tau_dist_2   = varargin{7} ;
                mc.f_dist_2     = varargin{8} ;

            end
        end


        % ====== Get all ======
        function [tau_tip , f_tip , load_lim_1 , tau_dist_1 , f_dist_1 , load_lim_2 , tau_dist_2 , f_dist_2] = Get_All_CTCRLoad(mc)

            tau_tip     = mc.tau_tip ;
            f_tip       = mc.f_tip ;
            load_lim_1  = mc.load_lim_1 ;
            tau_dist_1  = mc.tau_dist_1 ;
            f_dist_1    = mc.f_dist_1 ;
            load_lim_2  = mc.load_lim_2 ;
            tau_dist_2  = mc.tau_dist_2 ;
            f_dist_2    = mc.f_dist_2 ;
           
        end
    
    end
end