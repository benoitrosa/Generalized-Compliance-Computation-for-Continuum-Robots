classdef MemDU0

% ===================================================================== %
% ============================== mem_du0 ============================== %
% ===================================================================== %
%
% This class contains all the partial derivatives of u0(s)
%
% mem_du0_duzj0     : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. uz(0)
%                     | mem_du0_duzj0(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of u0(s)
%                     | j ∊ [1 , nbT]   : the index of the tube associated to uzj(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_du0_dm0j0     : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | mem_du0_dm0j0(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of u0(s)
%                     | j ∊ [1 , 3]     : the component X/Y/Z associated to m0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_du0_dn0j0     : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | same template than mem_du0_dm0j0
%
% mem_du0_dtcj      : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. theta_c
%                     | same template than mem_du0_duzj0
%
% mem_du0_dbcj      : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. beta_c
%                     | same template than mem_du0_duzj0
%
% mem_du0_dtaus0    : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_du0_dtaus0(i,j,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of u0(s)
%                     | j ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_du0_dfs0      : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_du0_dtaus0
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        mem_du0_duzj0       = [] ;
        mem_du0_dm0j0       = [] ;
        mem_du0_dn0j0       = [] ;
        mem_du0_dtcj        = [] ;
        mem_du0_dbcj        = [] ;
        mem_du0_dtaus0      = [] ;
        mem_du0_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDU0(varargin)
            if nargin == 7

                mc.mem_du0_duzj0    = varargin{1} ;
                mc.mem_du0_dm0j0    = varargin{2} ;
                mc.mem_du0_dn0j0    = varargin{3} ;
                mc.mem_du0_dtcj     = varargin{4} ;
                mc.mem_du0_dbcj     = varargin{5} ;
                mc.mem_du0_dtaus0   = varargin{6} ;
                mc.mem_du0_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_du0_duzj0 , mem_du0_dm0j0 , mem_du0_dn0j0 , ...
                  mem_du0_dtcj , mem_du0_dbcj , mem_du0_dtaus0 , ...
                  mem_du0_dfs0] = Get_All_MemDU0(mc)

            mem_du0_duzj0   = mc.mem_du0_duzj0      ;
            mem_du0_dm0j0   = mc.mem_du0_dm0j0      ;
            mem_du0_dn0j0   = mc.mem_du0_dn0j0      ;
            mem_du0_dtcj    = mc.mem_du0_dtcj       ;
            mem_du0_dbcj    = mc.mem_du0_dbcj       ;
            mem_du0_dtaus0  = mc.mem_du0_dtaus0     ;
            mem_du0_dfs0    = mc.mem_du0_dfs0       ;
           
        end
    
    end
end