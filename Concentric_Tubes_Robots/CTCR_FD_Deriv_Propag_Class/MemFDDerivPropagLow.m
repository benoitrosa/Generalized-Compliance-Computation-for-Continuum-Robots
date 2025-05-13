classdef MemFDDerivPropagLow

% ======================================================================= %
% ================================ mem_y ================================ %
% ======================================================================= %
%
% mem_du0_ds    : Class of the d(du0_dxj)_ds values
%
% mem_d00R0_ds  : Class of the d(dB00Rs_dxj)_ds values
%
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_FD_du0         = [] ;
        mem_FD_dm0         = [] ;
        mem_FD_dn0         = [] ;
        mem_FD_dti         = [] ;
        mem_FD_duzi        = [] ;
        mem_FD_dR0         = [] ;
        mem_FD_dP0         = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemFDDerivPropagLow(varargin)
            if nargin == 7

                mc.mem_FD_du0    = varargin{1} ;
                mc.mem_FD_dm0    = varargin{2} ;
                mc.mem_FD_dn0    = varargin{3} ;
                mc.mem_FD_dti    = varargin{4} ;
                mc.mem_FD_duzi   = varargin{5} ;
                mc.mem_FD_dR0    = varargin{6} ;
                mc.mem_FD_dP0    = varargin{7} ;

            end
        end

        % ====== Get all ======
        function [mem_FD_du0 , mem_FD_dm0  , mem_FD_dn0 , ...
                 mem_FD_dti  , mem_FD_duzi , mem_FD_dR0 , ...
                 mem_FD_dP0] = Get_All_MemFDDerivPropagLow(mc)

            mem_FD_du0         = mc.mem_FD_du0 ;
            mem_FD_dm0         = mc.mem_FD_dm0 ;
            mem_FD_dn0         = mc.mem_FD_dn0 ;
            mem_FD_dti         = mc.mem_FD_dti ;
            mem_FD_duzi        = mc.mem_FD_dti ;
            mem_FD_dR0         = mc.mem_FD_dR0 ;
            mem_FD_dP0         = mc.mem_FD_dP0 ;

        end
    
    end
end