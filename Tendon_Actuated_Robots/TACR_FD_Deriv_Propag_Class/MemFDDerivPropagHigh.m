classdef MemFDDerivPropagHigh

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

        mem_FD_B       = [] ;
        mem_FD_Bws0    = [] ;

        mem_FD_E       = [] ;
        mem_FD_Ews0    = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemFDDerivPropagHigh(varargin)
            if nargin == 4

                mc.mem_FD_B     = varargin{1} ;
                mc.mem_FD_Bws0  = varargin{2} ;

                mc.mem_FD_E     = varargin{3} ;
                mc.mem_FD_Ews0  = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_FD_B , mem_FD_Bws0 , mem_FD_E , mem_FD_Ews0] ...
                = Get_All_MemFDDerivPropagHigh(mc)

            mem_FD_B       = mc.mem_FD_B      ;
            mem_FD_Bws0    = mc.mem_FD_Bws0   ;

            mem_FD_E       = mc.mem_FD_E      ;
            mem_FD_Ews0    = mc.mem_FD_Ews0   ;

        end
    
    end
end