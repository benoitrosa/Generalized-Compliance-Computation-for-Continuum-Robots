function flag_ctcr = CTCR_Setting_OK(ctcr_carac , ctcr_act , bool_disp)

% ======================================================================= %
% ======================================================================= %

% This function check if the actuation, especially the translation of the tubes, is correct

% ====================
% ====== INPUTS ====== 

% ctcr_carac    : Robot features
% ctcr_act      : Robot actuation
% bool_disp     : [boolean] Display the result in the terminal ?  

% ====================
% ===== OUTPUTS ====== 

% flag_ctcr     : [boolean] Is the actuation correct ? 

% ======================================================================= %
% ======================================================================= %



    % Flags initialization
    flag_ctcr = true ;
    flag_ctcr_straight = true ;

    % Checking relatives tubes positions
    for iT = 1:ctcr_carac.nbT-1
        if ~(ctcr_act.beta_c(iT) - ctcr_carac.L(iT) >= ctcr_act.beta_c(iT+1) - ctcr_carac.L(iT+1)) ...
                || ~(ctcr_act.beta_c(iT) <= ctcr_act.beta_c(iT+1))
            
            flag_ctcr = false ;

        end
    end

    % Checking absolute tubes positions
    for iT = 1:ctcr_carac.nbT
        if ctcr_act.beta_c(iT) - ctcr_carac.L(iT) >= 0

            flag_ctcr = false ;

        end
    end

    if bool_disp
        % Display the tubes boundaries
        mem_points                                          = zeros(2,3*ctcr_carac.nbT+1) ;
        
        % Beginnings of the tubes
        mem_points(1,1:ctcr_carac.nbT)                      = ctcr_carac.nbT+1-linspace(1,ctcr_carac.nbT,ctcr_carac.nbT) ;
        
        % Origin
        mem_points(1,ctcr_carac.nbT+1)                      = 0 ;
        
        % Ending of the tubes
        mem_points(1,ctcr_carac.nbT+2:2*ctcr_carac.nbT+1)   = linspace(1,ctcr_carac.nbT,ctcr_carac.nbT) ;
    
        % Curvature point
        mem_points(1,2*ctcr_carac.nbT+2:end)                = linspace(1,ctcr_carac.nbT,ctcr_carac.nbT) ;
    
        for iT = 1:ctcr_carac.nbT
            mem_points(2,ctcr_carac.nbT+1-iT)   = ctcr_act.beta_c(iT) - ctcr_carac.L(iT) ;
            mem_points(2,ctcr_carac.nbT+1+iT)   = ctcr_act.beta_c(iT) ;
            mem_points(2,2*ctcr_carac.nbT+1+iT) = ctcr_act.beta_c(iT) + ctcr_carac.Lr(iT) - ctcr_carac.L(iT) ;
        end
    
        mem_points      = sortrows(mem_points',2)'  ;
        string_points   = string(mem_points(1,:))   ;
    
        for iT = 1:ctcr_carac.nbT
            tp = find(mem_points(1,:) == iT,2,'first') ;
            ind = tp(2) ;
            
            string_points(ind) = strcat({'▲ '},string(mem_points(1,ind))) ;
        end
        
        string_points(find(mem_points(1,:) == 0)) = '▶ 0 ◀' ;
        if ~flag_ctcr_straight
    
            disp(' ')
            disp('==============================================================================')
            disp('================================ //// ! \\\\ =================================')
            disp('======================= Straight lengths tubes problem =======================')
            disp(' ')
    
            flag_ctcr = false ;
    
        else
    
            if ~flag_ctcr
                disp(' ')
                disp('==============================================================================')
                disp('================================ //// ! \\\\ =================================')
                disp('========================== Tubes positions problem ===========================')
                disp(' ')
        
            else
    
                disp(' ============ Tubes positions OK')

            end
        
            str_mem_points = [["Tube n°" ; "s position"], [string_points;string(mem_points(2,:))]] ;
            disp(str_mem_points)
        
            disp('===============================================================================================================================================') ;
    
        end
    end

end