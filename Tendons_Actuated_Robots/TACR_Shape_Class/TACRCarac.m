classdef TACRCarac

% ======================================================================= %
% ============================= tacr_carac ============================== %
% ======================================================================= %
%
% This class contains the robot features
%
% nbT       : (int > 0)             Number of tendons
% nbD       : (int > 0)             Number of disks
% L         : (float)               Length of the robot [m]
% Li        : (float) (1 x nbT)     Lengths of the tendons [m]
% Di        : (float) (1 x nbD)     Curvilinear position of the disks [m]
% E         : (float)               Young modulus [Pa]
% nu        : (float)               Poisson's ratio
% rad       : (float)               Backbone radius [m]
% rho       : (float)               Equivalent mass density [kg/m^3]
% td_offset : (float)               Tendon offset [m]
% td_angle  : (1 x nbT)             Tendon angle [rad] (index i for tendon i)
% 
% ============ Dependent parameter computations ============ %
% 
% sh_mod    : (float)               Shear modulus [Pa]
% area      : (float)               Area of the section [m^2]
% I         : (float)               Cross-sectional quadratic moment [m^4]
% J         : (float)               Polar quadratic moment of the section [m^4]
% Kbt       : (3 x 3)               Stiffness matrix for bending and torsion [N.m^2]
% Kse       : (3 x 3)               Stiffness matrix for shear and extension [N]
%
% ======================================================================= %
% ======================================================================= %

    % ====== Members ======
    properties

        nbT         = [] ;
        nbD         = [] ;
        L           = [] ;
        Li          = [] ;
        Di          = [] ;
        E           = [] ;
        nu          = [] ;
        rad         = [] ;
        rho         = [] ;
        td_offset   = [] ;
        td_angle    = [] ;
    
        % ============ Dependent parameter computations ============ %

        sh_mod      = [] ;
        area        = [] ;
        I           = [] ;
        J           = [] ;
        Kbt         = [] ;
        Kse         = [] ;
        
    end

    methods

        % ====== Constructor ======
        function mc = TACRCarac(varargin)
            if nargin == 11

                mc.nbT          = varargin{1}  ;
                mc.nbD          = varargin{2}  ;
                mc.L            = varargin{3}  ;
                mc.Li           = varargin{4}  ;
                mc.Di           = varargin{5}  ;
                mc.E            = varargin{6}  ;
                mc.nu           = varargin{7}  ;
                mc.rad          = varargin{8}  ;
                mc.rho          = varargin{9}  ;
                mc.td_offset    = varargin{10} ;
                mc.td_angle     = varargin{11} ;
            
                
                % ============ Dependent parameter computations ============ %
        
                mc.sh_mod       = mc.E*(1 + mc.nu)/2 ;
                mc.area         = pi*mc.rad^2 ;
                mc.I            = pi*mc.rad^4/4 ; 
                mc.J            = 2*mc.I ;
                mc.Kbt          = diag([mc.E*mc.I, mc.E*mc.I, mc.sh_mod*mc.J]) ; 
                mc.Kse          = diag([mc.sh_mod*mc.area, mc.sh_mod*mc.area, mc.E*mc.area]) ;

            end
        end



        % ====== Get all ======
        function [nbT , nbD , L , Li , Di , E , nu , rad , rho , td_offset , td_angle , ...
                  sh_mod , area , I , J , Kbt , Kse] = Get_All_TACRCarac(mc)

            nbT         = mc.nbT        ;
            nbD         = mc.nbD        ;
            L           = mc.L          ;
            Li          = mc.Li         ;
            Di          = mc.Di         ;
            E           = mc.E          ;
            nu          = mc.nu         ;
            rad         = mc.rad        ;
            rho         = mc.rho        ;
            td_offset   = mc.td_offset  ;
            td_angle    = mc.td_angle   ;
        
            % ============ Dependent parameter computations ============ %
    
            sh_mod      = mc.sh_mod ;
            area        = mc.area   ;
            I           = mc.I      ; 
            J           = mc.J      ;
            Kbt         = mc.Kbt    ;
            Kse         = mc.Kse    ;

        end
    
        
    end
end




