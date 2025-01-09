classdef MemBVP

% ======================================================================= %
% =============================== mem_bvp =============================== %
% ======================================================================= %
%
% This class contains the memories of the BVP variables 
%
% mem_y     : Matrix memory of the y(s) values
% mem_ys    : Matrix memory of the d_y_ds(s) values
% mem_u0    : Matrix memory of the u0(s) values
% mem_T     : Matrix memory of the B0(0)Ts values
% mem_tBu   : Matrix of the tilde_Bu(s) values
% 
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_y           = [] ;
        mem_ys          = [] ;

        mem_uixy        = [] ;
        mem_u0          = [] ;

        mem_T           = [] ;

        mem_inv_sum_Ki  = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemBVP(varargin)
            if nargin == 6

                mc.mem_y            = varargin{1} ;
                mc.mem_ys           = varargin{2} ;
                mc.mem_u0           = varargin{3} ;
                mc.mem_uixy         = varargin{4} ;
                mc.mem_T            = varargin{5} ;
                mc.mem_inv_sum_Ki   = varargin{6} ;
                
            end

        end

        % ====== Get all ======
        function [mem_y , mem_ys , mem_u0 , mem_uixy , mem_T , mem_inv_sum_Ki] = Get_All_MemBVP(mc)

            mem_y           = mc.mem_y ;
            mem_ys          = mc.mem_ys ;
            mem_u0          = mc.mem_u0 ;
            mem_uixy        = mc.mem_uixy ;
            mem_T           = mc.mem_T ;
            mem_inv_sum_Ki  = mc.mem_inv_sum_Ki ;
           
        end
    
    end
end