classdef MemD00RS

% ======================================================================= %
% ============================== mem_d00Rs ============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of p0(s)
%
% mem_d00Rs_duzj0   : (3 x 3 x nbT x nbP) matrix containing the partial derivatives w.r.t. uz(0)
%                     | mem_d00Rs_duzj0(i,j,k,is)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the index of the tube associated to uzj(0)
%                     | is : the current curvilinear abscissa index
%
% mem_d00Rs_dm0j0   : (3 x 3 x 3 x nbP) matrix containing the partial derivatives w.r.t. m0(0)
%                     | mem_d00Rs_dm0j0(i,j,k,is)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the component X/Y/Z associated to m0(0)
%                     | is : the current curvilinear abscissa index
%
% mem_d00Rs_dn0j0   : (3 x 3 x 3 x nbP) matrix containing the partial derivatives w.r.t. n0(0)
%                     | same template than mem_d00Rs_dm0j0
%
%
% mem_d00Rs_dtcj    : (3 x 3 x nbT x nbP) matrix containing the partial derivatives w.r.t. theta_c
%                     | same template than mem_d00Rs_duzj0
%
% mem_d00Rs_dbcj    : (3 x 3 x nbT x nbP) matrix containing the partial derivatives w.r.t. beta_c
%                     | same template than mem_d00Rs_duzj0
%
% mem_d00Rs_dtaus0  : (3 x 3 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_d00Rs_dtaus0(i,j,k,is,is0)
%                     with
%                     | i : cell row of the rotation matrix R0(s) 
%                     | j : cell column of the rotation matrix R0(s)
%                     | k : the component X/Y/Z associated to tau0(s0)
%                     | is : the current curvilinear abscissa index
%                     | is0 : the loaded point abscissa index
%
% mem_d00Rs_dfs0    : (3 x 3 x 3 x nbP x nbP) matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_d00Rs_dtaus0
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_d00Rs_duzj0       = [] ;
        mem_d00Rs_dm0j0       = [] ;
        mem_d00Rs_dn0j0       = [] ;
        mem_d00Rs_dtcj        = [] ;
        mem_d00Rs_dbcj        = [] ;
        mem_d00Rs_dtaus0      = [] ;
        mem_d00Rs_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00RS(varargin)
            if nargin == 7

                mc.mem_d00Rs_duzj0    = varargin{1} ;
                mc.mem_d00Rs_dm0j0    = varargin{2} ;
                mc.mem_d00Rs_dn0j0    = varargin{3} ;
                mc.mem_d00Rs_dtcj     = varargin{4} ;
                mc.mem_d00Rs_dbcj     = varargin{5} ;
                mc.mem_d00Rs_dtaus0   = varargin{6} ;
                mc.mem_d00Rs_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Rs_duzj0 , mem_d00Rs_dm0j0 , mem_d00Rs_dn0j0 , ...
                  mem_d00Rs_dtcj , mem_d00Rs_dbcj , mem_d00Rs_dtaus0 , ...
                  mem_d00Rs_dfs0] = Get_All_MemD00RS(mc)

            mem_d00Rs_duzj0   = mc.mem_d00Rs_duzj0      ;
            mem_d00Rs_dm0j0   = mc.mem_d00Rs_dm0j0      ;
            mem_d00Rs_dn0j0   = mc.mem_d00Rs_dn0j0      ;
            mem_d00Rs_dtcj    = mc.mem_d00Rs_dtcj       ;
            mem_d00Rs_dbcj    = mc.mem_d00Rs_dbcj       ;
            mem_d00Rs_dtaus0  = mc.mem_d00Rs_dtaus0     ;
            mem_d00Rs_dfs0    = mc.mem_d00Rs_dfs0       ;
           
        end
    
    end
end