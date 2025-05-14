function  [] = TACR_3D_Graph_Comp( ...
    name                    ,  vect_select_quant       , ...
    vect_select_deriv       , tacr_construc  , tacr_carac               , ...
    simulation_param        , mem_CJ         , mem_deriv_propag_high    , ...
    mem_deriv_propag_low    , mem_FD_CJ      , mem_FD_deriv_propag_high , ...
    mem_FD_deriv_propag_low , pt_s0_FD)





% EXPLAIN THE FUNCTIONS
%
%
%
%
%




    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = tacr_carac.nbT            ;    
    nbD             = tacr_carac.nbD            ;    
    nbP             = tacr_construc.nbP         ;
    vect_ind_iT     = tacr_construc.vect_ind_iT ;
    vect_ind_iD     = tacr_construc.vect_ind_iD ;
    vect_z          = tacr_construc.vect_z      ;
   
    format long ;



    % ========================================================================= %
    % ========================== Preparing the plots ========================== %
    
    set(groot,'defaultAxesTickLabelInterpreter','latex') ; 

    espace = 1 ;
    FaceAlpha = .5 ;
    Mini_espace = 0.05 ;

    couleur = [[252,210,154];[238,133,74];[1,114,151];[112,89,135];[238,167,147];[247,164,3];[172,68,31]]/255 ;
    close all
   

    % ============ GRANDEURS A DERIVER ============ %
    % 1  = Cs0
    % 2  = J
    % 3  = B
    % 4  = DU0_DX
    % 5  = DV0_DX
    % 6  = DR0_DX
    % 7  = DP0_DX
    % 8  = DM0_DX
    % 9  = DN0_DX
    % 10 = DC_DX
    % 11 = DD_DX
    % 12 = DM_DX
    % 13 = Dinv_M_DX
    % 14 = DDPI_DX_DS
    
    % ================= DERIVATEUR ================ %
    % 1  = DX_DM0
    % 2  = DX_DN0
    % 3  = DX_DTJ
    % 4  = DX_DTAUS0
    % 5  = DX_DFS0

    vect_select_deriv_init = vect_select_deriv ;

    for i_select_quant = 1:length(vect_select_quant)
        iMat = vect_select_quant(i_select_quant) ;

        if iMat == 1 || iMat == 2
            vect_select_deriv = 1 ;
        end
        
        for i_select_deriv = 1:length(vect_select_deriv)
            iDeriv = vect_select_deriv(i_select_deriv) ;

            Mat_LIT = [] ;
            Mat_FD  = [] ;

            % ============ Cs0 ============ %
            if iMat == 1

                Mat_LIT = mem_CJ.mem_Cs0 ;
                Mat_FD  = mem_FD_CJ.mem_FD_Cs0 ;

                name_graph_latex = '$C_{s_0}(s)$' ;
                name_file = 'GRAPH_3D_COMP_C_S0_' ;

            % ============ J ============ %    
            elseif iMat == 2

                Mat_LIT = mem_CJ.mem_J ;
                Mat_FD  = mem_FD_CJ.mem_FD_J ;

                name_graph_latex = '$J(s)$' ;
                name_file = 'GRAPH_3D_COMP_J' ;

            % ============ b ============ %    
            elseif iMat == 3
                
                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,1:3) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,1:3) ;

                    Mat_LIT = zeros(6 , 3 , nbP) ;
                    Mat_FD  = zeros(6 , 3 , nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial m_0(0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DM00' ;
                
                elseif iDeriv == 2

                    % ==== DN0 ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,4:6) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,4:6) ;

                    Mat_LIT = zeros(6 , 3 , nbP) ;
                    Mat_FD  = zeros(6 , 3 , nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial n_0(0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DN00' ;
                
                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,7:6+nbT) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,7:6+nbT) ;

                    Mat_LIT = zeros(6 , nbT , nbP) ;
                    Mat_FD  = zeros(6 , nbT , nbP) ;
                    
                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial t_i}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DTI' ;

                
                elseif iDeriv == 4

                    Mat_LIT = zeros(6 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(6 , 3 , nbP , nbP) ;

                    % ==== DTAUS0 ==== %
                    for is0 = 1:nbP
                        
                        % ==== DTAUS0 ==== %
                        tp_LIT = mem_deriv_propag_high.mem_Bws0(:,1:3,is0) ;
                        tp_FD  = mem_FD_deriv_propag_high.mem_FD_Bws0(:,1:3,is0) ;
    
                        for i = 1:length(tp_LIT(:,1))
                            for j = 1:length(tp_LIT(1,:))
            
                                Mat_LIT(i,j,:,is0) = tp_LIT(i,j)*ones(1,1,nbP) ;
                                Mat_FD(i,j,:,is0)  = tp_FD(i,j)*ones(1,1,nbP) ;
    
                            end
                        end
                        
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial \tau_0(s_0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DTAU_S0_' ;

                
                elseif iDeriv == 5

                    Mat_LIT = zeros(6 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(6 , 3 , nbP , nbP) ;

                    % ==== DFS0 ==== %
                    for is0 = 1:nbP

                        tp_LIT = mem_deriv_propag_high.mem_Bws0(:,4:6,is0) ;
                        tp_FD  = mem_FD_deriv_propag_high.mem_FD_Bws0(:,4:6,is0) ;
    
                        for i = 1:length(tp_LIT(:,1))
                            for j = 1:length(tp_LIT(1,:))
            
                                Mat_LIT(i,j,:,is0) = tp_LIT(i,j)*ones(1,1,nbP) ;
                                Mat_FD(i,j,:,is0)  = tp_FD(i,j)*ones(1,1,nbP) ;
    
                            end
                        end                        

                    end 

                    name_graph_latex = '$\frac{\partial b}{\partial f_0(s_0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DF_S0_' ;

                end

            % ============ U0 ============ %
            elseif iMat == 4

                if iDeriv == 1                    

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dm0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dn0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dti ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DTI' ;
                
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dfs0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DF_S0_' ;

                end



            % ============ V0 ============ %
            elseif iMat == 5

                if iDeriv == 1                    

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dv0.mem_dv0_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dv0.mem_dv0_dm0 ;

                    name_graph_latex = '$\frac{\partial v_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DV0_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dv0.mem_dv0_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dv0.mem_dv0_dn0 ;

                    name_graph_latex = '$\frac{\partial v_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DV0_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dv0.mem_dv0_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dv0.mem_dv0_dti ;

                    name_graph_latex = '$\frac{\partial v_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DV0_DTI' ;
                
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dv0.mem_dv0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dv0.mem_dv0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial v_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DV0_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dv0.mem_dv0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dv0.mem_dv0_dfs0 ;

                    name_graph_latex = '$\frac{\partial v_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DV0_DF_S0_' ;

                end


            % ============ R0 ============ %
            elseif iMat == 6

                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dm0 ;

                    Mat_LIT = zeros(9 , 3 , nbP) ;
                    Mat_FD  = zeros(9 , 3 , nbP) ;
                    
                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end

                    name_graph_latex = '$\frac{\partial R_0 }{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dn0 ;

                    Mat_LIT = zeros(9 , 3 , nbP) ;
                    Mat_FD  = zeros(9 , 3 , nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end
                    
                    name_graph_latex = '$\frac{\partial R_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dti ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dti ;

                    Mat_LIT = zeros(9 , nbT , nbP) ;
                    Mat_FD  = zeros(9 , nbT , nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DTI' ;
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dtaus0 ;

                    Mat_LIT = zeros(9 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(9 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:length(tp_LIT(1,1,1,:,tp_is0))
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dfs0 ;

                    Mat_LIT = zeros(9 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(9 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:length(tp_LIT(1,1,1,:,tp_is0))
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            end
    
                        end
                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DF_S0_' ;

                end





            % ============ P0 ============ %
            elseif iMat == 7

                if iDeriv == 1

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dp0.mem_dp0_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dp0.mem_dp0_dm0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dp0.mem_dp0_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dp0.mem_dp0_dn0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DN00' ;

                elseif iDeriv == 3

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dp0.mem_dp0_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dp0.mem_dp0_dti ;
                    
                    name_graph_latex = '$\frac{\partial p_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DTI' ;
                    
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dp0.mem_dp0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dp0.mem_dp0_dtaus0 ;
                    
                    name_graph_latex = '$\frac{\partial p_0}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DTAU_S0_' ;
                
                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dp0.mem_dp0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dp0.mem_dp0_dfs0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DF_S0_' ;

                end

            % ============ M0 ============ %
            elseif iMat == 8

                if iDeriv == 1                    

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dm0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dn0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dti ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DTI' ;
                
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dfs0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DF_S0_' ;

                end

            % ============ N0 ============ %
            elseif iMat == 9

                if iDeriv == 1

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dm0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DM00' ;
                
                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dn0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DN00' ;
                
                elseif iDeriv == 3

                    % ==== DTI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dti ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DTI' ;
                                                    
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dfs0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DF_S0_' ;

                end




            % ============ C ============ %
            elseif iMat == 10

                if iDeriv == 1

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dc.mem_dc_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dc.mem_dc_dm0 ;

                    name_graph_latex = '$\frac{\partial c}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DC_DM00' ;
                
                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dc.mem_dc_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dc.mem_dc_dn0 ;

                    name_graph_latex = '$\frac{\partial c}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DC_DN00' ;
                
                elseif iDeriv == 3

                    % ==== DTCI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dc.mem_dc_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dc.mem_dc_dti ;

                    name_graph_latex = '$\frac{\partial c}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DC_DTI' ;
                    
               elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dc.mem_dc_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dc.mem_dc_dtaus0 ;

                    name_graph_latex = '$\frac{\partial c}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DC_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dc.mem_dc_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dc.mem_dc_dfs0 ;

                    name_graph_latex = '$\frac{\partial c}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DC_DF_S0_' ;

                end




            % ============ D ============ %
            elseif iMat == 11

                if iDeriv == 1

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dd.mem_dd_dm0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dd.mem_dd_dm0 ;

                    name_graph_latex = '$\frac{\partial d}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DD_DM00' ;
                
                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dd.mem_dd_dn0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dd.mem_dd_dn0 ;

                    name_graph_latex = '$\frac{\partial d}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DD_DN00' ;
                
                elseif iDeriv == 3

                    % ==== DTCI ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dd.mem_dd_dti ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dd.mem_dd_dti ;

                    name_graph_latex = '$\frac{\partial d}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DD_DTI' ;
                    
               elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dd.mem_dd_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dd.mem_dd_dtaus0 ;

                    name_graph_latex = '$\frac{\partial d}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DD_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dd.mem_dd_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dd.mem_dd_dfs0 ;

                    name_graph_latex = '$\frac{\partial d}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DD_DF_S0_' ;

                end




            % ============ M ============ %
            elseif iMat == 12

                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dM.mem_dM_dm0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dM.mem_dM_dm0 ;

                    Mat_LIT = zeros(36 , 3 , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial M }{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dM.mem_dM_dn0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dM.mem_dM_dn0 ;

                    Mat_LIT = zeros(36 , 3 , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end
                    
                    name_graph_latex = '$\frac{\partial M}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dM.mem_dM_dti ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dM.mem_dM_dti ;

                    Mat_LIT = zeros(36 , nbT , nbP) ;
                    Mat_FD  = zeros(36 , nbT , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial M}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM_DTI' ;
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dM.mem_dM_dtaus0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dM.mem_dM_dtaus0 ;

                    Mat_LIT = zeros(36 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial M}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dM.mem_dM_dfs0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dM.mem_dM_dfs0 ;

                    Mat_LIT = zeros(36 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial M}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM_DF_S0_' ;

                end



            % ============ inv_M ============ %
            elseif iMat == 13

                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dm0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dinv_M.mem_dinv_M_dm0 ;

                    Mat_LIT = zeros(36 , 3 , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial M^{-1} }{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DinvM_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dn0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dinv_M.mem_dinv_M_dn0 ;

                    Mat_LIT = zeros(36 , 3 , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end
                    
                    name_graph_latex = '$\frac{\partial M^{-1}}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DinvM_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dti ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dinv_M.mem_dinv_M_dti ;

                    Mat_LIT = zeros(36 , nbT , nbP) ;
                    Mat_FD  = zeros(36 , nbT , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial M^{-1}}{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DinvM_DTI' ;
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dtaus0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dinv_M.mem_dinv_M_dtaus0 ;

                    Mat_LIT = zeros(36 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:length(tp_LIT(1,1,1,:,tp_is0))
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial M^{-1}}{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DinvM_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dinv_M.mem_dinv_M_dfs0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dinv_M.mem_dinv_M_dfs0 ;

                    Mat_LIT = zeros(36 , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(36 , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial M^{-1}}{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DinvM_DF_S0_' ;

                end



            % ============ dpi_ds ============ %
            elseif iMat == 14

                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dm0_ds ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_ddpi_ds.mem_ddpi_dm0_ds ;

                    Mat_LIT = zeros(3*nbT , 3 , nbP) ;
                    Mat_FD  = zeros(3*nbT , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial \dot{p}_i }{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DDPIDS_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dn0_ds ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_ddpi_ds.mem_ddpi_dn0_ds ;

                    Mat_LIT = zeros(3*nbT , 3 , nbP) ;
                    Mat_FD  = zeros(3*nbT , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end
                    
                    name_graph_latex = '$\frac{\partial \dot{p}_i }{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DDPIDS_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dti_ds ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_ddpi_ds.mem_ddpi_dti_ds ;

                    Mat_LIT = zeros(3*nbT , nbT , nbP) ;
                    Mat_FD  = zeros(3*nbT , nbT , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial \dot{p}_i }{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DDPIDS_DTI' ;
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dtaus0_ds ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_ddpi_ds.mem_ddpi_dtaus0_ds ;

                    Mat_LIT = zeros(3*nbT , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(3*nbT , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3

                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial \dot{p}_i }{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DDPIDS_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_ddpi_ds.mem_ddpi_dfs0_ds ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_ddpi_ds.mem_ddpi_dfs0_ds ;

                    Mat_LIT = zeros(3*nbT , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(3*nbT , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial \dot{p}_i }{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DDPIDS_DF_S0_' ;

                end




            % ============ Ai ============ %
            elseif iMat == 15

                if iDeriv == 1

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dAi.mem_dAi_dm0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dAi.mem_dAi_dm0 ;

                    Mat_LIT = zeros(9*nbT , 3 , nbP) ;
                    Mat_FD  = zeros(9*nbT , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial A_i }{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DAi_DM00' ;

                elseif iDeriv == 2

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dAi.mem_dAi_dn0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dAi.mem_dAi_dn0 ;

                    Mat_LIT = zeros(9*nbT , 3 , nbP) ;
                    Mat_FD  = zeros(9*nbT , 3 , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:3
                    
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end
                    
                    name_graph_latex = '$\frac{\partial A_i }{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DAi_DN00' ;

                elseif iDeriv == 3

                    % ==== DTI ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dAi.mem_dAi_dti ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dAi.mem_dAi_dti ;

                    Mat_LIT = zeros(9*nbT , nbT , nbP) ;
                    Mat_FD  = zeros(9*nbT , nbT , nbP) ;

                    for tp_is = 1:nbP
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,:,tp_deriv,tp_is),[],1) ;
                        
                        end
                    end

                    name_graph_latex = '$\frac{\partial A_i }{\partial t_i}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DAi_DTI' ;
                
                elseif iDeriv == 4

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dAi.mem_dAi_dtaus0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dAi.mem_dAi_dtaus0 ;

                    Mat_LIT = zeros(9*nbT , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(9*nbT , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial A_i }{\partial \tau_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DAi_DTAU_S0_' ;

                elseif iDeriv == 5

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dAi.mem_dAi_dfs0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dAi.mem_dAi_dfs0 ;

                    Mat_LIT = zeros(9*nbT , 3 , nbP , nbP) ;
                    Mat_FD  = zeros(9*nbT , 3 , nbP , nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:nbP
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial A_i }{\partial f_0(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DAi_DF_S0_' ;

                end

            end
           
         
            % Méthode générale ppur gérer les points éventuels en is0
            if length(Mat_LIT(1,1,1,:)) == 1
                vect_is0 = 1 ;
            else
                vect_is0 = intersect(simulation_param.pt_s0_LIT,pt_s0_FD) ;
            end

            for tp_is0 = 1:length(vect_is0)
                is0 = vect_is0(tp_is0) ;

                % ============= Création du graph ============= %
                figure('units','normalized','outerposition',[0 0 1 1]) ;    
                set(gca,'fontsize',12) ;
                
                idecl = 0 ;

                mem_yticks = {} ;

                % vect_col = [1,1,1,2,2,2,3,3,3,...
                %             1,1,1,2,2,2,3,3,3,...
                %             4,4,4,5,5,5,6,6,6,...
                %             4,4,4,5,5,5,6,6,6] ;
                % vect_lig = [1,2,3,1,2,3,1,2,3,...
                %             4,5,6,4,5,6,4,5,6,...
                %             1,2,3,1,2,3,1,2,3,...
                %             4,5,6,4,5,6,4,5,6] ;
                % 
                % for tp = 1:length(vect_col)
                % 
                %     icol = vect_col(tp) ;
                %     ilig = vect_lig(tp) ;

                for icol = 1:length(Mat_LIT(1,:,1,is0))
                
                    for ilig = 1:length(Mat_LIT(:,1,1,is0))

                        idecl = idecl + 1 ;
                                 
                        hold on
        
                        % ============================================================== %
                        % ========== Reshape LIT matrix for fill 3D correctly ========== %

                        tp_LIT = reshape(Mat_LIT(ilig,icol,:,is0),1,[]) ;
                        if ~(tp_LIT(1) == 0)
                            if ~(tp_LIT(end) == 0)
                                vect_x_LIT = [vect_z(1),vect_z,vect_z(end)] ;
                                vect_y_LIT = idecl*espace*ones(1,nbP+2)-Mini_espace*ones(1,nbP+2) ;
                                vect_z_LIT = [0,tp_LIT,0] ;
                            else
                                vect_x_LIT = [vect_z(1),vect_z] ;
                                vect_y_LIT = idecl*espace*ones(1,nbP+1)-Mini_espace*ones(1,nbP+1) ;
                                vect_z_LIT = [0,tp_LIT] ;
                            end
                        else
                            if ~(tp_LIT(end) == 0)
                                vect_x_LIT = [vect_z,vect_z(end)] ;
                                vect_y_LIT = idecl*espace*ones(1,nbP+1)-Mini_espace*ones(1,nbP+1) ;
                                vect_z_LIT = [tp_LIT,0] ;
                            else
                                vect_x_LIT = vect_z ;
                                vect_y_LIT = idecl*espace*ones(1,nbP)-Mini_espace*ones(1,nbP) ;
                                vect_z_LIT = tp_LIT ;
                            end
                        end



                        % ============================================================== %
                        % ========== Reshape FD matrix for fill 3D correctly =========== %
                        
                        tp_FD = reshape(Mat_FD(ilig,icol,:,is0),1,[]) ;
                        if ~(tp_LIT(1) == 0)
                            if ~(tp_FD(end) == 0)
                                vect_x_FD = [vect_z(1),vect_z,vect_z(end)] ;
                                vect_y_FD = idecl*espace*ones(1,nbP+2)+Mini_espace*ones(1,nbP+2) ;
                                vect_z_FD = [0,tp_FD,0] ;
                            else
                                vect_x_FD = [vect_z(1),vect_z] ;
                                vect_y_FD = idecl*espace*ones(1,nbP+1)+Mini_espace*ones(1,nbP+1) ;
                                vect_z_FD = [0,tp_FD] ;
                            end
                        else
                            if ~(tp_FD(end) == 0)
                                vect_x_FD = [vect_z,vect_z(end)] ;
                                vect_y_FD = idecl*espace*ones(1,nbP+1)+Mini_espace*ones(1,nbP+1) ;
                                vect_z_FD = [tp_FD,0] ;
                            else
                                vect_x_FD = vect_z ;
                                vect_y_FD = idecl*espace*ones(1,nbP)+Mini_espace*ones(1,nbP) ;
                                vect_z_FD = tp_FD ;
                            end
                        end





                        % ==== Avoid plotting successive zeros ==== %
                        tp_vect_x_LIT = [] ;
                        tp_vect_y_LIT = [] ;
                        tp_vect_z_LIT = [] ;

                        for tp_is = 1:length(vect_z_LIT)-1
                            if ~isequal(vect_z_LIT(tp_is:tp_is+1),zeros(1,2))
                                tp_vect_x_LIT = [tp_vect_x_LIT,vect_x_LIT(tp_is)] ;
                                tp_vect_y_LIT = [tp_vect_y_LIT,vect_y_LIT(tp_is)] ;
                                tp_vect_z_LIT = [tp_vect_z_LIT,vect_z_LIT(tp_is)] ;
                            end
                        end
                        tp_vect_x_LIT = [tp_vect_x_LIT,vect_x_LIT(end)] ;
                        tp_vect_y_LIT = [tp_vect_y_LIT,vect_y_LIT(end)] ;
                        tp_vect_z_LIT = [tp_vect_z_LIT,vect_z_LIT(end)] ;

                        clear vect_x_LIT vect_y_LIT vect_z_LIT
                        vect_x_LIT = tp_vect_x_LIT ;
                        vect_y_LIT = tp_vect_y_LIT ;
                        vect_z_LIT = tp_vect_z_LIT ;
                        clear tp_vect_x_LIT tp_vect_y_LIT tp_vect_z_LIT

                        % ============================================================== %
                        % ======== Reshape LIT & FD matrix for plot 3D correctly ======= %

                        ordonnee_plot3_LIT = reshape(Mat_LIT(ilig,icol,:,is0),1,[]) ;
                        ordonnee_plot3_FD  = reshape(Mat_FD(ilig,icol,:,is0),1,[]) ;

                        abscisse_plot3 = vect_z ;

                        % Matrice LIT
                        %fill3
                        patch(vect_x_LIT*1e3     , vect_y_LIT    , vect_z_LIT ,couleur(3,:),'EdgeColor','k','FaceAlpha',FaceAlpha ,'FaceColor',couleur(3,:) , 'LineWidth',0.5 ) ;
                        plot3(abscisse_plot3*1e3 , idecl*espace*ones(1,nbP)-Mini_espace*ones(1,nbP) , ordonnee_plot3_LIT ,'Color',couleur(3,:),'LineStyle','-','LineWidth',2,'Marker','none') ;
    
                        % Matrice FD
                        patch(vect_x_FD*1e3      , vect_y_FD     , vect_z_FD ,couleur(6,:),'EdgeColor','k','FaceAlpha',FaceAlpha ,'FaceColor',couleur(6,:) , 'LineWidth',0.5 ) ;
                        plot3(abscisse_plot3*1e3 , idecl*espace*ones(1,nbP)+Mini_espace*ones(1,nbP) , ordonnee_plot3_FD ,'Color',couleur(6,:),'LineStyle','-','LineWidth',2,'Marker','none') ;
                        
                        % Plot the reference line
                        plot3([tacr_construc.vect_z(1)*1e3,tacr_construc.vect_z(end)*1e3],idecl*espace*ones(1,2),[0,0],'LineStyle','-','Marker','none','LineWidth',0.5,'Color','k') ;
                        
                        hold off

                        % Creating the thicks
                        mem_yticks{idecl} = strcat('$(',num2str(ilig),',',num2str(icol),')$') ;

                    end
                end


                
                % ============= Référence des disks ============= %
                for iD = 1:nbD-1
                    hold on
                    plot3([vect_z(vect_ind_iD(iD)),vect_z(vect_ind_iD(iD))]*1e3,[0-Mini_espace , idecl+Mini_espace],[0,0],'LineStyle','--','Marker','none','LineWidth',3,'Color',[79,222,99]/255) % vert
                    text(vect_z(vect_ind_iD(iD))*1e3,-.5,0,strcat('$D_{',num2str(iD),'}$'),'Interpreter','latex','FontSize',25,'Color',[79,222,99]/255) % vert
                    hold off
                end



                % ============= Référence des tendons ============= %
                for iT = 1:nbT-1
                    hold on
                    plot3([vect_z(vect_ind_iT(iT)),vect_z(vect_ind_iT(iT))]*1e3,[0-Mini_espace , idecl+Mini_espace],[0,0],'LineStyle','--','Marker','none','LineWidth',3,'Color',[237,24,31]/255) % rouge
                    text(vect_z(vect_ind_iT(iT))*1e3,-.5,0,strcat('$C_{',num2str(iT),'}$'),'Interpreter','latex','FontSize',25,'Color',[237,24,31]/255) % rouge
                    hold off
                end



                
                % ============= Mise en forme : axe x ============= %
                xlabel('$s[mm]$','Interpreter','latex','FontSize',20) ;
                %xlim([1 , nbP]) ;
                xlim([vect_z(1),vect_z(end)]*1e3)

                % ============= Mise en forme : axe y ============= %
                yticks(linspace(1,idecl+1,idecl+1)) ;
                yticklabels(mem_yticks)
                ytickangle(45)
                ylim([0-Mini_espace , idecl+1+Mini_espace]) ;


                % ============= Change title names if is0 cases ============= %
                if iDeriv == 4 || iDeriv == 5 || iMat == 1

                    name_file_init = name_file ;
                    name_graph_latex_init = name_graph_latex ;

                    tp_index = strfind(name_graph_latex,'s_0') ;
                    name_graph_latex = strcat(name_graph_latex(1:tp_index+2),'=',sprintf('%.3f',vect_z(is0)),name_graph_latex(tp_index+3:end)) ;

                    tp_index = strfind(name_file,'_S0_') ;
                    name_file = strcat(name_file(1:tp_index+3),sprintf('%.3f',vect_z(is0))) ;

                end



                % ============= Mise en forme : axe z ============= %
                zlabel(name_graph_latex,'Interpreter','latex','FontSize',20) ;


                % ============= Mise en forme : global ============= %
                pbasp = pbaspect ;
                pbaspect([pbasp(1),pbasp(1),pbasp(3)]) ;
        
                ax = gca ;
                ax.XRuler.SecondCrossoverValue = 0 ;
                ax.YRuler.SecondCrossoverValue = 0 ;
                ax.ZAxis.FontSize = 20 ;

                grid on
                view(-45,30)

                title(name_graph_latex,'Interpreter','Latex','FontSize',40) ;
        
                % ============= Légende ============= %
                hold on
                h(1) = fill([NaN,NaN,NaN],[NaN,NaN,NaN],couleur(3,:)) ;
                h(2) = fill([NaN,NaN,NaN],[NaN,NaN,NaN],couleur(6,:)) ;
                hold off
        

                l = legend(h,{'Analytic LLDPM','Numeric Finite Differences'},'Fontsize',30,'Interpreter','Latex','Location','south') ;
                l.Position(1) = 0.44  ;
                l.Position(2) = 0.015  ;
        

                % ============= Enregistrement ============= %
                cd(['DATA/',name])
                
                try 
                    saveas(figure(1),strcat(name_file,'.fig')) ;
                    saveas(figure(1),strcat(name_file,'.png')) ;
                catch exception
                    disp('')
                end

                cd ../..


                close all

                % ============= Re-init name for is0 ============= %
                if iDeriv == 4 || iDeriv == 5 || iMat == 1

                    name_file = name_file_init ;
                    name_graph_latex = name_graph_latex_init ;

                end

            end

        end
        
        vect_select_deriv = vect_select_deriv_init  ;

    end
end

