classdef MemYS

% ======================================================================= %
% ================================ mem_ys =============================== %
% ======================================================================= %
%
% mem_ts    : Matrix memory of the d_thetai_ds(s) values
%
% mem_uzs   : Matrix memory of the d_uzi_ds(s) values
%
% mem_m0s   : Matrix memory of the d_m0_ds(s) values
% 
% mem_n0s   : Matrix memory of the d_n0_ds(s) values
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_ts      = [] ;
        mem_uzs     = [] ;
        mem_m0s     = [] ;
        mem_n0s     = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemYS(varargin)
            if nargin == 4

                mc.mem_ts   = varargin{1} ;
                mc.mem_uzs  = varargin{2} ;
                mc.mem_m0s  = varargin{3} ;
                mc.mem_n0s  = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_ts , mem_uzs , mem_m0s , mem_n0s] = Get_All_MemYS(mc)

            mem_ts  = mc.mem_ts ;
            mem_uzs = mc.mem_uzs ;
            mem_m0s = mc.mem_m0s ;
            mem_n0s = mc.mem_n0s ;
           
        end
        
    
    end
end