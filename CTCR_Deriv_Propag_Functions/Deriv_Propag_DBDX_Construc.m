function mem_deriv_propag_high ...
         = Deriv_Propag_DBDX_Construc(...
         bool_J , bool_Cs0 , mem_bvp , ctcr_construc , ctcr_carac , ...
         ctcr_load , bvp_prop , simulation_param , mem_deriv_propag_low , mem_deriv_propag_high)


% ======================================================================= %
% ======================================================================= %
%
% This function computes the High-Level partial derivatives Bx
%
% ====================
% ====== INPUTS ====== 
%
% bool_J                : (boolean) Compute the Joint Jacobian ?
% bool_Cs0              : (boolean) Compute the Generalized Compliance Matrix ?
% mem_bvp               : (class) Memory of the BVP variables 
% ctcr_construc         : (class) Robot features related to the model settings
% ctcr_carac            : (class) Robot features
% ctcr_load             : (class) Robot loads
% bvp_prop              : (class) Results of the BVP resolution
% simulation_param      : (class) Model settings
% mem_deriv_propag_low  : (class) Memory of the low-level derivatives 
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
%
% ======================================================================= %
% ======================================================================= %


% ======================================================================= %
% ============= Organization of the partial dervatives of b ============= %
%       ____   
%      ⎡    ⎤  1
%      ⎪ b1 ⎥
%      ⎪____⎥  nbT-1
%      ⎪____⎥ 
%      ⎪    ⎥  nbT
%      ⎪ b2 ⎥
%      ⎪____⎥  nbT
%  b = ⎪____⎥
%      ⎪    ⎥  nbT+1
%      ⎪ b3 ⎥
%      ⎪____⎥  nbT+3
%      ⎪____⎥
%      ⎪    ⎥  nbT+4
%      ⎪ b4 ⎥
%      ⎣____⎦  nbT+6
%
% ======================================================================= %
% ======================================================================= %




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
    % ============== db_dtc and db_bc ============== %
    % (eq 35)

    if bool_J

        % ========================= %
        % ======== db1_dtc ======== %

        for i = 1:nbT-1
            mem_deriv_propag_high.mem_B(i,nbT+7:2*nbT+6) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(i,:,vect_ind_iT(i,3)) ;
        end

        
        % ========================= %
        % ======== db2_dtc ======== %

        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT,nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dtcj(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj,mem_deriv_propag_low.mem_dti.mem_dti_dtcj)'*tau_tip' ;
        end
        

        % ========================= %
        % ======== db3_dtc ======== %

        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+1:nbT+3,nbT+6+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj(:,:,j,vect_ind_iT(nbT,3))'*tau_tip'  ;
        end


        % ========================= %
        % ======== db4_dtc ======== %

        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+4:nbT+6,nbT+6+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj(:,j,vect_ind_iT(nbT,3)) ...
                                - mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj(:,:,j,vect_ind_iT(nbT,3))'*f_tip'  ;
        end



    
        % ========================= %
        % ======== db1_dbc ======== %

        for i = 1:nbT-1
            for j = 1:nbT
                if i==j
                    mem_deriv_propag_high.mem_B(i,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j,vect_ind_iT(i,3)+1) ;
                else
                    mem_deriv_propag_high.mem_B(i,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(i,j,vect_ind_iT(i,3)) ;
                end
            end
        end

        
    
        % ========================= %
        % ======== db2_dbc ======== %

        for j = 1:nbT
    
            mem_deriv_propag_high.mem_B(nbT,2*nbT+6+j) = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj(nbT,j,vect_ind_iT(nbT,3)) ...
                        - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dbcj(vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj,mem_deriv_propag_low.mem_dti.mem_dti_dbcj)'*tau_tip' ;
        
        end

    

        % ========================= %
        % ======== db3_dbc ======== %

        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+1:nbT+3,2*nbT+6+j) = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj(:,j,vect_ind_iT(nbT,3)) ...
                                     - mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,vect_ind_iT(nbT,3))'*tau_tip'  ;
        end

        
    
        % ========================= %
        % ======== db4_dbc ======== %
        
        for j = 1:nbT
            mem_deriv_propag_high.mem_B(nbT+4:nbT+6,2*nbT+6+j) = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj(:,j,vect_ind_iT(nbT,3)) ...
                                     - mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj(:,:,j,vect_ind_iT(nbT,3))'*f_tip'  ;
        end

    end





    % =========================== %
    % ======== db_dyu(0) ======== %
    % (eq 35)

    mem_deriv_propag_high.mem_B(1:nbT+6,1:nbT+6) = bvp_prop.Bu ;


    





    

    if bool_Cs0

        for tp_is0 = 1:length(simulation_param.pt_s0_LIT)
            is0 = simulation_param.pt_s0_LIT(tp_is0) ;

            if is0 == vect_ind_iT(nbT,3)


                % =========================================== %
                % ======= db_dtau0(L0) and db_df0(L0) ======= %
                % (eq 35)

                % ============================== %
                % ======== db1_dtau(L0) ======== %

                mem_deriv_propag_high.mem_Bws0(1:nbT-1,1:3,vect_ind_iT(nbT,3)) = zeros(nbT-1,3) ;
            


                % ============================== %
                % ========= db1_df(L0) ========= %   

                mem_deriv_propag_high.mem_Bws0(1:nbT-1,4:6,vect_ind_iT(nbT,3)) = zeros(nbT-1,3) ;
        


                % ============================== %
                % ======== db2_dtau(L0) ======== %

                mem_deriv_propag_high.mem_Bws0(nbT,1:3,vect_ind_iT(nbT,3)) = - [0,0,1]/K(3,3,nbT)*(mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))*rotz(mem_bvp.mem_y.mem_t(nbT,vect_ind_iT(nbT,3)))' )' ;
            


                % ============================== %
                % ========= db2_df(L0) ========= %    

                mem_deriv_propag_high.mem_Bws0(nbT,4:6,vect_ind_iT(nbT,3)) = zeros(1,3) ;
        


                % ============================== %
                % ======== db3_dtau(L0) ======== %

                mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,1:3,vect_ind_iT(nbT,3)) = - mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))' ;
            


                % ============================== %
                % ========= db3_df(L0) ========= %
                
                mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,4:6,vect_ind_iT(nbT,3)) = zeros(3,3) ;
        


                % ============================== %
                % ======== db4_dtau(L0) ======== %

                mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,1:3,vect_ind_iT(nbT,3)) = zeros(3,3) ;
            


                % ============================== %
                % ========= db4_df(L0) ========= %

                mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,4:6,vect_ind_iT(nbT,3)) =  - mem_bvp.mem_T(1:3,1:3,vect_ind_iT(nbT,3))' ;
                

            else

                % =========================================== %
                % ======= db_dtau0(s0) and db_df0(s0) ======= %
                % (eq 35)
       

                % ============================== %
                % ======== db1_dtau(s0) ======== %

                for i = 1:nbT-1
                    mem_deriv_propag_high.mem_Bws0(i,1:3,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(i,:,vect_ind_iT(i,3),is0) ;
                end
            


                % ============================== %
                % ======== db2_dtau(s0) ======== %

                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT,j,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0(nbT,j,vect_ind_iT(nbT,3),is0) ...
                                      - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dtaus0(is0,vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0,mem_deriv_propag_low.mem_dti.mem_dti_dtaus0)*tau_tip' ;
                end
            


                % ============================== %
                % ======== db3_dtau(s0) ======== %
                
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,j,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,vect_ind_iT(nbT,3),is0)*tau_tip' ;
        
                end
                


                % ============================== %
                % ======== db4_dtau(s0) ======== %

                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,j,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0(:,:,j,vect_ind_iT(nbT,3),is0)*f_tip' ;
                end
            
            
            
                % ============================== %
                % ========= db1_df(s0) ========= %

                for i = 1:nbT-1
        
                    mem_deriv_propag_high.mem_Bws0(i,4:6,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(i,:,vect_ind_iT(i,3),is0) ;
        
                end
            


                % ============================== %
                % ========= db2_df(s0) ========= %
                
                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT,3+j,is0) = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0(nbT,j,vect_ind_iT(nbT,3),is0) ...
                                      - [0,0,1]/K(3,3,nbT)*dB0nbTRs_dfs0(is0,vect_ind_iT(nbT,3),j,nbT,mem_bvp.mem_T,mem_bvp.mem_y,mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0,mem_deriv_propag_low.mem_dti.mem_dti_dfs0)*tau_tip' ;
                end
            


                % ============================== %
                % ========= db3_df(s0) ========= %

                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+1:nbT+3,3+j,is0) = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,vect_ind_iT(nbT,3),is0)*tau_tip' ;
                end
                


                % ============================== %
                % ========= db4_df(s0) ========= %

                for j = 1:3
                    mem_deriv_propag_high.mem_Bws0(nbT+4:nbT+6,3+j,is0) = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0(:,j,vect_ind_iT(nbT,3),is0) ...
                                              - mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0(:,:,j,vect_ind_iT(nbT,3),is0)*f_tip' ;
                end
                
            end
        end
    end  
end

