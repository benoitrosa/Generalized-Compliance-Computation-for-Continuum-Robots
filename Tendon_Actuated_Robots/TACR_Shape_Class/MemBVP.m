classdef MemBVP

% ======================================================================= %
% =============================== mem_bvp =============================== %
% ======================================================================= %
%
% This class contains the memories of the BVP variables 
%
% mem_y         : (class)               Object memory of the y(s) values
% mem_ys        : (class)               Object memory of the dy(s)_ds values
% mem_dpi_ds    : (3 x nbT x nbP)       Matrix containing the d p_i(s) / ds values
% mem_M         : (6 x 6 x nbP)         Matrix containing the M(s) values
% mem_inv_M     : (6 x 6 x nbP)         Matrix containing the M^-1(s) values
% mem_d         : (3 x nbP)             Matrix containing the d(s) values
% mem_c         : (3 x nbP)             Matrix containing the c(s) values
% mem_m0        : (3 x nbP)             Matrix containing the m_0(s) values
% mem_n0        : (3 x nbP)             Matrix containing the n_0(s) values
% mem_T         : (4 x 4 x nbP)         Matrix containing the T_0(s) values
% mem_Ai        : (3 x 3 x nbT x nbP)   Matrix containing the A_i(s) values
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_y       = [] ;
        mem_ys      = [] ;
        mem_dpi_ds  = [] ;
        mem_M       = [] ;
        mem_inv_M   = [] ;
        mem_d       = [] ;
        mem_c       = [] ;
        mem_m0      = [] ;
        mem_n0      = [] ;
        mem_T       = [] ;
        mem_Ai      = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemBVP(varargin)
            if nargin == 11

                mc.mem_y        = varargin{1}  ;
                mc.mem_ys       = varargin{2}  ;
                mc.mem_dpi_ds   = varargin{3}  ;
                mc.mem_M        = varargin{4}  ;
                mc.mem_inv_M    = varargin{5}  ;
                mc.mem_d        = varargin{6}  ;
                mc.mem_c        = varargin{7}  ;
                mc.mem_m0       = varargin{8}  ;
                mc.mem_n0       = varargin{9}  ;
                mc.mem_T        = varargin{10} ;
                mc.mem_Ai       = varargin{11} ;
                
            end

        end

        % ====== Get all ======
        function [mem_y  , mem_ys , mem_dpi_ds , mem_M , mem_inv_M , ...
                  mem_d  , mem_c , mem_m0 , mem_n0 , mem_T , mem_Ai] = Get_All_MemBVP(mc)

            mem_y       = mc.mem_y      ;
            mem_ys      = mc.mem_ys     ;
            mem_dpi_ds  = mc.mem_dpi_ds ;
            mem_M       = mc.mem_M      ;
            mem_inv_M   = mc.mem_inv_M  ;
            mem_d       = mc.mem_d      ;
            mem_c       = mc.mem_c      ;
            mem_m0      = mc.mem_m0     ;
            mem_n0      = mc.mem_n0     ;
            mem_T       = mc.mem_T      ;
            mem_Ai      = mc.mem_Ai     ;

           
        end
    
    end
end