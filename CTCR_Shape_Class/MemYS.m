classdef MemYS

% ======================================================================= %
% ================================ mem_ys =============================== %
% ======================================================================= %
%
% This class contains the state vector derivatives values w.r.t. the 
% curvilinear abscissa s
%
% mem_ts    : Matrix memory of the d_thetai_ds(s) values
% mem_uzs   : Matrix memory of the d_uzi_ds(s) values
% mem_m0s   : Matrix memory of the d_m0_ds(s) values
% mem_n0s   : Matrix memory of the d_n0_ds(s) values
% mem_R0s   : Matrix memory of the d_R0_ds(s) values
% mem_p0s   : Matrix memory of the d_p0_ds(s) values
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_ts      = [] ;
        mem_uzs     = [] ;
        mem_m0s     = [] ;
        mem_n0s     = [] ;
        mem_R0s     = [] ;
        mem_p0s     = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemYS(varargin)
            if nargin == 6

                mc.mem_ts   = varargin{1} ;
                mc.mem_uzs  = varargin{2} ;
                mc.mem_m0s  = varargin{3} ;
                mc.mem_n0s  = varargin{4} ;
                mc.mem_R0s  = varargin{5} ;
                mc.mem_p0s  = varargin{6} ;
                
            end
        end

        % ====== Get all ======
        function [mem_ts , mem_uzs , mem_m0s , mem_n0s , mem_R0s , mem_p0s] = Get_All_MemYS(mc)

            mem_ts  = mc.mem_ts ;
            mem_uzs = mc.mem_uzs ;
            mem_m0s = mc.mem_m0s ;
            mem_n0s = mc.mem_n0s ;
            mem_R0s = mc.mem_R0s ;
            mem_p0s = mc.mem_p0s ;
           
        end
        
    
    end
end