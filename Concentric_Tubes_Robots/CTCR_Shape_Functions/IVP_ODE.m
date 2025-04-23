function mem_bvp = IVP_ODE(is , ctcr_construc , mem_bvp)

% ======================================================================= %
% ======================================================================= %
%
% This function computes the state vector ODE
%
% ====================
% ====== INPUTS ====== 
%
% is                    : (int ∊ [1 , nbP])   Index of the current curvilinear abscissa
% ctcr_construc         : (class)             Robot features related to the model settings
% mem_bvp               : (class)             Memory of the BVP variables 
%
% ====================
% ===== OUTPUTS ====== 
%
% mem_bvp               : (class)             Memory of the BVP variables 
%
% ======================================================================= %
% ======================================================================= %


    % ========================================================== %
    % ================== Getting input values ================== %
    
    K               = ctcr_construc.K ;
    vect_ind_iT     = ctcr_construc.vect_ind_iT ;
    ui_init         = ctcr_construc.ui_init ;
    uz              = mem_bvp.mem_y.mem_uz(:,is) ;
    m0              = mem_bvp.mem_y.mem_m0(:,is) ;
    n0              = mem_bvp.mem_y.mem_n0(:,is) ;
    u0              = mem_bvp.mem_u0(:,is) ;
    R0              = mem_bvp.mem_y.mem_R0(:,:,is) ;

    % ========================================================== %
    % ========================================================== %


    
    
      
    % Vector of the tubes involved on the current discretization point
    vectT = find(vect_ind_iT(:,1)<=is & is<=vect_ind_iT(:,3)) ;   

    for i = 1:length(vectT)
        iT = vectT(i) ;
        
        % ================== %
        % ===== dti_ds ===== %
        % (eq 26a)

        mem_bvp.mem_ys.mem_ts(iT,is)    = uz(iT) ;



        % ================== %
        % ===== duzi_ds ==== %
        % (eq 26b)

        temp                            = rotz(mem_bvp.mem_y.mem_t(iT,is))'*u0 ;
        mem_bvp.mem_uixy(:,iT,is)       = temp(1:2,1) ;
        mem_bvp.mem_ys.mem_uzs(iT,is)   = K(1,1,iT)/K(3,3,iT)*(mem_bvp.mem_uixy(:,iT,is)'*[ui_init(2,is,iT);-ui_init(1,is,iT)]) ; 

     end  


    if (is >= ctcr_construc.ind_origin) && ~(is == ctcr_construc.nbP)

        % ================== %
        % ===== dm0_ds ===== %
        % (eq 26c)

        mem_bvp.mem_ys.mem_m0s(:,is)    = hat(u0)*m0 ...
                                          - hat([0;0;1])*n0 ...
                                          - R0'*ctcr_construc.vect_tau_dist(:,is) ;


        % ================== %
        % ===== dn0_ds ===== %
        % (eq 26d) 

        mem_bvp.mem_ys.mem_n0s(:,is)    = hat(u0)*n0 ...
                                          - R0'*ctcr_construc.vect_f_dist(:,is) ;


    end

    % ================== %
    % ===== dR0_ds ===== %
    % (eq 26e) 

    mem_bvp.mem_ys.mem_R0s(:,:,is)  = R0*hat(u0) ;
        

    % ===================== %
    % ===== dp0(s)_ds ===== %
    % (eq 26f) 

    mem_bvp.mem_ys.mem_p0s(:,is)    = R0*[0;0;1] ;



end