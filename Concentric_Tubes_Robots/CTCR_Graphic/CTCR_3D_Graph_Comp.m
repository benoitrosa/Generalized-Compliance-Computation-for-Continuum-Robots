function  [] = CTCR_3D_Graph_Comp( ...
    name                    ,  vect_select_quant       , ...
    vect_select_deriv       , ctcr_construc            , ctcr_carac               , ...
    mem_CJ                  , mem_deriv_propag_high    , ...
    mem_deriv_propag_low    , mem_FD_CJ                , mem_FD_deriv_propag_high , ...
    mem_FD_deriv_propag_low , pt_s0_FD)





% EXPLAIN THE FUNCTIONS
%
%
%
%
%




    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT                 = ctcr_carac.nbT                ;    
    
    nbP                 = ctcr_construc.nbP             ;
    vect_ind_iT         = ctcr_construc.vect_ind_iT     ;
    vect_z              = ctcr_construc.vect_z          ;
   

    % ========================================================================= %
    % ========================== Preparing the plots ========================== %
    
    set(groot,'defaultAxesTickLabelInterpreter','latex') ; 

    espace = 1 ;
    FaceAlpha = .5 ;
    Mini_espace = 0.05 ;

    couleur = [[252,210,154];[238,133,74];[1,114,151];[112,89,135];[238,167,147];[247,164,3];[172,68,31]]/255 ;
    close all


    % ============ Derivatives ============ %
    % 1  = Cs0
    % 2  = J
    % 3  = B
    % 4  = DUZ_DX
    % 5  = DT_DX
    % 6  = DM0_DX
    % 7 = DN0_DX
    % 8 = DU0_DX
    % 9 = DR0_DX
    % 10 = DP0_DX
    
    % ================= Derivators ================ %
    % 1  = tcj
    % 2  = bcj
    % 3  = uzj0
    % 4  = m0(0)
    % 5  = n0(0)
    % 6  = tau_dist
    % 7  = f_dist

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

                    % ==== DUZJ0 ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,1:nbT) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,1:nbT) ;

                    Mat_LIT = zeros(nbT+6,nbT,nbP) ;
                    Mat_FD  = zeros(nbT+6,nbT,nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial u(0)\vert_{z}}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DUZ0' ;
                
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,nbT+1:nbT+3) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,nbT+1:nbT+3) ;

                    Mat_LIT = zeros(nbT+6,3,nbP) ;
                    Mat_FD  = zeros(nbT+6,3,nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial m_0(0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DM00' ;
                
                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,nbT+4:nbT+6) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,nbT+4:nbT+6) ;

                    Mat_LIT = zeros(nbT+6,3,nbP) ;
                    Mat_FD  = zeros(nbT+6,3,nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial n_0(0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DN00' ;

                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,nbT+7:2*nbT+6) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,nbT+7:2*nbT+6) ;

                    Mat_LIT = zeros(nbT+6,nbT,nbP) ;
                    Mat_FD  = zeros(nbT+6,nbT,nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial \theta_{c}}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DTCJ' ;
                
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    tp_LIT = mem_deriv_propag_high.mem_B(:,2*nbT+7:3*nbT+6) ;
                    tp_FD  = mem_FD_deriv_propag_high.mem_FD_B(:,2*nbT+7:3*nbT+6) ;

                    Mat_LIT = zeros(nbT+6,nbT,nbP) ;
                    Mat_FD  = zeros(nbT+6,nbT,nbP) ;

                    for i = 1:length(tp_LIT(:,1))
                        for j = 1:length(tp_LIT(1,:))
        
                            Mat_LIT(i,j,:) = tp_LIT(i,j)*ones(1,1,nbP) ;
                            Mat_FD(i,j,:)  = tp_FD(i,j)*ones(1,1,nbP) ;

                        end
                    end

                    name_graph_latex = '$\frac{\partial b}{\partial \beta_{c}}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DBCJ' ;
                
                elseif iDeriv == 6

                    Mat_LIT = zeros(nbT+6,3,nbP,nbP) ;
                    Mat_FD  = zeros(nbT+6,3,nbP,nbP) ;

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

                    name_graph_latex = '$\frac{\partial b}{\partial \tau(s_0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DTAU_S0_' ;

                
                elseif iDeriv == 7

                    Mat_LIT = zeros(nbT+6,3,nbP,nbP) ;
                    Mat_FD  = zeros(nbT+6,3,nbP,nbP) ;

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

                    name_graph_latex = '$\frac{\partial b}{\partial f(s_0)}$' ;
                    name_file = 'GRAPH_3D_COMP_DB_DF_S0_' ;

                end

            % ============ UZ ============ %
            elseif iMat == 4

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_duzj0 ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DUZ0' ;
                
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dm0j0 ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DM00' ;

                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dn0j0 ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DN00' ;
                
                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dtcj ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial \theta_{c}}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DTCJ' ;
               
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dbcj ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial \beta_{c}}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DBCJ' ;
                                    
                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dtaus0 ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DTAU_S0_' ;

                
                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_duzi.mem_duzi_dfs0 ;

                    name_graph_latex = '$\frac{\partial u\vert_z}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DUZ_DF_S0_' ;

                end

            % ============ TI ============ %
            elseif iMat == 5

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_duzj0 ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial u(0)\vert_{z}}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DUZ0' ;
                    
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dm0j0 ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DM00' ;
                
                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dn0j0 ;
                    name_graph_latex = '$\frac{\partial \theta}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DN00' ;
                
                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dtcj ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DTCJ' ;
                
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dbcj ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DBCJ' ;
                                    
                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dtaus0 ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DTAU_S0_' ;

                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dti.mem_dti_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dti.mem_dti_dfs0 ;

                    name_graph_latex = '$\frac{\partial \theta}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DT_DF_S0_' ;

                end

            % ============ M0 ============ %
            elseif iMat == 6

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_duzj0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DUZ0' ;

                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dm0j0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DM00' ;

                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dn0j0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DN00' ;

                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dtcj ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DTCJ' ;
                
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dbcj ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DBCJ' ;
                
                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DTAU_S0_' ;

                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dm0.mem_dm0_dfs0 ;

                    name_graph_latex = '$\frac{\partial m_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DM0_DF_S0_' ;

                end

            % ============ N0 ============ %
            elseif iMat == 7

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_duzj0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DUZ0' ;
                
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dm0j0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DM00' ;
                
                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dn0j0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DN00' ;
                
                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dtcj ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DTCJ' ;
                                    
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dbcj ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DBCJ' ;
                
                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DTAU_S0_' ;

                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dn0.mem_dn0_dfs0 ;

                    name_graph_latex = '$\frac{\partial n_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DN0_DF_S0_' ;

                end

            % ============ U0 ============ %
            elseif iMat == 8

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_duzj0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DUZ0' ;

                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dm0j0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DM00' ;
                
                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dn0j0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DN00' ;
                
                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dtcj ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DTCJ' ;
                    
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dbcj ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DBCJ' ;
                    
                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dtaus0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DTAU_S0_' ;

                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_du0.mem_du0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_du0.mem_du0_dfs0 ;

                    name_graph_latex = '$\frac{\partial u_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DU0_DF_S0_' ;

                end

            % ============ R0 ============ %
            elseif iMat == 9

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_duzj0 ;

                    Mat_LIT = zeros(9,nbT,nbP) ;
                    Mat_FD  = zeros(9,nbT,nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end
                    
                    name_graph_latex = '$\frac{\partial R_0}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DUZ0' ;
                
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dm0j0 ;

                    Mat_LIT = zeros(9,3,nbP) ;
                    Mat_FD  = zeros(9,3,nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DM00' ;

                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dn0j0 ;

                    Mat_LIT = zeros(9,3,nbP) ;
                    Mat_FD  = zeros(9,3,nbP) ;
                    
                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:3
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end
                    
                    name_graph_latex = '$\frac{\partial R_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DN00' ;

                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dtcj ;

                    Mat_LIT = zeros(9,nbT,nbP) ;
                    Mat_FD  = zeros(9,nbT,nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DTCJ' ;
                
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dbcj ;

                    Mat_LIT = zeros(9,nbT,nbP) ;
                    Mat_FD  = zeros(9,nbT,nbP) ;

                    for tp_is = 1:length(tp_LIT(1,1,1,:))
                        for tp_deriv = 1:nbT
                        
                            Mat_LIT(:,tp_deriv,tp_is) = reshape(tp_LIT(:,:,tp_deriv,tp_is),[],1) ;
                            Mat_FD(:,tp_deriv,tp_is)  = reshape(tp_FD(:,:,tp_deriv,tp_is),[],1) ;
                        end

                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DBCJ' ;

                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dtaus0 ;

                    Mat_LIT = zeros(9,3,nbP,nbP) ;
                    Mat_FD  = zeros(9,3,nbP,nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:length(tp_LIT(1,1,1,:,tp_is0))
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            
                            end
                        end
                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DTAU_S0_' ;

                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    tp_LIT = mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0 ;
                    tp_FD  = mem_FD_deriv_propag_low.mem_FD_dR0.mem_dR0_dfs0 ;

                    Mat_LIT = zeros(9,3,nbP,nbP) ;
                    Mat_FD  = zeros(9,3,nbP,nbP) ;

                    for tp_is0 = 1:nbP
                        for tp_is = 1:length(tp_LIT(1,1,1,:,tp_is0))
                            for tp_deriv = 1:3
                            
                                Mat_LIT(:,tp_deriv,tp_is,tp_is0) = reshape(tp_LIT(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                                Mat_FD(:,tp_deriv,tp_is,tp_is0)  = reshape(tp_FD(:,:,tp_deriv,tp_is,tp_is0),[],1) ;
                            end
    
                        end
                    end

                    name_graph_latex = '$\frac{\partial R_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DR0_DF_S0_' ;

                end

            % ============ P0 ============ %
            elseif iMat == 10

                if iDeriv == 1

                    % ==== DUZJ0 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_duzj0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial u(0)\vert_z}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DUZ0' ;
                
                elseif iDeriv == 2

                    % ==== DM00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dm0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dm0j0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial m_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DM00' ;

                elseif iDeriv == 3

                    % ==== DN00 ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dn0j0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dn0j0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial n_0(0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DN00' ;

                elseif iDeriv == 4

                    % ==== DTCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dtcj ;
                    
                    name_graph_latex = '$\frac{\partial p_0}{\partial \theta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DTCJ' ;
                    
                elseif iDeriv == 5

                    % ==== DBCJ ==== %
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dbcj ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial \beta_c}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DBCJ' ;

                elseif iDeriv == 6

                    % ==== DTAUS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dtaus0 ;
                    
                    name_graph_latex = '$\frac{\partial p_0}{\partial \tau(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DTAU_S0_' ;
                
                elseif iDeriv == 7

                    % ==== DFS0 ==== %  
                    Mat_LIT = mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0 ;
                    Mat_FD  = mem_FD_deriv_propag_low.mem_FD_dP0.mem_dP0_dfs0 ;

                    name_graph_latex = '$\frac{\partial p_0}{\partial f(s_0)}(s)$' ;
                    name_file = 'GRAPH_3D_COMP_DP0_DF_S0_' ;

                end

            end
                    
            % Méthode générale ppur gérer les points éventuels en is0
            if length(Mat_LIT(1,1,1,:)) == 1
                vect_is0 = 1 ;
            else
                vect_is0 = pt_s0_FD ;
            end

            for tp_is0 = 1:length(vect_is0)
                is0 = vect_is0(tp_is0) ;

                % ============= Création du graph ============= %
                figure('units','normalized','outerposition',[0 0 1 1]) ;    
                set(gca,'fontsize',12) ;
                
                idecl = 0 ;

                mem_yticks = {} ;

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
                        plot3([ctcr_construc.vect_z(1)*1e3,ctcr_construc.vect_z(end)*1e3],idecl*espace*ones(1,2),[0,0],'LineStyle','-','Marker','none','LineWidth',0.5,'Color','k') ;
                        
                        hold off

                        % Creating the thicks
                        mem_yticks{idecl} = strcat('$(',num2str(ilig),',',num2str(icol),')$') ;

                    end
                end

                % ============= Référence des tubes : Lc_i ============= %
                for iT = 1:nbT
                    hold on
                    plot3([vect_z(vect_ind_iT(iT,2)),vect_z(vect_ind_iT(iT,2))]*1e3,[0-Mini_espace , idecl+Mini_espace],[0,0],'LineStyle','--','Marker','none','LineWidth',3,'Color',[79,222,99]/255) % vert
                    text(vect_z(vect_ind_iT(iT,2))*1e3,-.5,0,strcat('$L_{c',num2str(iT),'}$'),'Interpreter','latex','FontSize',25,'Color',[79,222,99]/255) % vert
                    hold off
                end
        
                % ============= Référence des tubes : s=0 ============= %
                hold on
                plot3([0,0],[0-Mini_espace , idecl+Mini_espace],[0,0],'LineStyle','--','Marker','none','LineWidth',3,'Color',[7,99,255]/255) % bleu
                text(0,-.5,0,strcat('$s=0$'),'Interpreter','latex','FontSize',25,'Color',[7,99,255]/255) % bleu
                hold off

                % ============= Référence des tubes : L_i ============= %
                for iT = 1:nbT
                    hold on
                    plot3([vect_z(vect_ind_iT(iT,3)),vect_z(vect_ind_iT(iT,3))]*1e3,[0-Mini_espace , idecl+Mini_espace],[0,0],'LineStyle','--','Marker','none','LineWidth',3,'Color',[237,24,31]/255) % rouge
                    text(vect_z(vect_ind_iT(iT,3))*1e3,-.5,0,strcat('$L_{',num2str(iT),'}$'),'Interpreter','latex','FontSize',25,'Color',[237,24,31]/255) % rouge
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
                if iDeriv == 6 || iDeriv == 7 || iMat == 1

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
                if iDeriv == 6 || iDeriv == 7 || iMat == 1

                    name_file = name_file_init ;
                    name_graph_latex = name_graph_latex_init ;

                end

            end

        end
        
        vect_select_deriv = vect_select_deriv_init  ;

    end
end

