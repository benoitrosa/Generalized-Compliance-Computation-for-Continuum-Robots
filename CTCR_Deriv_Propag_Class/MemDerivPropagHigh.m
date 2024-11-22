classdef MemDerivPropagHigh

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

        mem_B       = [] ;
        mem_Bws0    = [] ;

        mem_E       = [] ;
        mem_Ews0    = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDerivPropagHigh(varargin)
            if nargin == 4

                mc.mem_B        = varargin{1} ;
                mc.mem_Bws0     = varargin{2} ;

                mc.mem_E        = varargin{3} ;
                mc.mem_Ews0     = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_B , mem_Bws0 , mem_E , mem_Ews0] ...
                = Get_All_MemDerivPropagHigh(mc)

            mem_B       = mc.mem_B          ;
            mem_Bws0    = mc.mem_Bws0       ;

            mem_E       = mc.mem_E          ;
            mem_Ews0    = mc.mem_Ews0       ;

        end
    
    end
end