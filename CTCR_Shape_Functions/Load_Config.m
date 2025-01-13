function [simulation_param , ctcr_carac , ctcr_act , ctcr_load , ...
          ctcr_construc , prc_s0 , delta_f0] ...
          = Load_Config(name)
    
    % ================
    % ======== Create folder ========

    if exist(strcat('DATA/',name),'dir') == 0
        mkdir(strcat('DATA/',name)) ;
    end
    

    % ================
    % ==== Load the config file ====

    if exist(strcat('CTCR_Config/'),'dir') == 0
        disp('Configuration file not found, please use Write_Config function')
    else
        cd(['DATA/',name]) ;
        diary(strcat(name,'_log.txt')) ;
        cd ../..

        cd('CTCR_Config')
        load(strcat(name,'_config.mat') , ...
             'simulation_param' , 'ctcr_carac' , 'ctcr_act' , ...
             'ctcr_load' , 'ctcr_construc' , 'prc_s0' , 'delta_f0') ;

        cd ..
    end

end