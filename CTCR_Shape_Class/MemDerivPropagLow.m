classdef MemDerivPropagLow

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

        mem_du0         = [] ;
        mem_du0_ds      = [] ;

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
            if nargin == 15

                mc.mem_du0          = varargin{1} ;
                mc.mem_du0_ds       = varargin{2} ;
                mc.mem_dm0          = varargin{3} ;
                mc.mem_dm0_ds       = varargin{4} ;
                mc.mem_dn0          = varargin{5} ;
                mc.mem_dn0_ds       = varargin{6} ;
                mc.mem_dti          = varargin{7} ;
                mc.mem_dti_ds       = varargin{8} ;
                mc.mem_duzi         = varargin{9} ;
                mc.mem_duzi_ds      = varargin{10} ;
                mc.mem_d00Rs        = varargin{11} ;
                mc.mem_d00Rs_ds     = varargin{12} ;
                mc.mem_d00Ps        = varargin{13} ;
                mc.mem_d00Ps_ds     = varargin{14} ;
                mc.mem_d00Ts        = varargin{15} ;
                
            end
        end

        % ====== Get all ======
        function [mem_du0  , mem_du0_ds   , mem_dm0    , mem_dm0_ds   , mem_dn0 , ...
                mem_dn0_ds , mem_dti      , mem_dti_ds , mem_duzi     , mem_duzi_ds , ...
                mem_d00Rs  , mem_d00Rs_ds , mem_d00Ps  , mem_d00Ps_ds , mem_d00Ts] = Get_All_MemDerivPropagLow(mc)

            mem_du0         = mc.mem_du0        ;
            mem_du0_ds      = mc.mem_du0_ds     ;

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