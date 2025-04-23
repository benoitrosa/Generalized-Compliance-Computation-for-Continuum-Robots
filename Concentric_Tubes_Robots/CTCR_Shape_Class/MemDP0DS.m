classdef MemDP0DS

% ======================================================================= %
% ============================= mem_dP0_ds ============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of dp0(s)_ds
%
% mem_dP0_duzj0_ds      : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. uz(0)
%                         | mem_dP0_duzj0_ds(i,j,is)
%                         with
%                         | i ∊ [1 , 3]     : the component X/Y/Z of dp0(s)_ds
%                         | j ∊ [1 , nbT]   : the index of the tube associated to uzj(0)
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dP0_dm0j0_ds      : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                         | mem_dP0_dm0j0_ds(i,j,is)
%                         with
%                         | i ∊ [1 , 3]     : the component X/Y/Z of dp0(s)_ds
%                         | j ∊ [1 , 3]     : the component X/Y/Z associated to m0(0)
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dP0_dn0j0_ds      : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                         | same template than mem_dP0_dm0j0_ds
%
% mem_dP0_dtcj_ds       : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. theta_c
%                         | same template than mem_dP0_duzj0_ds
%
% mem_dP0_dbcj_ds       : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. beta_c
%                         | same template than mem_dP0_duzj0_ds
%
% mem_dP0_dtaus0_ds     : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                         | mem_dP0_dtaus0_ds(i,j,is,is0)
%                         with
%                         | i ∊ [1 , 3]     : the component X/Y/Z of dp0(s)_ds
%                         | j ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                         | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dP0_dfs0_ds       : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                         | same template than mem_dP0_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dP0_duzj0_ds       = [] ;
        mem_dP0_dm0j0_ds       = [] ;
        mem_dP0_dn0j0_ds       = [] ;
        mem_dP0_dtcj_ds        = [] ;
        mem_dP0_dbcj_ds        = [] ;
        mem_dP0_dtaus0_ds      = [] ;
        mem_dP0_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDP0DS(varargin)
            if nargin == 7

                mc.mem_dP0_duzj0_ds    = varargin{1} ;
                mc.mem_dP0_dm0j0_ds    = varargin{2} ;
                mc.mem_dP0_dn0j0_ds    = varargin{3} ;
                mc.mem_dP0_dtcj_ds     = varargin{4} ;
                mc.mem_dP0_dbcj_ds     = varargin{5} ;
                mc.mem_dP0_dtaus0_ds   = varargin{6} ;
                mc.mem_dP0_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dP0_duzj0_ds , mem_dP0_dm0j0_ds , mem_dP0_dn0j0_ds , ...
                  mem_dP0_dtcj_ds , mem_dP0_dbcj_ds , mem_dP0_dtaus0_ds , ...
                  mem_dP0_dfs0_ds] = Get_All_MemDP0DS(mc)

            mem_dP0_duzj0_ds   = mc.mem_dP0_duzj0_ds      ;
            mem_dP0_dm0j0_ds   = mc.mem_dP0_dm0j0_ds      ;
            mem_dP0_dn0j0_ds   = mc.mem_dP0_dn0j0_ds      ;
            mem_dP0_dtcj_ds    = mc.mem_dP0_dtcj_ds       ;
            mem_dP0_dbcj_ds    = mc.mem_dP0_dbcj_ds       ;
            mem_dP0_dtaus0_ds  = mc.mem_dP0_dtaus0_ds     ;
            mem_dP0_dfs0_ds    = mc.mem_dP0_dfs0_ds       ;
           
        end
    
    end
end