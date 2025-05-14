classdef MemDM0

% ======================================================================= %
% =============================== mem_dm0 =============================== %
% ======================================================================= %
%
% This class contains all the partial derivatives of m0(s)
%
% mem_dm0_dn0       : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. n0(0)
%                     | mem_dm0_dn0(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of m0(s)
%                     | j ∊ [1 , 3]     : the component X/Y/Z of n0(0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dm0_dm0       : (3 x 3 x nbP) Matrix containing the partial derivatives w.r.t. m0(0)
%                     | same template than mem_dm0_dn0
%
% mem_dm0_dti       : (3 x nbT x nbP) Matrix containing the partial derivatives w.r.t. t_i
%                     | mem_dm0_dti(i,j,is)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of m0(s)
%                     | j ∊ [1 , nbT]   : the index of the tendon associated to ti
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%
% mem_dm0_dtaus0    : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. tau0(s0)
%                     | mem_dm0_dtaus0(i,j,is,is0)
%                     with
%                     | i ∊ [1 , 3]     : the component X/Y/Z of m0(s)
%                     | j ∊ [1 , 3]     : the component X/Y/Z associated to tau0(s0)
%                     | is ∊ [1 , nbP]  : the current curvilinear abscissa index
%                     | is0 ∊ [1 , nbP] : the loaded point abscissa index
%
% mem_dm0_dfs0      : (3 x 3 x nbP x nbP) Matrix containing the partial derivatives w.r.t. f0(s0)
%                     | same template than mem_dm0_dtaus0
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_dm0_dn0         = [] ;
        mem_dm0_dm0         = [] ;
        mem_dm0_dti         = [] ;
        mem_dm0_dtaus0      = [] ;
        mem_dm0_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDM0(varargin)
            if nargin == 5

                mc.mem_dm0_dn0      = varargin{1} ;
                mc.mem_dm0_dm0      = varargin{2} ;
                mc.mem_dm0_dti      = varargin{3} ;
                mc.mem_dm0_dtaus0   = varargin{4} ;
                mc.mem_dm0_dfs0     = varargin{5} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dm0_dn0 , mem_dm0_dm0 , mem_dm0_dti , ...
                  mem_dm0_dtaus0 , mem_dm0_dfs0] = Get_All_MemDM0(mc)

            mem_dm0_dn0     = mc.mem_dm0_dn0    ;
            mem_dm0_dm0     = mc.mem_dm0_dm0    ;
            mem_dm0_dti     = mc.mem_dm0_dti    ;
            mem_dm0_dtaus0  = mc.mem_dm0_dtaus0 ;
            mem_dm0_dfs0    = mc.mem_dm0_dfs0   ;
           
        end
    
    end
end
