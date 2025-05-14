function [tacr_construc_new , tacr_load_new , mem_is0] = Add_Force_var(prc_s0 , delta_f0 , tacr_construc , tacr_load)
    
% ======================================================================= %
% ======================================================================= %
%
% This function computes the index of the loaded points and modified the robot 
% features tacr_construc to includes the force variations
%
% ====================
% ====== INPUTS ====== 
%
% prc_s0                : (nbF x 1)     Vector with the curvilinear abscissa of the loaded points in pourcent of the TACR length
% delta_f0              : (nbF x 3)     Matrix with the force variaitons vectors (row i for force i)
%                       | with nbF : the number of forces applied on the TACR
% tacr_construc         : (class)       Robot features related to the model settings
% tacr_load             : (class)       Robot loads
%
% ====================
% ===== OUTPUTS ====== 
%
% tacr_construc_new     : (class)       Robot features related to the model settings after including the force variations
% tacr_load_new         : (class)       Robot loads after including the force variations
% mem_is0               : (nbF x 1)     Vector of the index of the loaded points 
%                       | with nbF : the number of forces applied on the TACR
%
% ======================================================================= %
% ======================================================================= %


    % ======== Preparing ======== % 
    tacr_construc_new   = tacr_construc ;
    tacr_load_new       = tacr_load ;
    mem_is0             = zeros(length(prc_s0),1) ;
    mem_s0              = zeros(length(prc_s0),1) ;
    
    % For each vector force, find the corresponding discretization point
    for i_f = 1:length(prc_s0)
    
        % ========= Loaded points ========= %
        mem_des_s0      = tacr_construc.vect_z(end)*prc_s0(i_f)/100 ;
        mem_is0(i_f)    = find(tacr_construc.vect_z(:) >= mem_des_s0,1,'first') ;
        mem_s0(i_f)     = tacr_construc.vect_z(mem_is0(i_f)) ;
        
        % ========= Add vectors forces in tacr_construc ========= %
        if mem_is0(i_f) == tacr_construc.nbP
            tacr_load_new.f_tip(1:3,1)                     = tacr_load_new.f_tip(1:3,1) + delta_f0(i_f,1:3)' ;
        else
            tacr_construc_new.vect_f_dist(:,mem_is0(i_f))  = tacr_construc_new.vect_f_dist(:,mem_is0(i_f)) ...
                                                              + delta_f0(i_f,1:3)'/tacr_construc_new.vect_res(mem_is0(i_f)) ;
        end

    end
end
