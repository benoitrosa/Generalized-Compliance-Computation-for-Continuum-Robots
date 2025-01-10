classdef CTCRCarac



% ======================================================================= %
% ============================= ctcr_carac ============================== %
% ======================================================================= %
%
% This class contains the robot features
%
% nbT           : (int > 0)         Number of tubes of the CTCR
% stiff         : (1 x nbT) [N.m2]  Vector of transversal bending stiffness (index i for tube i)
% coeff_poiss   : (float)           Poisson's ratio (the same for all the tubes)
% Rc            : (1 x nbT) [m]     Vector of the radii of curvature of the tubes (index i for tube i)
% Lr            : (1 x nbT) [m]     Vector of the straight lengths of the tubes (index i for tube i)
% Lc            : (1 x nbT) [m]     Vector of the curved lengths of the tubes (index i for tube i)
% L             : (1 x nbT) [m]     Vector of the total lengths of the tubes (index i for tube i)
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        nbT         = [] ;
        stiff       = [] ;
        coeff_poiss = [] ;
        Rc          = [] ;
        Lr          = [] ;
        Lc          = [] ;
        L           = [] ;
        
    end

    methods

        % ====== Constructor ======
        function mc = CTCRCarac(varargin)
            if nargin == 7

                mc.nbT          = varargin{1} ;
                mc.stiff        = varargin{2} ;
                mc.coeff_poiss  = varargin{3} ;
                mc.Rc           = varargin{4} ;
                mc.Lr           = varargin{5} ;
                mc.Lc           = varargin{6} ;
                mc.L            = varargin{7} ;

            end
        end
    

        % ====== Get all ======
        function [nbT , stiff , coeff_poiss , Rc , Lr , Lc , L] = Get_All_CTCRCarac(mc)

            nbT         = mc.nbT ;
            stiff       = mc.stiff ;
            coeff_poiss = mc.coeff_poiss ;
            Rc          = mc.Rc ;
            Lr          = mc.Lr ;
            Lc          = mc.Lc ;
            L           = mc.L ;

        end
        
    end
end