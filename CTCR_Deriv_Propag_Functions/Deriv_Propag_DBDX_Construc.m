function mem_deriv_propag_high ...
         = Deriv_Propag_DBDX_Construc(...
         bool_J , bool_Cs0 , mem_bvp , mem_deriv_propag_low , ctcr_construc , ctcr_carac , ...
         ctcr_load , bvp_prop , simulation_param , mem_deriv_propag_high)


% EXPLAIN THE FUNCTIONS
%
%
%
%
% 

    % ========================================================== %
    % ================== Getting input values ================== %

    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    
    nbT             = ctcr_carac.nbT ;
    
    tau_tip         = ctcr_load.tau_tip ;
    f_tip           = ctcr_load.f_tip ;

    % ========================================================== %
    % ========================================================== %
    






    % ============================================== %
    % ===================== Bnu ==================== %

    if bool_J

        % ============== Ab1tc ============= %
        for i = 1:nbT-1
        
            mem_deriv_propag_high.mem_B(i,nbT+7:2*nbT+6) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,vect_ind_iT(i,3)) ;
    
        end
    
        % ============== Ab1bc ============== %
        for i = 1:nbT-1
            for j = 1:nbT
                if i==j
                    mem_deriv_propag_high.mem_B(i,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j,vect_ind_iT(i,3)+1) ;
                else
                    mem_deriv_propag_high.mem_B(i,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j,vect_ind_iT(i,3)) ;
                end
            end
        end

        % ============== Ab2tc ============= %
        for j = 1:nbT
    
            mem_deriv_propag_high.mem_B(nbT,nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dtcj(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj,mem_deriv_propag_low.mem_dti.mem_dti_dtcj)'*tau_tip' ;
        
        end
    
        % ============== Ab2bc ============== %
        for j = 1:nbT
    
            mem_deriv_propag_high.mem_B(nbT,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dbcj(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj,mem_deriv_propag_low.mem_dti.mem_dti_dbcj)'*tau_tip' ;
        
        end

        % ============== Ab3tc ============= %
        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+1:nbT+3,nbT+6+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,vect_ind_iT(nbT,3))'*tau_tip'  ;
        end
    
        % ============== Ab3bc ============== %
        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+1:nbT+3,2*nbT+6+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,vect_ind_iT(nbT,3)) ...
                                     - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,vect_ind_iT(nbT,3))'*tau_tip'  ;
        end

        % ============== Ab4tc ============= %
        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+4:nbT+6,nbT+6+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtcj(:,:,j,vect_ind_iT(nbT,3))'*f_tip'  ;
        end
    
        % ============== Ab4bc ============== %
        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+4:nbT+6,2*nbT+6+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,vect_ind_iT(nbT,3)) ...
                                     - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dbcj(:,:,j,vect_ind_iT(nbT,3))'*f_tip'  ;
        end

    end





    % ============================================== %
    % ====================== B ===================== %
    
%     Bu          = [ [bvp_prop.Bu(1:nbT,1:nbT),bvp_prop.Bu(1:nbT,nbT*(1+2*3)+1:nbT*(1+2*3)+6)] ; ...
%                     [bvp_prop.Bu(nbT*(1+2*3)+1:nbT*(1+2*3)+6,1:nbT),bvp_prop.Bu(nbT*(1+2*3)+1:nbT*(1+2*3)+6,nbT*(1+2*3)+1:nbT*(1+2*3)+6)] ] ;

    mem_deriv_propag_high.mem_B(1:nbT+6,1:nbT+6) = bvp_prop.Bu ;


    





    

    if bool_Cs0
        
        % for tp_is0 = 1:length(pt_s0_LIT_curr)
        %     is0 = pt_s0_LIT_curr(tp_is0) ;

        for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
            is0 = simulation_param.pt_s0_LIT(tp_is0) ;

            if is0 == vect_ind_iT(nbT,3)


                % ============================================== %
                % ==================== BwL0 ==================== %


                % ============== Ab1tauL0 ============== %
                mem_deriv_propag_high.mem_Bws0(1:nbT-1,1:3,vect_ind_iT(nbT,3)) = zeros(nbT-1,3) ;
            
                % ============== Ab1fL0 ============== %    
                mem_deriv_propag_high.mem_Bws0(1:nbT-1,4:6,vect_ind_iT(nbT,3)) = zeros(nbT-1,3) ;
        
                % ============== Ab2tauL0 ============== %
                mem_deriv_propag_high.mem_Bws0(nbT,1:3,vect_ind_iT(nbT,3)) = - [0,0,1]/K(3,3,nbT)*(mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))*rotz(mem_bvp.mem_y.mem_t(nbT,vect_ind_iT(nbT,3)))' )' ;
            
                % ============== Ab2fL0 ============== %    
                mem_deriv_propag_high.mem_Bws0(nbT,4:6,vect_ind_iT(nbT,3)) = zeros(1,3) ;
        
                % ============== Ab3tauL0 ============== %
                mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,1:3,vect_ind_iT(nbT,3)) = - mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))' ;
            
                % ============== Ab3fL0 ============= %
                mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,4:6,vect_ind_iT(nbT,3)) = zeros(3,3) ;
        
                % ============== Ab4tauL0 ============== %
                mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,1:3,vect_ind_iT(nbT,3)) = zeros(3,3) ;
            
                % ============== Ab4fL0 ============= %
                mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,4:6,vect_ind_iT(nbT,3)) =  - mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))' ;
                

            else

                % ============================================== %
                % ==================== Bws0 ==================== %

                % ============== Ab1taus0 ============= %
                for i = 1:nbT-1
                    mem_deriv_propag_high.mem_Bws0(i,1:3,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,vect_ind_iT(i,3),is0) ;
                end
            
                % ============== Ab2taus0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT,j,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(nbT,j,vect_ind_iT(nbT,3),is0) ...
                                      - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dtaus0(is0,vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0,mem_deriv_propag_low.mem_dti.mem_dti_dtaus0)*tau_tip' ;
                end
            
                % ============== Ab3taus0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,j,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,vect_ind_iT(nbT,3),is0)*tau_tip' ;
        
                end
                
                % ============== Ab4taus0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,j,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dtaus0(:,:,j,vect_ind_iT(nbT,3),is0)*f_tip' ;
                end
            
            
            
                % ============== Ab1fs0 ============= %
                for i = 1:nbT-1
        
                    mem_deriv_propag_high.mem_Bws0(i,4:6,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,vect_ind_iT(i,3),is0) ;
        
                end
            
                % ============== Ab2fs0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT,3+j,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(nbT,j,vect_ind_iT(nbT,3),is0) ...
                                      - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dfs0(is0,vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0,mem_deriv_propag_low.mem_dti.mem_dti_dfs0)*tau_tip' ;
                end
            
                % ============== Ab3fs0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,3+j,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,vect_ind_iT(nbT,3),is0)*tau_tip' ;
                end
                
                % ============== Ab4fs0 ============= %
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,3+j,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_d00Rs.mem_d00Rs_dfs0(:,:,j,vect_ind_iT(nbT,3),is0)*f_tip' ;
                end
                

            end
    
        end

    end
    
end

