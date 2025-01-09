classdef MemDerivPropagLow

% ======================================================================= %
% ========================= mem_deriv_propag_low ======================== %
% ======================================================================= %
%
% This class contains all the Low-Level partial derivatives
%
% mem_du0       : Class containing the partial derivatives of u0(s)
% mem_dm0       : Class containing the partial derivatives of m0(s)
% mem_dm0_ds    : Class containing the partial derivatives of dm0(s)_ds
% mem_dn0       : Class containing the partial derivatives of n0(s)
% mem_dn0_ds    : Class containing the partial derivatives of dn0(s)_ds
% mem_dti       : Class containing the partial derivatives of theta(s)
% mem_dti_ds    : Class containing the partial derivatives of dtheta(s)_ds
% mem_duzi      : Class containing the partial derivatives of uz(s)
% mem_duzi_ds   : Class containing the partial derivatives of duz(s)_ds
% mem_d00Rs     : Class containing the partial derivatives of R0(s)
% mem_d00Rs_ds  : Class containing the partial derivatives of dR0(s)_ds
% mem_d00Ps     : Class containing the partial derivatives of p0(s)
% mem_d00Ps_ds  : Class containing the partial derivatives of dp0(s)_ds
% mem_d00Ts     : Class containing the partial derivatives of T0(s)
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_du0         = [] ;
        mem_dm0         = [] ;
        mem_dm0_ds      = [] ;
        mem_dn0         = [] ;
        mem_dn0_ds      = [] ;
        mem_dti         = [] ;
        mem_dti_ds      = [] ;
        mem_duzi        = [] ;
        mem_duzi_ds     = [] ;
        mem_d00Rs       = [] ;
        mem_d00Rs_ds    = [] ;
        mem_d00Ps       = [] ;
        mem_d00Ps_ds    = [] ;
        mem_d00Ts       = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDerivPropagLow(varargin)
            if nargin == 14

                mc.mem_du0          = varargin{1} ;
                mc.mem_dm0          = varargin{2} ;
                mc.mem_dm0_ds       = varargin{3} ;
                mc.mem_dn0          = varargin{4} ;
                mc.mem_dn0_ds       = varargin{5} ;
                mc.mem_dti          = varargin{6} ;
                mc.mem_dti_ds       = varargin{7} ;
                mc.mem_duzi         = varargin{8} ;
                mc.mem_duzi_ds      = varargin{9} ;
                mc.mem_d00Rs        = varargin{10} ;
                mc.mem_d00Rs_ds     = varargin{11} ;
                mc.mem_d00Ps        = varargin{12} ;
                mc.mem_d00Ps_ds     = varargin{13} ;
                mc.mem_d00Ts        = varargin{14} ;
                
            end
        end

        % ====== Get all ======
        function [mem_du0      , mem_dm0    , mem_dm0_ds   , mem_dn0   , ...
                  mem_dn0_ds   , mem_dti    , mem_dti_ds   , mem_duzi  , ...
                  mem_duzi_ds  , mem_d00Rs  , mem_d00Rs_ds , mem_d00Ps , ...
                  mem_d00Ps_ds , mem_d00Ts] = Get_All_MemDerivPropagLow(mc)

            mem_du0         = mc.mem_du0        ;
            mem_dm0         = mc.mem_dm0        ;
            mem_dm0_ds      = mc.mem_dm0_ds     ;
            mem_dn0         = mc.mem_dn0        ;
            mem_dn0_ds      = mc.mem_dn0_ds     ;
            mem_dti         = mc.mem_dti        ;
            mem_dti_ds      = mc.mem_dti_ds     ;
            mem_duzi        = mc.mem_dti        ;
            mem_duzi_ds     = mc.mem_dti_ds     ;
            mem_d00Rs       = mc.mem_d00Rs      ;
            mem_d00Rs_ds    = mc.mem_d00Rs_ds   ;
            mem_d00Ps       = mc.mem_d00Ps      ;
            mem_d00Ps_ds    = mc.mem_d00Ps_ds   ;
            mem_d00Ts       = mc.mem_d00Ts      ;

        end
    
    end
end