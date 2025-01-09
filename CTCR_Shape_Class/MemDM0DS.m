classdef MemDM0DS


% ===================================================================== %
% ============================= mem_dm0_ds ============================ %
% ===================================================================== %
%
% This class contains all the derivatives w.r.t. the cuvilinear abscissa s
% of the partial derivatives of m0(s)
%
% mem_dm0_duzj0_ds      : (3 x nbT x nbP) matrix containing the partial derivatives w.r.t. uz(0)
%                         | mem_dm0_duzj0_ds(i,j,is)
%                         with
%                         | i : the component X/Y/Z of m0(s)
%                         | j : the index of the tube associated to uzj(0)
%                         | is : the current curvilinear abscissa index
%
% mem_dm0_dm0j0_ds      : (3 x 3 x nbP) matrix containing the partial derivatives w.r.t. m0(0)
%                         | mem_dm0_dm0j0_ds(i,j,is)
%                         with
%                         | i : the component X/Y/Z of m0(s)
%                         | j : the component X/Y/Z associated to m0(0)
%                         | is : the current curvilinear abscissa index
%
% mem_dm0_dn0j0_ds      : (3 x 3 x nbP) matrix containing the partial derivatives w.r.t. n0(0)
%                         | same template than mem_dm0_dm0j0_ds
%
%
% mem_dm0_dtcj_ds       : (3 x nbT x nbP) matrix containing the partial derivatives w.r.t. theta_c
%                         | same template than mem_dm0_duzj0_ds
%
% mem_dm0_dbcj_ds       : (3 x nbT x nbP) matrix containing the partial derivatives w.r.t. beta_c
%                         | same template than mem_dm0_duzj0_ds
%
% mem_dm0_dtaus0_ds     : (3 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. tau0(s0)
%                         | mem_dm0_dtaus0_ds(i,j,is,is0)
%                         with
%                         | i : the component X/Y/Z of m0(s)
%                         | j : the component X/Y/Z associated to tau0(s0)
%                         | is : the current curvilinear abscissa index
%                         | is0 : the loaded point abscissa index
%
% mem_dm0_dfs0_ds       : (3 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. f0(s0)
%                         | same template than mem_dm0_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dm0_duzj0_ds       = [] ;
        mem_dm0_dm0j0_ds       = [] ;
        mem_dm0_dn0j0_ds       = [] ;
        mem_dm0_dtcj_ds        = [] ;
        mem_dm0_dbcj_ds        = [] ;
        mem_dm0_dtaus0_ds      = [] ;
        mem_dm0_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDM0DS(varargin)
            if nargin == 7

                mc.mem_dm0_duzj0_ds    = varargin{1} ;
                mc.mem_dm0_dm0j0_ds    = varargin{2} ;
                mc.mem_dm0_dn0j0_ds    = varargin{3} ;
                mc.mem_dm0_dtcj_ds     = varargin{4} ;
                mc.mem_dm0_dbcj_ds     = varargin{5} ;
                mc.mem_dm0_dtaus0_ds   = varargin{6} ;
                mc.mem_dm0_dfs0_ds     = varargin{7} ;

            end
        end

        % ====== Get all ======
        function [mem_dm0_duzj0_ds , mem_dm0_dm0j0_ds , mem_dm0_dn0j0_ds , ...
                  mem_dm0_dtcj_ds , mem_dm0_dbcj_ds , mem_dm0_dtaus0_ds , ...
                  mem_dm0_dfs0_ds] = Get_All_MemDM0DS(mc)

            mem_dm0_duzj0_ds   = mc.mem_dm0_duzj0_ds      ;
            mem_dm0_dm0j0_ds   = mc.mem_dm0_dm0j0_ds      ;
            mem_dm0_dn0j0_ds   = mc.mem_dm0_dn0j0_ds      ;
            mem_dm0_dtcj_ds    = mc.mem_dm0_dtcj_ds       ;
            mem_dm0_dbcj_ds    = mc.mem_dm0_dbcj_ds       ;
            mem_dm0_dtaus0_ds  = mc.mem_dm0_dtaus0_ds     ;
            mem_dm0_dfs0_ds    = mc.mem_dm0_dfs0_ds       ;
        end
    
    end
end


