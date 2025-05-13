classdef MemFDCJ

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

        mem_FD_Cs0 = [] ;
        mem_FD_J   = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemFDCJ(varargin)
            if nargin == 2

                mc.mem_FD_Cs0  = varargin{1} ;

                mc.mem_FD_J    = varargin{2} ;
                
            end
        end

        % ====== Get all ======
        function [mem_FD_Cs0 , mem_FD_J] ...
                = Get_All_FDMemCJ(mc)

            mem_FD_Cs0 = mc.mem_FD_Cs0  ;
            mem_FD_J   = mc.mem_FD_J    ;

        end
    
    end
end