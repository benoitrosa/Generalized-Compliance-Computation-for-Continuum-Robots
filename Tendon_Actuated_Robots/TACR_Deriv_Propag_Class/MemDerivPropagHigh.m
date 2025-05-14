classdef MemDerivPropagHigh


% ======================================================================= %
% ======================= mem_deriv_propag_high ========================= %
% ======================================================================= %
%
% This class contains the High-Level partial derivatives Ex and Bx
%
% mem_B     = (6 x 6+nbT)           Partial derivatives of the residual b w.r.t yu(0) and ti
%             | mem_deriv_propag_high.mem_B(:,id)   
%             where
%             | id ∊ [1     , 6]        : refers to the partial derivatives w.r.t yu(0)
%             | id ∊ [7 , nbT]          : refers to the partial derivatives w.r.t ti
%
% mem_Bws0  = (6 x 6 x nbP)         Partial derivatives of the residual b w.r.t w0(s0)
%             | mem_deriv_propag_high.mem_Bws0(:,id,is0)   
%             where
%             | id ∊ [1 , 6]            : refers to the partial derivatives w.r.t w0(s0)
%             | is0                     : index of the discretized s0
%
% mem_E     = (6 x 6+nbT x nbP)           Partial derivatives of the rigid tranformation T0(s) w.r.t yu(0) and ti
%             | mem_deriv_propag_high.mem_E(:,id,is)   
%             where
%             | id ∊ [1     , 6]        : refers to the partial derivatives w.r.t yu(0)
%             | id ∊ [7 , nbT]          : refers to the partial derivatives w.r.t ti
%             | is                      : index of the discretized s
%
% mem_Ews0  = (6 x 6 x nbP x nbP)   Partial derivatives of the rigid tranformation T0(s) w.r.t w0(s0)
%             | mem_deriv_propag_high.mem_Ews0(:,id,is,is0)   
%             where
%             | id ∊ [1 , 6]            : refers to the partial derivatives w.r.t w0(s0)
%             | is                      : index of the discretized s
%             | is0                     : index of the discretized s0
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        mem_B       = [] ;
        mem_Bws0    = [] ;
        mem_E       = [] ;
        mem_Ews0    = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDerivPropagHigh(varargin)
            if nargin == 4

                mc.mem_B        = varargin{1} ;
                mc.mem_Bws0     = varargin{2} ;
                mc.mem_E        = varargin{3} ;
                mc.mem_Ews0     = varargin{4} ;
                
            end
        end

        % ====== Get all ======
        function [mem_B , mem_Bws0 , mem_E , mem_Ews0] ...
                = Get_All_MemDerivPropagHigh(mc)

            mem_B       = mc.mem_B          ;
            mem_Bws0    = mc.mem_Bws0       ;
            mem_E       = mc.mem_E          ;
            mem_Ews0    = mc.mem_Ews0       ;

        end
    
    end
end