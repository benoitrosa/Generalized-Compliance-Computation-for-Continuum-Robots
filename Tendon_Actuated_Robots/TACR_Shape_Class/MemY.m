classdef MemY

% ======================================================================= %
% ================================ mem_y ================================ %
% ======================================================================= %
%
% This class contains the state vector values
%
% mem_v0    : (3 x nbP)         Object containing the v0(s) values
% mem_u0    : (3 x nbP)         Object containing the u0(s) values
% mem_R0    : (3 x 3 x nbP)     Object containing the R0(s) values
% mem_p0    : (3 x nbP)         Object containing the p0(s) values
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_u0  = [] ;
        mem_v0  = [] ;
        mem_R0  = [] ;
        mem_p0  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemY(varargin)
            if nargin == 4

                mc.mem_u0   = varargin{1} ;
                mc.mem_v0   = varargin{2} ;
                mc.mem_R0   = varargin{3} ;
                mc.mem_p0   = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_u0 , mem_v0 , mem_R0 , mem_p0] = Get_All_MemY(mc)

            mem_u0 = mc.mem_u0 ;
            mem_v0 = mc.mem_v0 ;
            mem_R0 = mc.mem_R0 ;
            mem_p0 = mc.mem_p0 ;
           
        end
    
    end
end