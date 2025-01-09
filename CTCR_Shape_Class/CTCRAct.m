classdef CTCRAct


% ======================================================================= %
% ============================== ctcr_act =============================== %
% ======================================================================= %
%
% This class contains the robot actuation
%
% beta_c    : [m] Vector of the tubes translations (index i for tube i)
% theta_c   : [rad] Vector of the tubes rotations (index i for tube i)
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        beta_c      = [] ;
        theta_c     = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = CTCRAct(varargin)
            if nargin == 2

                mc.beta_c   = varargin{1} ;
                mc.theta_c  = varargin{2} ;

            end
        end

        % ====== Get all ======
        function [beta_c , theta_c] = Get_All_CTCRAct(mc)

            beta_c      = mc.beta_c ;
            theta_c     = mc.theta_c ;
           
        end
    
    end
end