classdef MemDinvM

% ======================================================================= %
% =============================== mem_dinvM ================================ %
% ======================================================================= %
%
% This class contains all the partial derivatives of inv_M(s)
%
% mem_dinv_M_dn0    : (6 x 6 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | mem_dinv_M_dn0(i,j,k,is)
%                     with
%                     | i ∊ [1 , 6]     : the row of the matrix inv_M(s) 
%                     | j ∊ [1 , 6]     : the column of the matrix inv_M(s)
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to n0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dinv_M_dm0    : (6 x 6 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | same template than mem_dinv_M_dn0
%
% mem_dinv_M_dti    : (6 x 6 x nbT x nbP) Matrix containing the partial derivatives w.r.t. ti
%                     | mem_dinv_M_dti(i,j,k,is)
%                     with
%                     | i ∊ [1 , 6]     : the row of the matrix inv_M(s) 
%                     | j ∊ [1 , 6]     : the column of the matrix inv_M(s)
%                     | k ∊ [1 , nbT]   : the index of the tendon associated to ti
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dinv_M_dtaus0 : (6 x 6 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_dinv_M_dtaus0(i,j,k,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix inv_M(s) 
%                     | j ∊ [1 , 3]     : the column of the matrix inv_M(s)
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dinv_M_dfs0   : (6 x 6 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_dinv_M_dtaus0
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dinv_M_dn0         = [] ;
        mem_dinv_M_dm0         = [] ;
        mem_dinv_M_dti         = [] ;
        mem_dinv_M_dtaus0      = [] ;
        mem_dinv_M_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDinvM(varargin)
            if nargin == 5

                mc.mem_dinv_M_dn0      = varargin{1} ;
                mc.mem_dinv_M_dm0      = varargin{2} ;
                mc.mem_dinv_M_dti      = varargin{3} ;
                mc.mem_dinv_M_dtaus0   = varargin{4} ;
                mc.mem_dinv_M_dfs0     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dinv_M_dn0 , mem_dinv_M_dm0 , mem_dinv_M_dti , ...
                  mem_dinv_M_dtaus0 , mem_dinv_M_dfs0] = Get_All_MemDinvM(mc)

            mem_dinv_M_dn0     = mc.mem_dinv_M_dn0      ;
            mem_dinv_M_dm0     = mc.mem_dinv_M_dm0      ;
            mem_dinv_M_dti     = mc.mem_dinv_M_dti      ;
            mem_dinv_M_dtaus0  = mc.mem_dinv_M_dtaus0   ;
            mem_dinv_M_dfs0    = mc.mem_dinv_M_dfs0     ;
           
        end
    
    end
end