classdef MemCJ


% ======================================================================= %
% =============================== mem_CJ ================================ %
% ======================================================================= %
%
% This class contains the Generalized Compliance Matrix Cs0(s) 
% and the Joint Jacobian J(s)
%
% mem_Cs0   = (6 x 6 x nbP x nbP) Generalized Compliance Matrix    
%             | mem_CJ.mem_Cs0(:,:,is,is0)  
%             where 
%             | is   : index of the discretized s
%             | is0  : index of the discretized s0
%
% mem_J     = (6 x nbT x nbP) Joint Jacobian
%             | mem_CJ.mem_J(:,:,is)
%             where
%             | is   : index of the discretized s
%
% ======================================================================= %
% ======================================================================= %



    % ====== Members ======
    properties

        mem_Cs0 = [] ;
        mem_J   = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemCJ(varargin)
            if nargin == 2

                mc.mem_Cs0  = varargin{1} ;
                mc.mem_J    = varargin{2} ;
                
            end
        end

        % ====== Get all ======
        function [mem_Cs0 , mem_J] ...
                = Get_All_MemCJ(mc)

            mem_Cs0 = mc.mem_Cs0    ;
            mem_J   = mc.mem_J      ;

        end
    
    end
end