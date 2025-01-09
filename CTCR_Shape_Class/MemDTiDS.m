classdef MemDTiDS


% ===================================================================== %
% ============================= mem_dti_ds ============================ %
% ===================================================================== %
%
% This class contains all the partial derivatives of theta_i(s)
%
% mem_dti_duzj0_ds      : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. uz(0)
%                         | mem_dti_duzj0_ds(i,j,is)
%                         with
%                         | i : the index of the tube associated to thetai(s)
%                         | j : the index of the tube associated to uzj(0)
%                         | is : the current curvilinear abscissa index
%
% mem_dti_dm0j0_ds      : (nbT x 3 x nbP) matrix containing the partial derivatives w.r.t. m0(0)
%                         | mem_dti_dm0j0_ds(i,j,is)
%                         with
%                         | i : the index of the tube associated to thetai(s)
%                         | j : the component X/Y/Z associated to m0(0)
%                         | is : the current curvilinear abscissa index
%
% mem_dti_dn0j0_ds      : (nbT x 3 x nbP) matrix containing the partial derivatives w.r.t. n0(0)
%                         | same template than mem_dti_dm0j0_ds
%
%
% mem_dti_dtcj_ds       : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. theta_c
%                         | same template than mem_dti_duzj0_ds
%
% mem_dti_dbcj_ds       : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. beta_c
%                         | same template than mem_dti_duzj0_ds
%
% mem_dti_dtaus0_ds     : (nbT x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. tau0(s0)
%                         | mem_dti_dtaus0_ds(i,j,is,is0)
%                         with
%                         | i : the index of the tube associated to thetai(s)
%                         | j : the component X/Y/Z associated to tau0(s0)
%                         | is : the current curvilinear abscissa index
%                         | is0 : the loaded point abscissa index
%
% mem_dti_dfs0_ds       : (nbT x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. f0(s0)
%                         | same template than mem_dti_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        mem_dti_duzj0_ds       = [] ;
        mem_dti_dm0j0_ds       = [] ;
        mem_dti_dn0j0_ds       = [] ;
        mem_dti_dtcj_ds        = [] ;
        mem_dti_dbcj_ds        = [] ;
        mem_dti_dtaus0_ds      = [] ;
        mem_dti_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDTiDS(varargin)
            if nargin == 7

                mc.mem_dti_duzj0_ds    = varargin{1} ;
                mc.mem_dti_dm0j0_ds    = varargin{2} ;
                mc.mem_dti_dn0j0_ds    = varargin{3} ;
                mc.mem_dti_dtcj_ds     = varargin{4} ;
                mc.mem_dti_dbcj_ds     = varargin{5} ;
                mc.mem_dti_dtaus0_ds   = varargin{6} ;
                mc.mem_dti_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dti_duzj0_ds , mem_dti_dm0j0_ds , mem_dti_dn0j0_ds , ...
                  mem_dti_dtcj_ds , mem_dti_dbcj_ds , mem_dti_dtaus0_ds , ...
                  mem_dti_dfs0_ds] = Get_All_MemDTiDS(mc)

            mem_dti_duzj0_ds   = mc.mem_dti_duzj0_ds    ;
            mem_dti_dm0j0_ds   = mc.mem_dti_dm0j0_ds    ;
            mem_dti_dn0j0_ds   = mc.mem_dti_dn0j0_ds    ;
            mem_dti_dtcj_ds    = mc.mem_dti_dtcj_ds     ;
            mem_dti_dbcj_ds    = mc.mem_dti_dbcj_ds     ;
            mem_dti_dtaus0_ds  = mc.mem_dti_dtaus0_ds   ;
            mem_dti_dfs0_ds    = mc.mem_dti_dfs0_ds     ;
           
        end
    
    end
end
