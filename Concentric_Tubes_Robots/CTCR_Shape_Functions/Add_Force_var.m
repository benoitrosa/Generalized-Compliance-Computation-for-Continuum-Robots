function [ctcr_construc_new,ctcr_load_new,mem_is0] = Add_Force_var(prc_s0,delta_f0,ctcr_construc,ctcr_load)
    
% ======================================================================= %
% ======================================================================= %
%
% This function computes the index of the loaded points and modified the robot 
% features ctcr_construc to includes the force variations
%
% ====================
% ====== INPUTS ====== 
%
% prc_s0                : (nbF x 1)     Vector with the curvilinear abscissa of the loaded points in pourcent of the CTCR length
% delta_f0              : (nbF x 3)     Matrix with the force variaitons vectors (row i for force i)
%                       | with nbF : the number of forces applied on the CTCR
% ctcr_construc         : (class)       Robot features related to the model settings
% ctcr_load             : (class)       Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% ctcr_construc_new     : (class)       Robot features related to the model settings after including the force variations
% ctcr_load_new         : (class)       Robot loads after including the force variations
% mem_is0               : (nbF x 1)     Vector of the index of the loaded points 
%                       | with nbF : the number of forces applied on the CTCR
%
% ======================================================================= %
% ======================================================================= %


    % ======== Preparing ======== % 
    ctcr_construc_new   = ctcr_construc ;
    ctcr_load_new       = ctcr_load ;
    mem_is0             = zeros(length(prc_s0),1) ;
    mem_s0              = zeros(length(prc_s0),1) ;
    
    % For each vector force, find the corresponding discretization point
    for i_f = 1:length(prc_s0)
    
        % ========= Loaded points ========= %
        mem_des_s0      = ctcr_construc.vect_z(end)*prc_s0(i_f)/100 ;
        mem_is0(i_f)    = find(ctcr_construc.vect_z(:) >= mem_des_s0,1,'first') ;
        mem_s0(i_f)     = ctcr_construc.vect_z(mem_is0(i_f)) ;
        
        % ========= Add vectors forces in ctcr_construc ========= %
        if mem_is0(i_f) == ctcr_construc.nbP
            ctcr_load_new.f_tip(1:3,1)                     = ctcr_load_new.f_tip(1:3,1) + delta_f0(i_f,1:3)' ;
        else
            ctcr_construc_new.vect_f_dist(:,mem_is0(i_f))  = ctcr_construc_new.vect_f_dist(:,mem_is0(i_f)) ...
                                                              + delta_f0(i_f,1:3)'/ctcr_construc_new.vect_res(mem_is0(i_f)) ;
        end

    end
end
