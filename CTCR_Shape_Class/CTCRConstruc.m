classdef CTCRConstruc

% ======================================================================= %
% ============================ ctcr_construc ============================ %
% ======================================================================= %
%
% nbP           : Number of discretization points
%
% K             : Stiffness matrix
%
% vect_ind_iT   : Matrix filled with the discrezisation index corresponding
% to the discontinuity points of the tubes
% 
% ind_origin    : Index corresponding to the base frame origin
% 
% vect_z        : Vector of the points curvilinear distances from the base frame
% 
% vect_res      : Vector of the distances between one point and the next one
% 
% ui_init       : Matrix of the tubes curvatures before the assembly
%
% pos_init      : Matrix of the tubes positions before the assembly
%
% vect_tau_dist : Matrix of the torque applied to the CTCR due to the constant distributed torque
%
% vect_f_dist   : Matrix of the force applied to the CTCR due to the constant distributed torque
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
        vect_tau_dist_res   = [] ;
        vect_f_dist         = [] ;
        vect_f_dist_res     = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = CTCRConstruc(varargin)
            if nargin == 12

                mc.nbP                  = varargin{1} ;
                mc.K                    = varargin{2} ;
                mc.vect_ind_iT          = varargin{3} ;
                mc.ind_origin           = varargin{4} ;
                mc.vect_z               = varargin{5} ;
                mc.vect_res             = varargin{6} ;
                mc.ui_init              = varargin{7} ;
                mc.pos_init             = varargin{8} ;
                mc.vect_tau_dist        = varargin{9} ;
                mc.vect_tau_dist_res    = varargin{10} ;
                mc.vect_f_dist          = varargin{11} ;
                mc.vect_f_dist_res      = varargin{12} ;

            end
        end


        % ====== Get all ======
        function [nbP , K , vect_ind_iT , ind_origin , vect_z , vect_res , ...
                ui_init , pos_init , vect_tau_dist , vect_tau_dist_res , ...
                vect_f_dist , vect_f_dist_res] = Get_All_CTCRConstruc(mc)

            nbP                 = mc.nbP ;
            K                   = mc.K ;
            vect_ind_iT         = mc.vect_ind_iT ;
            ind_origin          = mc.ind_origin ;
            vect_z              = mc.vect_z ;
            vect_res            = mc.vect_res ;
            ui_init             = mc.ui_init ;
            pos_init            = mc.pos_init ;
            vect_tau_dist       = mc.vect_tau_dist ;
            vect_tau_dist_res   = mc.vect_tau_dist_res ;
            vect_f_dist         = mc.vect_f_dist ;
            vect_f_dist_res     = mc.vect_f_dist_res ;
           
        end
    
    end
end
