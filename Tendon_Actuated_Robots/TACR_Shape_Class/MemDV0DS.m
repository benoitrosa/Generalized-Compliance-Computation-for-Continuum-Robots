classdef MemDV0DS

% ======================================================================= %
% =============================== mem_dv0_ds ============================ %
% ======================================================================= %
%
% This class contains all the partial derivatives of dv0(s)_ds
%
% mem_dv0_dn0_ds    : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | mem_dv0_dn0_ds(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of dv0(s)_ds
%                     | j ∊ [1 , 3]     : the component X/Y/Z of n0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dv0_dm0_ds    : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | same template than mem_dv0_dn0_ds
%
% mem_dv0_dti_ds    : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. ti
%                     | mem_dv0_dti_ds(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of dv0(s)_ds
%                     | j ∊ [1 , nbT]   : the index of the tendon associated to ti
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dv0_dtaus0_ds : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_dv0_dtaus0_ds(i,j,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of dv0(s)_ds
%                     | j ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dv0_dfs0_ds   : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_dv0_dtaus0_ds
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dv0_dn0_ds         = [] ;
        mem_dv0_dm0_ds         = [] ;
        mem_dv0_dti_ds         = [] ;
        mem_dv0_dtaus0_ds      = [] ;
        mem_dv0_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDV0DS(varargin)
            if nargin == 5

                mc.mem_dv0_dn0_ds      = varargin{1} ;
                mc.mem_dv0_dm0_ds      = varargin{2} ;
                mc.mem_dv0_dti_ds      = varargin{3} ;
                mc.mem_dv0_dtaus0_ds   = varargin{4} ;
                mc.mem_dv0_dfs0_ds     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dv0_dn0_ds , mem_dv0_dm0_ds , mem_dv0_dti_ds , ...
                  mem_dv0_dtaus0_ds , mem_dv0_dfs0_ds] = Get_All_MemDV0DS(mc)

            mem_dv0_dn0_ds     = mc.mem_dv0_dn0_ds    ;
            mem_dv0_dm0_ds     = mc.mem_dv0_dm0_ds    ;
            mem_dv0_dti_ds     = mc.mem_dv0_dti_ds    ;
            mem_dv0_dtaus0_ds  = mc.mem_dv0_dtaus0_ds ;
            mem_dv0_dfs0_ds    = mc.mem_dv0_dfs0_ds   ;
           
        end
    
    end
end