classdef TACRConstruc

% ======================================================================= %
% ============================ tacr_construc ============================ %
% ======================================================================= %
%
% This class contains the robot features related to the model settings
%
% nbP           : (int > 0)             Number of discretization points
% vect_z        : (1 x nbP)             Vector of the points curvilinear distances from the base frame
% vect_res      : (1 x nbP-1)           Vector of the distances between one point and the next one
% vect_ind_iT   : (int) (nbT x 1)       Vector of the discrezisation index corresponding to the end of each tendon
% vect_ind_iD   : (int) (nbT x 1)       Vector of the discrezisation index corresponding to the position of each disk
% mem_ri        : (3 x nbT x nbP)       Matrix containing the values of r_i(s)
% mem_dri_ds    : (3 x nbT x nbP)       Matrix containing the values of dr_i(s) / ds
% mem_ddri_ds   : (3 x nbT x nbP)       Matrix containing the derivative of d^2 r_i(s) / ds^2
% mem_u0_init   : (3 x nbP)             Matrix containing the values of u_0(s)
% mem_v0_init   : (3 x nbP)             Matrix containing the values of v_0(s)
% mem_ui_init   : (3 x nbT x nbP)       Matrix containing the values of u_i(s)
% mem_p0_init   : (3 x nbP)             Matrix containing the values of p^*_0(s)
% mem_pi_init   : (3 x nbT x nbP)       Matrix containing the values of p^*_i(s)
% mem_p0        : (3 x nbP)             Matrix containing the values of p_0(s)
% mem_pi        : (3 x nbT x nbP)       Matrix containing the values of p_i(s)
% mem_R0_init   : (3 x 3 x nbP)         Matrix containing the values of R_0(s)
% mem_Ri_init   : (3 x 3 x nbT x nbP)   Matrix containing the values of R_i(s)
% vect_tau_dist : (3 x nbP)             Matrix of the distributed torque applied on the TACR
% vect_f_dist   : (3 x nbP)             Matrix of the distributed force applied on the TACR
%
% ======================================================================= %
% ======================================================================= %


    % ====== Members ======
    properties

        nbP                 = [] ;
        vect_z              = [] ;
        vect_res            = [] ;
        vect_ind_iT         = [] ;
        vect_ind_iD         = [] ;
        mem_ri              = [] ;
        mem_dri_ds          = [] ;
        mem_ddri_ds         = [] ;
        mem_u0_init         = [] ;
        mem_v0_init         = [] ;
        mem_ui_init         = [] ;
        mem_p0_init         = [] ;
        mem_pi_init         = [] ;
        mem_p0              = [] ;
        mem_pi              = [] ;
        mem_R0_init         = [] ;
        mem_Ri_init         = [] ;
        vect_tau_dist       = [] ;
        vect_f_dist         = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = TACRConstruc(varargin)
            if nargin == 19

                mc.nbP                  = varargin{1}    ;
                mc.vect_z               = varargin{2}    ;
                mc.vect_res             = varargin{3}    ;
                mc.vect_ind_iT          = varargin{4}    ;
                mc.vect_ind_iD          = varargin{5}    ;
                mc.mem_ri               = varargin{6}    ;
                mc.mem_dri_ds           = varargin{7}    ;
                mc.mem_ddri_ds          = varargin{8}    ;
                mc.mem_u0_init          = varargin{9}    ;
                mc.mem_v0_init          = varargin{10}   ;
                mc.mem_ui_init          = varargin{11}   ;
                mc.mem_p0_init          = varargin{12}   ;
                mc.mem_pi_init          = varargin{13}   ;
                mc.mem_p0               = varargin{14}   ;
                mc.mem_pi               = varargin{15}   ;
                mc.mem_R0_init          = varargin{16}   ;
                mc.mem_Ri_init          = varargin{17}   ;
                mc.vect_tau_dist        = varargin{18}   ;
                mc.vect_f_dist          = varargin{19}   ;

            end
        end


        % ====== Get all ======
        function [nbP           , vect_z            , vect_res    , ...
                  vect_ind_iT   , vect_ind_iD       , ...
                  mem_ri        , mem_dri_ds        , mem_ddri_ds , ...
                  mem_u0_init   , mem_v0_init       , mem_ui_init , ...
                  mem_p0_init   , mem_pi_init       , ...
                  mem_p0        , mem_pi            , ...
                  mem_R0_init   , mem_Ri_init       , ...
                  vect_tau_dist , vect_f_dist ...
                  ] = Get_All_TACRConstruc(mc)

            nbP                 = mc.nbP                ;
            vect_z              = mc.vect_z             ;
            vect_res            = mc.vect_res           ;
            vect_ind_iT         = mc.vect_ind_iT        ;
            vect_ind_iD         = mc.vect_ind_iD        ;
            mem_ri              = mc.mem_ri             ;
            mem_dri_ds          = mc.mem_dri_ds         ;
            mem_ddri_ds         = mc.mem_ddri_ds        ;
            mem_u0_init         = mc.mem_u0_init        ;
            mem_v0_init         = mc.mem_v0_init        ;
            mem_ui_init         = mc.mem_ui_init        ;
            mem_p0_init         = mc.mem_p0_init        ;
            mem_pi_init         = mc.mem_pi_init        ;
            mem_p0              = mc.mem_p0             ;
            mem_pi              = mc.mem_pi             ;
            mem_R0_init         = mc.mem_R0_init        ;
            mem_Ri_init         = mc.mem_Ri_init        ;
            vect_tau_dist       = mc.vect_tau_dist      ;
            vect_f_dist         = mc.vect_f_dist        ;           
           
        end
    
    end
end