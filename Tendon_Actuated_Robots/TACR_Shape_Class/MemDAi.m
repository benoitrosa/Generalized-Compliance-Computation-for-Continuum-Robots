classdef MemDAi

% ======================================================================= %
% =============================== mem_dAi =============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of Ai(s)
%
% mem_dAi_dn0           : (3 x 3 x nbT x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                         | mem_dAi_dn0_ds(i,j,k,l,is)
%                         with
%                         | i ∊ [1 , 3]     : the row of the matrix Ai(s)
%                         | j ∊ [1 , 3]     : the column of the matrix Ai(s)
%                         | k ∊ [1 , nbT]   : the index of the tendon associated to Ai
%                         | l ∊ [1 , 3]     : the component X/Y/Z of n0(0)
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dAi_dm0           : (3 x 3 x nbT x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                         | same template than mem_dAi_dn0_ds
%
% mem_dAi_dti           : (3 x nbT x nbT x nbP) Matrix containing the partial derivatives w.r.t. t_i
%                         | mem_dAi_dti_ds(i,j,k,l,is)
%                         with
%                         | i ∊ [1 , 3]     : the row of the matrix Ai(s)
%                         | j ∊ [1 , 3]     : the column of the matrix Ai(s)
%                         | k ∊ [1 , nbT]   : the index of the tendon associated to Ai
%                         | l ∊ [1 , nbT]   : the index of the tendon associated to ti
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dAi_dtaus0        : (3 x 3 x nbT x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                         | mem_dAi_dtaus0_ds(i,j,k,l,is,is0)
%                         with
%                         | i ∊ [1 , 3]     : the row of the matrix Ai(s)
%                         | j ∊ [1 , 3]     : the column of the matrix Ai(s)
%                         | k ∊ [1 , nbT]   : the index of the tendon associated to Ai
%                         | l ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                         | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                         | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dAi_dfs0          : (3 x 3 x nbT x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                         | same template than mem_dAi_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dAi_dn0         = [] ;
        mem_dAi_dm0         = [] ;
        mem_dAi_dti         = [] ;
        mem_dAi_dtaus0      = [] ;
        mem_dAi_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDAi(varargin)
            if nargin == 5

                mc.mem_dAi_dn0      = varargin{1} ;
                mc.mem_dAi_dm0      = varargin{2} ;
                mc.mem_dAi_dti      = varargin{3} ;
                mc.mem_dAi_dtaus0   = varargin{4} ;
                mc.mem_dAi_dfs0     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dAi_dn0    , mem_dAi_dm0   , mem_dAi_dti , ...
                  mem_dAi_dtaus0 , mem_dAi_dfs0] = Get_All_MemDAi(mc)

            mem_dAi_dn0     = mc.mem_dAi_dn0    ;
            mem_dAi_dm0     = mc.mem_dAi_dm0    ;
            mem_dAi_dti     = mc.mem_dAi_dti    ;
            mem_dAi_dtaus0  = mc.mem_dAi_dtaus0 ;
            mem_dAi_dfs0    = mc.mem_dAi_dfs0   ;
           
        end
    
    end
end
