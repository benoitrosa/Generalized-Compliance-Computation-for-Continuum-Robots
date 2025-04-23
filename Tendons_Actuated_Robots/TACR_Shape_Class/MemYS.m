classdef MemYS

% ======================================================================= %
% ================================ mem_ys ================================ %
% ======================================================================= %
%
% This class contains the state vector values
%
% mem_u0s    : (3 x nbP)        Object containing the d_u0(s)_ds values
% mem_v0s    : (3 x nbP)        Object containing the d_v0(s)_ds values
% mem_R0s    : (3 x 3 x nbP)    Object containing the d_R0(s)_ds values
% mem_p0s    : (3 x nbP)        Object containing the d_p0(s)_ds values
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_u0s  = [] ;
        mem_v0s  = [] ;
        mem_R0s  = [] ;
        mem_p0s  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemYS(varargin)
            if nargin == 4

                mc.mem_u0s   = varargin{1} ;
                mc.mem_v0s   = varargin{2} ;
                mc.mem_R0s   = varargin{3} ;
                mc.mem_p0s   = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_u0s , mem_v0s , mem_R0s , mem_p0s] = Get_All_MemYS(mc)

            mem_u0s = mc.mem_u0s ;
            mem_v0s = mc.mem_v0s ;
            mem_R0s = mc.mem_R0s ;
            mem_p0s = mc.mem_p0s ;
           
        end
    
    end
end