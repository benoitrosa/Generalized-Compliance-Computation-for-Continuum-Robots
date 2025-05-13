function [simulation_param , tacr_carac , tacr_act , tacr_load , ...
          tacr_construc , prc_s0 , delta_f0] ...
          = Load_Config(name)
    
% ======================================================================= %
% ======================================================================= %
%
% This function loads the configuration file named "<name>_config.mat" 
% saved in the "TACR_Config" folder.
%
% ====================
% ====== INPUTS ====== 
%
% name                  : (string) Name of the configuration
%
% ====================
% ===== OUTPUTS ====== 
%
% simulation_param      : (class) Model settings
% tacr_carac            : (class) Robot features
% tacr_act              : (class) Robot actuation
% tacr_load             : (class) Robot loads
% tacr_construc         : (class) Robot features related to the model settings
% prc_s0                : (_ x 1) Vector with the curvilinear abscissa of the loaded points in pourcent of the CTCR length
% delta_f0              : (_ x 3) Matrix with the force variaitons vectors (row i for force i)
%
% ======================================================================= %
% ======================================================================= %



    fprintf([' == ',name,'_config.mat \n']) ;

    % ================
    % ======== Create folder ========

    if exist(strcat('DATA/',name),'dir') == 0
        mkdir(strcat('DATA/',name)) ;
    end


    % ================
    % ==== Load the config file ====

    if exist(strcat(['TACR_Config/',name,'_config.mat'])) == 0
        disp('Configuration file not found, please use Write_Config function')
    else
        cd(['DATA/',name]) ;
        diary(strcat(name,'_log.txt')) ;
        cd ../..

        cd('TACR_Config')
        load(strcat(name,'_config.mat') , ...
             'simulation_param' , 'tacr_carac' , 'tacr_act' , ...
             'tacr_load' , 'tacr_construc' , 'prc_s0' , 'delta_f0') ;

        cd ..
    end

end