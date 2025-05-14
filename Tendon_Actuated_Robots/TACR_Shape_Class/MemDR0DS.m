classdef MemDR0DS

% ======================================================================= %
% ============================= mem_dR0_ds ============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of dR0(s)_ds
%
% mem_dR0_dn0_ds    : (3 x 3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | mem_dR0_dn0_ds(i,j,k,is)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix dR0(s)_ds 
%                     | j ∊ [1 , 3]     : the column of the matrix dR0(s)_ds
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to v0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dR0_dm0_ds    : (3 x 3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | same template than mem_dR0_dn0_ds
%
% mem_dR0_dti_ds    : (3 x 3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. ti
%                     | mem_dR0_dti_ds(i,j,k,is)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix dR0(s)_ds 
%                     | j ∊ [1 , 3]     : the column of the matrix dR0(s)_ds
%                     | k ∊ [1 , nbT]   : the index of the tendon associated to ti
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dR0_dls0_ds   : (3 x 3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_dR0_dtaus0_ds(i,j,k,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the row of the matrix dR0(s)_ds 
%                     | j ∊ [1 , 3]     : the column of the matrix dR0(s)_ds
%                     | k ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dR0_dfs0_ds   : (3 x 3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_dR0_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dR0_dn0_ds         = [] ;
        mem_dR0_dm0_ds         = [] ;
        mem_dR0_dti_ds         = [] ;
        mem_dR0_dtaus0_ds      = [] ;
        mem_dR0_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDR0DS(varargin)
            if nargin == 5

                mc.mem_dR0_dn0_ds      = varargin{1} ;
                mc.mem_dR0_dm0_ds      = varargin{2} ;
                mc.mem_dR0_dti_ds      = varargin{3} ;
                mc.mem_dR0_dtaus0_ds   = varargin{4} ;
                mc.mem_dR0_dfs0_ds     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dR0_dn0_ds , mem_dR0_dm0_ds , mem_dR0_dti_ds , ...
                  mem_dR0_dtaus0_ds , mem_dR0_dfs0_ds] = Get_All_MemDR0DS(mc)

            mem_dR0_dn0_ds     = mc.mem_dR0_dn0_ds      ;
            mem_dR0_dm0_ds     = mc.mem_dR0_dm0_ds      ;
            mem_dR0_dti_ds     = mc.mem_dR0_dti_ds      ;
            mem_dR0_dtaus0_ds  = mc.mem_dR0_dtaus0_ds   ;
            mem_dR0_dfs0_ds    = mc.mem_dR0_dfs0_ds     ;
           
        end
    
    end
end