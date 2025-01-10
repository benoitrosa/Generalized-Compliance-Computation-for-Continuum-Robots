classdef CTCRConstruc

% ======================================================================= %
% ============================ ctcr_construc ============================ %
% ======================================================================= %
%
% This class contains the robot features related to the model settings
%
% nbP           : (int > 0)         Number of discretization points
% K             : (3 x 3 x nbT)     Matrix containing thhe tubes' stiffness matrices
% vect_ind_iT   : (int) (nbT x 3)   Matrix filled with the discrezisation index corresponding to the discontinuity points of the tubes
% ind_origin    : (int ∊ [1 , nbP]) Index corresponding to the base frame origin
% vect_z        : (1 x nbP)         Vector of the points curvilinear distances from the base frame
% vect_res      : (1 x nbP-1)       Vector of the distances between one point and the next one
% ui_init       : (3 x nbP x nbT)   Matrix of the tubes curvatures before the assembly
% pos_init      : (3 x nbP x nbT)   Matrix of the tubes positions before the assembly
% vect_tau_dist : (3 x nbP)         Matrix of the distributed torque applied on the CTCR
% vect_f_dist   : (3 x nbP)         Matrix of the distributed force applied on the CTCR
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        nbP                 = [] ;
        K                   = [] ;
        vect_ind_iT         = [] ;
        ind_origin          = [] ;
        vect_z              = [] ;
        vect_res            = [] ;
        ui_init             = [] ;
        pos_init            = [] ;
        vect_tau_dist       = [] ;
        vect_f_dist         = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = CTCRConstruc(varargin)
            if nargin == 10

                mc.nbP                  = varargin{1} ;
                mc.K                    = varargin{2} ;
                mc.vect_ind_iT          = varargin{3} ;
                mc.ind_origin           = varargin{4} ;
                mc.vect_z               = varargin{5} ;
                mc.vect_res             = varargin{6} ;
                mc.ui_init              = varargin{7} ;
                mc.pos_init             = varargin{8} ;
                mc.vect_tau_dist        = varargin{9} ;
                mc.vect_f_dist          = varargin{10} ;

            end
        end


        % ====== Get all ======
        function [nbP , K , vect_ind_iT , ind_origin , vect_z , vect_res , ...
                ui_init , pos_init , vect_tau_dist , vect_f_dist] = Get_All_CTCRConstruc(mc)

            nbP                 = mc.nbP ;
            K                   = mc.K ;
            vect_ind_iT         = mc.vect_ind_iT ;
            ind_origin          = mc.ind_origin ;
            vect_z              = mc.vect_z ;
            vect_res            = mc.vect_res ;
            ui_init             = mc.ui_init ;
            pos_init            = mc.pos_init ;
            vect_tau_dist       = mc.vect_tau_dist ;
            vect_f_dist         = mc.vect_f_dist ;
           
        end
    
    end
end
