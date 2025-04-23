classdef MemY

% ======================================================================= %
% ================================ mem_y ================================ %
% ======================================================================= %
%
% This class contains the state vector values
%
% mem_t     : (nbT x nbP)       Matrix containing the thetai(s) values
% mem_uz    : (nbT x nbP)       Matrix containing the uzi(s) values
% mem_m0    : (3 x nbP)         Matrix containing the m0(s) values
% mem_n0    : (3 x nbP)         Matrix containing the n0(s) values
% mem_R0    : (3 x 3 x nbP)     Matrix containing the R0(s) values
% mem_p0    : (3 x nbP)         Matrix containing the p0(s) values
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_t   = [] ;
        mem_uz  = [] ;
        mem_m0  = [] ;
        mem_n0  = [] ;
        mem_R0  = [] ;
        mem_p0  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemY(varargin)
            if nargin == 6

                mc.mem_t    = varargin{1} ;
                mc.mem_uz   = varargin{2} ;
                mc.mem_m0   = varargin{3} ;
                mc.mem_n0   = varargin{4} ;
                mc.mem_R0   = varargin{5} ;
                mc.mem_p0   = varargin{6} ;
                
            end
        end

        % ====== Get all ======
        function [mem_t , mem_uz , mem_m0 , mem_n0 , mem_R0 , mem_p0] = Get_All_MemY(mc)

            mem_t  = mc.mem_t ;
            mem_uz = mc.mem_uz ;
            mem_m0 = mc.mem_m0 ;
            mem_n0 = mc.mem_n0 ;
            mem_R0 = mc.mem_R0 ;
            mem_p0 = mc.mem_p0 ;
           
        end
    
    end
end