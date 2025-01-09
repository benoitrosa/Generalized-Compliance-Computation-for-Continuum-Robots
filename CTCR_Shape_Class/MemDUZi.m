classdef MemDUZi

% ====================================================================== %
% ============================== mem_duzi ============================== %
% ====================================================================== %
%
% This class contains all the partial derivatives of theta_i(s)
%
% mem_duzi_duzj0    : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. uz(0)
%                     | mem_duzi_duzj0(i,j,is)
%                     with
%                     | i : the index of the tube associated to uzi(s)
%                     | j : the index of the tube associated to uzj(0)
%                     | is : the current curvilinear abscissa index
%
% mem_duzi_dm0j0    : (nbT x 3 x nbP) matrix containing the partial derivatives w.r.t. m0(0)
%                     | mem_duzi_dm0j0(i,j,is)
%                     with
%                     | i : the index of the tube associated to uzi(s)
%                     | j : the component X/Y/Z associated to m0(0)
%                     | is : the current curvilinear abscissa index
%
% mem_duzi_dn0j0    : (nbT x 3 x nbP) matrix containing the partial derivatives w.r.t. n0(0)
%                     | same template than mem_duzi_dm0j0
%
%
% mem_duzi_dtcj     : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. theta_c
%                     | same template than mem_duzi_duzj0
%
% mem_duzi_dbcj     : (nbT x nbT x nbP) matrix containing the partial derivatives w.r.t. beta_c
%                     | same template than mem_duzi_duzj0
%
% mem_duzi_dtaus0   : (nbT x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_duzi_dtaus0(i,j,is,is0)
%                     with
%                     | i : the index of the tube associated to uzi(s)
%                     | j : the component X/Y/Z associated to tau0(s0)
%                     | is : the current curvilinear abscissa index
%                     | is0 : the loaded point abscissa index
%
% mem_duzi_dfs0     : (nbT x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_duzi_dtaus0
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        mem_duzi_duzj0       = [] ;
        mem_duzi_dm0j0       = [] ;
        mem_duzi_dn0j0       = [] ;
        mem_duzi_dtcj        = [] ;
        mem_duzi_dbcj        = [] ;
        mem_duzi_dtaus0      = [] ;
        mem_duzi_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDUZi(varargin)
            if nargin == 7

                mc.mem_duzi_duzj0    = varargin{1} ;
                mc.mem_duzi_dm0j0    = varargin{2} ;
                mc.mem_duzi_dn0j0    = varargin{3} ;
                mc.mem_duzi_dtcj     = varargin{4} ;
                mc.mem_duzi_dbcj     = varargin{5} ;
                mc.mem_duzi_dtaus0   = varargin{6} ;
                mc.mem_duzi_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_duzi_duzj0 , mem_duzi_dm0j0 , mem_duzi_dn0j0 , ...
                  mem_duzi_dtcj , mem_duzi_dbcj , mem_duzi_dtaus0 , ...
                  mem_duzi_dfs0] = Get_All_MemDUZi(mc)

            mem_duzi_duzj0      = mc.mem_duzi_duzj0     ;
            mem_duzi_dm0j0      = mc.mem_duzi_dm0j0     ;
            mem_duzi_dn0j0      = mc.mem_duzi_dn0j0     ;
            mem_duzi_dtcj       = mc.mem_duzi_dtcj      ;
            mem_duzi_dbcj       = mc.mem_duzi_dbcj      ;
            mem_duzi_dtaus0     = mc.mem_duzi_dtaus0    ;
            mem_duzi_dfs0       = mc.mem_duzi_dfs0      ;
            
        end
    
    end
end
