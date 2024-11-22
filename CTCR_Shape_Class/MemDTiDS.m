classdef MemDTiDS


    % ====== Members ======
    properties

        mem_dti_duzj0_ds       = [] ;
        mem_dti_dm0j0_ds       = [] ;
        mem_dti_dn0j0_ds       = [] ;
        mem_dti_dtcj_ds        = [] ;
        mem_dti_dbcj_ds        = [] ;
        mem_dti_dtaus0_ds      = [] ;
        mem_dti_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDTiDS(varargin)
            if nargin == 7

                mc.mem_dti_duzj0_ds    = varargin{1} ;
                mc.mem_dti_dm0j0_ds    = varargin{2} ;
                mc.mem_dti_dn0j0_ds    = varargin{3} ;
                mc.mem_dti_dtcj_ds     = varargin{4} ;
                mc.mem_dti_dbcj_ds     = varargin{5} ;
                mc.mem_dti_dtaus0_ds   = varargin{6} ;
                mc.mem_dti_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dti_duzj0_ds , mem_dti_dm0j0_ds , mem_dti_dn0j0_ds , ...
                  mem_dti_dtcj_ds , mem_dti_dbcj_ds , mem_dti_dtaus0_ds , ...
                  mem_dti_dfs0_ds] = Get_All_MemDTiDS(mc)

            mem_dti_duzj0_ds   = mc.mem_dti_duzj0_ds    ;
            mem_dti_dm0j0_ds   = mc.mem_dti_dm0j0_ds    ;
            mem_dti_dn0j0_ds   = mc.mem_dti_dn0j0_ds    ;
            mem_dti_dtcj_ds    = mc.mem_dti_dtcj_ds     ;
            mem_dti_dbcj_ds    = mc.mem_dti_dbcj_ds     ;
            mem_dti_dtaus0_ds  = mc.mem_dti_dtaus0_ds   ;
            mem_dti_dfs0_ds    = mc.mem_dti_dfs0_ds     ;
           
        end
    
    end
end
