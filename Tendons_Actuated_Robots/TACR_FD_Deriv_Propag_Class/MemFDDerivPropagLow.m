classdef MemFDDerivPropagLow

% ======================================================================= %
% ======================= mem_FD_deriv_propag_low ======================= %
% ======================================================================= %
%
% This class contains all the Low-Level partial derivatives
%
% TODO
% 
% ======================================================================= %
% ======================================================================= %









    % ====== Members ======
    properties

        mem_FD_du0          = [] ;
        mem_FD_dv0          = [] ;
        mem_FD_dR0          = [] ;
        mem_FD_dp0          = [] ;
        mem_FD_dm0          = [] ;
        mem_FD_dn0          = [] ;
        mem_FD_dc           = [] ;
        mem_FD_dd           = [] ;
        mem_FD_dM           = [] ;
        mem_FD_dinv_M       = [] ;
        mem_FD_ddpi_ds      = [] ;
        mem_FD_dAi          = [] ;
        
    end

    methods

        % ====== Constructor ======
        function mc = MemFDDerivPropagLow(varargin)
            if nargin == 12

                mc.mem_FD_du0          = varargin{1}   ;
                mc.mem_FD_dv0          = varargin{2}   ;
                mc.mem_FD_dR0          = varargin{3}   ;
                mc.mem_FD_dp0          = varargin{4}   ;
                mc.mem_FD_dm0          = varargin{5}   ;
                mc.mem_FD_dn0          = varargin{6}   ;
                mc.mem_FD_dc           = varargin{7}   ;
                mc.mem_FD_dd           = varargin{8}   ;
                mc.mem_FD_dM           = varargin{9}   ;
                mc.mem_FD_dinv_M       = varargin{10}  ;
                mc.mem_FD_ddpi_ds      = varargin{11}  ;
                mc.mem_FD_dAi          = varargin{12}  ;

            end
        end

        % ====== Get all ======
        function [mem_FD_du0 , mem_FD_dv0    , mem_FD_dR0     , mem_FD_dp0 , ...
                  mem_FD_dm0 , mem_FD_dn0    , mem_FD_dc      , mem_FD_dd  , ...
                  mem_FD_dM  , mem_FD_dinv_M , mem_FD_ddpi_ds , mem_FD_dAi] = Get_All_MemFDDerivPropagLow(mc)

            mem_FD_du0          = mc.mem_FD_du0         ;
            mem_FD_dv0          = mc.mem_FD_dv0         ;
            mem_FD_dR0          = mc.mem_FD_dR0         ;
            mem_FD_dp0          = mc.mem_FD_dp0         ;
            mem_FD_dm0          = mc.mem_FD_dm0         ;
            mem_FD_dn0          = mc.mem_FD_dn0         ;
            mem_FD_dc           = mc.mem_FD_dc          ;
            mem_FD_dd           = mc.mem_FD_dd          ;
            mem_FD_dM           = mc.mem_FD_dM          ;
            mem_FD_dinv_M       = mc.mem_FD_dinv_M      ;
            mem_FD_ddpi_ds      = mc.mem_FD_ddpi_ds     ;
            mem_FD_dAi          = mc.mem_FD_dAi         ;
            
        end
    
    end
end


