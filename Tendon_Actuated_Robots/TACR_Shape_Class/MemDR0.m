classdef MemDR0

% ======================================================================= %
% =============================== mem_dR0 =============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of R0(s)
%
% mem_dR0_dn0       : (3 x 3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | mem_dR0_dn0(i,j,k,is)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix R0(s) 
%                     | j ∊ [1 , 3]     : the column of the matrix R0(s)
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to n0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dR0_dm0       : (3 x 3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | same template than mem_dR0_dn0
%
% mem_dR0_dti       : (3 x 3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. ti
%                     | mem_dR0_dti(i,j,k,is)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix R0(s) 
%                     | j ∊ [1 , 3]     : the column of the matrix R0(s)
%                     | k ∊ [1 , nbT]   : the index of the tendon associated to ti
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dR0_dtaus0    : (3 x 3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_dR0_dtaus0(i,j,k,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix R0(s) 
%                     | j ∊ [1 , 3]     : the column of the matrix R0(s)
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dR0_dfs0      : (3 x 3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_dR0_dtaus0
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dR0_dn0         = [] ;
        mem_dR0_dm0         = [] ;
        mem_dR0_dti         = [] ;
        mem_dR0_dtaus0      = [] ;
        mem_dR0_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDR0(varargin)
            if nargin == 5

                mc.mem_dR0_dn0      = varargin{1} ;
                mc.mem_dR0_dm0      = varargin{2} ;
                mc.mem_dR0_dti      = varargin{3} ;
                mc.mem_dR0_dtaus0   = varargin{4} ;
                mc.mem_dR0_dfs0     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dR0_dn0 , mem_dR0_dm0 , mem_dR0_dti , ...
                  mem_dR0_dtaus0 , mem_dR0_dfs0] = Get_All_MemDR0(mc)

            mem_dR0_dn0     = mc.mem_dR0_dn0      ;
            mem_dR0_dm0     = mc.mem_dR0_dm0      ;
            mem_dR0_dti     = mc.mem_dR0_dti      ;
            mem_dR0_dtaus0  = mc.mem_dR0_dtaus0   ;
            mem_dR0_dfs0    = mc.mem_dR0_dfs0     ;
           
        end
    
    end
end