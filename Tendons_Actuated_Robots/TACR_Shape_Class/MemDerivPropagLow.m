classdef MemDerivPropagLow

% ======================================================================= %
% ========================= mem_deriv_propag_low ======================== %
% ======================================================================= %
%
% This class contains all the Low-Level partial derivatives
%
% mem_du0       : (class) Object containing the partial derivatives of u0(s)
% mem_du0_ds    : (class) Object containing the partial derivatives of du0(s)_ds
% mem_dv0       : (class) Object containing the partial derivatives of v0(s)
% mem_dv0_ds    : (class) Object containing the partial derivatives of dv0(s)_ds
% mem_dR0       : (class) Object containing the partial derivatives of R0(s)
% mem_dR0_ds    : (class) Object containing the partial derivatives of dR0(s)_ds
% mem_dp0       : (class) Object containing the partial derivatives of p0(s)
% mem_dp0_ds    : (class) Object containing the partial derivatives of dp0(s)_ds
% mem_dm0       : (class) Object containing the partial derivatives of m0(s)
% mem_dn0       : (class) Object containing the partial derivatives of n0(s)
% mem_dT0       : (class) Object containing the partial derivatives of T0(s)
% mem_dc        : (class) Object containing the partial derivatives of c(s)
% mem_dd        : (class) Object containing the partial derivatives of d(s)
% mem_dM        : (class) Object containing the partial derivatives of M(s)
% mem_dinv_M    : (class) Object containing the partial derivatives of inv_M(s)
% mem_ddpi_ds   : (class) Object containing the partial derivatives of dpi(s)_ds
% mem_dAi       : (class) Object containing the partial derivatives of Ai(s)
% 
% ======================================================================= %
% ======================================================================= %




    % ====== Members ======
    properties

        mem_du0         = [] ;
        mem_du0_ds      = [] ;
        mem_dv0         = [] ;
        mem_dv0_ds      = [] ;
        mem_dR0         = [] ;
        mem_dR0_ds      = [] ;
        mem_dp0         = [] ;
        mem_dp0_ds      = [] ;
        mem_dm0         = [] ;
        mem_dn0         = [] ;
        mem_dT0         = [] ;
        mem_dc          = [] ;
        mem_dd          = [] ;
        mem_dM          = [] ;
        mem_dinv_M      = [] ;
        mem_ddpi_ds     = [] ;
        mem_dAi         = [] ;
        
    end

    methods

        % ====== Constructor ======
        function mc = MemDerivPropagLow(varargin)
            if nargin == 17

                mc.mem_du0         = varargin{1}   ;
                mc.mem_du0_ds      = varargin{2}   ;
                mc.mem_dv0         = varargin{3}   ;
                mc.mem_dv0_ds      = varargin{4}   ;
                mc.mem_dR0         = varargin{5}   ;
                mc.mem_dR0_ds      = varargin{6}   ;
                mc.mem_dp0         = varargin{7}   ;
                mc.mem_dp0_ds      = varargin{8}   ;
                mc.mem_dm0         = varargin{9}   ;
                mc.mem_dn0         = varargin{10}  ;
                mc.mem_dT0         = varargin{11}  ;
                mc.mem_dc          = varargin{12}  ;
                mc.mem_dd          = varargin{13}  ;
                mc.mem_dM          = varargin{14}  ;
                mc.mem_dinv_M      = varargin{15}  ;
                mc.mem_ddpi_ds     = varargin{16}  ;
                mc.mem_dAi         = varargin{17}  ;

            end
        end

        % ====== Get all ======
        function [mem_du0     , mem_du0_ds , mem_dv0   , mem_dv0_ds , ...
                  mem_dR0     , mem_dR0_ds , mem_dp0   , mem_dp0_ds , ...
                  mem_dm0     , mem_dn0    , mem_dT0   , ...
                  mem_dc      , mem_dd     , mem_dM    , mem_dinv_M , ...
                  mem_ddpi_ds , mem_dAi] = Get_All_MemDerivPropagLow(mc)

            mem_du0         = mc.mem_du0        ;
            mem_du0_ds      = mc.mem_du0_ds     ;
            mem_dv0         = mc.mem_dv0        ;
            mem_dv0_ds      = mc.mem_dv0_ds     ;
            mem_dR0         = mc.mem_dR0        ;
            mem_dR0_ds      = mc.mem_dR0_ds     ;
            mem_dp0         = mc.mem_dp0        ;
            mem_dp0_ds      = mc.mem_dp0_ds     ;
            mem_dm0         = mc.mem_dm0        ;
            mem_dn0         = mc.mem_dn0        ;
            mem_dT0         = mc.mem_dT0        ;
            mem_dc          = mc.mem_dc         ;
            mem_dd          = mc.mem_dd         ;
            mem_dM          = mc.mem_dM         ;
            mem_dinv_M      = mc.mem_dinv_M     ;
            mem_ddpi_ds     = mc.mem_ddpi_ds    ;
            mem_dAi         = mc.mem_dAi        ;

        end
    
    end
end