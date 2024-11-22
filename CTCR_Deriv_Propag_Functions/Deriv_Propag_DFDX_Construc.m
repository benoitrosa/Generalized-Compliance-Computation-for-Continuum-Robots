function mem_deriv_propag_mid ...
    = Deriv_Propag_DFDX_Construc(...
    is , ctcr_construc , ctcr_carac , mem_deriv_propag_low , mem_deriv_propag_mid , simulation_param)



% EXPLAIN THE FUNCTIONS
%
%
%
%
%


    
    % ========================================================== %
    % ================== Getting input values ================== %
    
    nbT             = ctcr_carac.nbT ;    
    
    ind_origin      = ctcr_construc.ind_origin ;

    % ========================================================== %
    % ========================================================== %



    % ======================================================================= %
    % ============================ MaJ mem_df_dx ============================ %


    % =============== Attc ============= %
    mem_deriv_propag_mid.mem_df_dx(1:nbT,1:nbT,is)                              = mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds(:,:,is)      ;


    % =============== Atbc ============= %
    mem_deriv_propag_mid.mem_df_dx(1:nbT,nbT+1:2*nbT,is)                        = mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds(:,:,is)      ;


    % ============== Atuz0 ============= %
    mem_deriv_propag_mid.mem_df_dx(1:nbT,2*nbT+6+1:2*nbT+6+nbT,is)              = mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds(:,:,is)     ;





    % =============== Auztc ============ %
    mem_deriv_propag_mid.mem_df_dx(nbT+1:2*nbT,1:nbT,is)                        = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds(:,:,is)    ;


    % =============== Auzbc ============ %
    mem_deriv_propag_mid.mem_df_dx(nbT+1:2*nbT,nbT+1:2*nbT,is)                  = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds(:,:,is)    ;


    % ============== Auzuz0 ============ %
    mem_deriv_propag_mid.mem_df_dx(nbT+1:2*nbT,2*nbT+6+1:3*nbT+6,is)            = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds(:,:,is)   ;




    if is >= ind_origin
    % Updating only the non-zeros derivatives to reduce time computation

        % ============== Atm0 ============== %
        mem_deriv_propag_mid.mem_df_dx(1:nbT,3*nbT+6+1:3*nbT+9,is)              = mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds(:,:,is)     ;
    
    
        % ============== Atn0 ============== %
        mem_deriv_propag_mid.mem_df_dx(1:nbT,3*nbT+9+1:3*nbT+12,is)             = mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds(:,:,is)     ;





        % ============== Auzm0 ============= %
        mem_deriv_propag_mid.mem_df_dx(nbT+1:2*nbT,3*nbT+6+1:3*nbT+9,is)        = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds(:,:,is)   ;
        

        % ============== Auzn0 ============= %
        mem_deriv_propag_mid.mem_df_dx(nbT+1:2*nbT,3*nbT+9+1:3*nbT+12,is)       = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds(:,:,is)   ;
        




        % ============== Amtc ============= %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+1:2*nbT+3,1:nbT,is)                = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds(:,:,is)  ;
        

        % ============== Ambc ============= %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+1:2*nbT+3,nbT+1:2*nbT,is)          = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds(:,:,is)  ;
        

        % ============== Amuz0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+1:2*nbT+3,2*nbT+6+1:3*nbT+6,is)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds(:,:,is) ;
        

        % ============== Amm0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+1:2*nbT+3,3*nbT+6+1:3*nbT+9,is)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds(:,:,is) ;
        
        
        % ============== Amn0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+1:2*nbT+3,3*nbT+9+1:3*nbT+12,is)   = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds(:,:,is) ;

        




        % ============== Antc ============= %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+3+1:2*nbT+6,1:nbT,is)              = mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds(:,:,is)  ;
        

        % ============== Anbc ============= %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+3+1:2*nbT+6,nbT+1:2*nbT,is)        = mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds(:,:,is)  ;
        

        % ============== Anuz0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+3+1:2*nbT+6,2*nbT+6+1:3*nbT+6,is)  = mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds(:,:,is) ;
        

        % ============== Anm0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+3+1:2*nbT+6,3*nbT+6+1:3*nbT+9,is)  = mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds(:,:,is) ;
        
        
        % ============== Ann0 ============ %
        mem_deriv_propag_mid.mem_df_dx(2*nbT+3+1:2*nbT+6,3*nbT+9+1:3*nbT+12,is) = mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds(:,:,is) ;
    
    end

    % ======================================================================= %
    % =========================== MaJ mem_df_dws0 =========================== %

    if is >= ind_origin
    % Updating only the non-zeros derivatives to reduce time computation

        if ismember(is,simulation_param.pt_compl)
            ind = find(simulation_param.pt_compl == is) ;

            for ind_is0 = 1:length(simulation_param.pt_compl) 

                % ============== Attaus0 ============== %
                mem_deriv_propag_mid.mem_df_dws0(1:nbT,1:3,ind,ind_is0)              = mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds(:,:,ind,ind_is0)   ;
            
                % ============== Auztaus0 ============= %
                mem_deriv_propag_mid.mem_df_dws0(nbT+1:2*nbT,1:3,ind,ind_is0)        = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds(:,:,ind,ind_is0) ;
                
                % ============== Amtaus0 ============ %
                mem_deriv_propag_mid.mem_df_dws0(2*nbT+1:2*nbT+3,1:3,ind,ind_is0)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds(:,:,ind,ind_is0)   ;
                
                % ============== Antaus0 ============ %
                mem_deriv_propag_mid.mem_df_dws0(2*nbT+4:2*nbT+6,1:3,ind,ind_is0)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds(:,:,ind,ind_is0)   ;
        



                % ============== Atfs0 ============== %
                mem_deriv_propag_mid.mem_df_dws0(1:nbT,4:6,ind,ind_is0)              = mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds(:,:,ind,ind_is0)     ;
            
                % ============== Auzfs0 ============= %
                mem_deriv_propag_mid.mem_df_dws0(nbT+1:2*nbT,4:6,ind,ind_is0)        = mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds(:,:,ind,ind_is0)   ;
                
                % ============== Amfs0 ============ %
                mem_deriv_propag_mid.mem_df_dws0(2*nbT+1:2*nbT+3,4:6,ind,ind_is0)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds(:,:,ind,ind_is0)     ;
                
                % ============== Anfs0 ============ %
                mem_deriv_propag_mid.mem_df_dws0(2*nbT+4:2*nbT+6,4:6,ind,ind_is0)    = mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds(:,:,ind,ind_is0)     ;


            end
        end

    end


end