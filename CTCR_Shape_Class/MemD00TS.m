classdef MemD00TS


% ======================================================================= %
% ============================== mem_d00Ts ============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of T0(s) without the residual constraint
%
% mem_d00Ts_duzj0   : (4 x 4 x nbT x nbP) matrix containing the partial derivatives w.r.t. uz(0)
%                     | mem_d00Ts_duzj0(i,j,k,is)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the index of the tube associated to uzj(0)
%                     | is : the current curvilinear abscissa index
%
% mem_d00Ts_dm0j0   : (4 x 4 x 3 x nbP) matrix containing the partial derivatives w.r.t. m0(0)
%                     | mem_d00Ts_dm0j0(i,j,k,is)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the component X/Y/Z associated to m0(0)
%                     | is : the current curvilinear abscissa index
%
% mem_d00Ts_dn0j0   : (4 x 4 x 3 x nbP) matrix containing the partial derivatives w.r.t. n0(0)
%                     | same template than mem_d00Ts_dm0j0
%
%
% mem_d00Ts_dtcj    : (4 x 4 x nbT x nbP) matrix containing the partial derivatives w.r.t. theta_c
%                     | same template than mem_d00Ts_duzj0
%
% mem_d00Ts_dbcj    : (4 x 4 x nbT x nbP) matrix containing the partial derivatives w.r.t. beta_c
%                     | same template than mem_d00Ts_duzj0
%
% mem_d00Ts_dtaus0  : (4 x 4 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_d00Ts_dtaus0(i,j,k,is,is0)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the component X/Y/Z associated to tau0(s0)
%                     | is : the current curvilinear abscissa index
%                     | is0 : the loaded point abscissa index
%
% mem_d00Ts_dfs0    : (4 x 4 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_d00Ts_dtaus0
%
% ======================================================================= %
% ======================================================================= %



    % ====== Members ======
    properties

        mem_d00Ts_duzj0       = [] ;
        mem_d00Ts_dm0j0       = [] ;
        mem_d00Ts_dn0j0       = [] ;
        mem_d00Ts_dtcj        = [] ;
        mem_d00Ts_dbcj        = [] ;
        mem_d00Ts_dtaus0      = [] ;
        mem_d00Ts_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00TS(varargin)
            if nargin == 7

                mc.mem_d00Ts_duzj0    = varargin{1} ;
                mc.mem_d00Ts_dm0j0    = varargin{2} ;
                mc.mem_d00Ts_dn0j0    = varargin{3} ;
                mc.mem_d00Ts_dtcj     = varargin{4} ;
                mc.mem_d00Ts_dbcj     = varargin{5} ;
                mc.mem_d00Ts_dtaus0   = varargin{6} ;
                mc.mem_d00Ts_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Ts_duzj0 , mem_d00Ts_dm0j0 , mem_d00Ts_dn0j0 , ...
                  mem_d00Ts_dtcj , mem_d00Ts_dbcj , mem_d00Ts_dtaus0 , ...
                  mem_d00Ts_dfs0] = Get_All_MemD00TS(mc)

            mem_d00Ts_duzj0   = mc.mem_d00Ts_duzj0      ;
            mem_d00Ts_dm0j0   = mc.mem_d00Ts_dm0j0      ;
            mem_d00Ts_dn0j0   = mc.mem_d00Ts_dn0j0      ;
            mem_d00Ts_dtcj    = mc.mem_d00Ts_dtcj       ;
            mem_d00Ts_dbcj    = mc.mem_d00Ts_dbcj       ;
            mem_d00Ts_dtaus0  = mc.mem_d00Ts_dtaus0     ;
            mem_d00Ts_dfs0    = mc.mem_d00Ts_dfs0       ;
           
        end
    
    end
end