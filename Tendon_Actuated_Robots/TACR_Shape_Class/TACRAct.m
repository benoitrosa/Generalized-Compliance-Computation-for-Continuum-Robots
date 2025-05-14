classdef TACRAct


% ======================================================================= %
% ============================== tacr_act =============================== %
% ======================================================================= %
%
% This class contains the robot actuation
%
% tau    : (1 x nbT) [N]     Vector of the tension applied to the tendons
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        ti      = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = TACRAct(varargin)
            if nargin == 1

                mc.ti   = varargin{1} ;

            end
        end

        % ====== Get all ======
        function ti = Get_All_TACRAct(mc)

            ti      = mc.ti ;
           
        end
    
    end
end