classdef MemD00RSDS


    % ====== Members ======
    properties

        mem_d00Rs_duzj0_ds       = [] ;
        mem_d00Rs_dm0j0_ds       = [] ;
        mem_d00Rs_dn0j0_ds       = [] ;
        mem_d00Rs_dtcj_ds        = [] ;
        mem_d00Rs_dbcj_ds        = [] ;
        mem_d00Rs_dtaus0_ds      = [] ;
        mem_d00Rs_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00RSDS(varargin)
            if nargin == 7

                mc.mem_d00Rs_duzj0_ds    = varargin{1} ;
                mc.mem_d00Rs_dm0j0_ds    = varargin{2} ;
                mc.mem_d00Rs_dn0j0_ds    = varargin{3} ;
                mc.mem_d00Rs_dtcj_ds     = varargin{4} ;
                mc.mem_d00Rs_dbcj_ds     = varargin{5} ;
                mc.mem_d00Rs_dtaus0_ds   = varargin{6} ;
                mc.mem_d00Rs_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Rs_duzj0_ds , mem_d00Rs_dm0j0_ds , mem_d00Rs_dn0j0_ds , ...
                  mem_d00Rs_dtcj_ds , mem_d00Rs_dbcj_ds , mem_d00Rs_dtaus0_ds , ...
                  mem_d00Rs_dfs0_ds] = Get_All_MemD00RSDS(mc)

            mem_d00Rs_duzj0_ds   = mc.mem_d00Rs_duzj0_ds      ;
            mem_d00Rs_dm0j0_ds   = mc.mem_d00Rs_dm0j0_ds      ;
            mem_d00Rs_dn0j0_ds   = mc.mem_d00Rs_dn0j0_ds      ;
            mem_d00Rs_dtcj_ds    = mc.mem_d00Rs_dtcj_ds       ;
            mem_d00Rs_dbcj_ds    = mc.mem_d00Rs_dbcj_ds       ;
            mem_d00Rs_dtaus0_ds  = mc.mem_d00Rs_dtaus0_ds     ;
            mem_d00Rs_dfs0_ds    = mc.mem_d00Rs_dfs0_ds       ;
           
        end
    
    end
end