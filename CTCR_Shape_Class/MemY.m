classdef MemY

% ======================================================================= %
% ================================ mem_y ================================ %
% ======================================================================= %
%
% mem_t     : Matrix memory of the thetai(s) values
%
% mem_uz    : Matrix memory of the uzi(s) values
%
% mem_m0    : Matrix memory of the m0(s) values
% 
% mem_n0    : Matrix memory of the n0(s) values
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_t   = [] ;
        mem_uz  = [] ;
        mem_m0  = [] ;
        mem_n0  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemY(varargin)
            if nargin == 4

                mc.mem_t    = varargin{1} ;
                mc.mem_uz   = varargin{2} ;
                mc.mem_m0   = varargin{3} ;
                mc.mem_n0   = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_t , mem_uz , mem_m0 , mem_n0] = Get_All_MemY(mc)

            mem_t  = mc.mem_t ;
            mem_uz = mc.mem_uz ;
            mem_m0 = mc.mem_m0 ;
            mem_n0 = mc.mem_n0 ;
           
        end
    
    end
end