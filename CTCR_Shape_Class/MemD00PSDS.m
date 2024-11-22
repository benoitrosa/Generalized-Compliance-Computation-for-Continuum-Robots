classdef MemD00PSDS


    % ====== Members ======
    properties

        mem_d00Ps_duzj0_ds       = [] ;
        mem_d00Ps_dm0j0_ds       = [] ;
        mem_d00Ps_dn0j0_ds       = [] ;
        mem_d00Ps_dtcj_ds        = [] ;
        mem_d00Ps_dbcj_ds        = [] ;
        mem_d00Ps_dtaus0_ds      = [] ;
        mem_d00Ps_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00PSDS(varargin)
            if nargin == 7

                mc.mem_d00Ps_duzj0_ds    = varargin{1} ;
                mc.mem_d00Ps_dm0j0_ds    = varargin{2} ;
                mc.mem_d00Ps_dn0j0_ds    = varargin{3} ;
                mc.mem_d00Ps_dtcj_ds     = varargin{4} ;
                mc.mem_d00Ps_dbcj_ds     = varargin{5} ;
                mc.mem_d00Ps_dtaus0_ds   = varargin{6} ;
                mc.mem_d00Ps_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Ps_duzj0_ds , mem_d00Ps_dm0j0_ds , mem_d00Ps_dn0j0_ds , ...
                  mem_d00Ps_dtcj_ds , mem_d00Ps_dbcj_ds , mem_d00Ps_dtaus0_ds , ...
                  mem_d00Ps_dfs0_ds] = Get_All_MemD00PSDS(mc)

            mem_d00Ps_duzj0_ds   = mc.mem_d00Ps_duzj0_ds      ;
            mem_d00Ps_dm0j0_ds   = mc.mem_d00Ps_dm0j0_ds      ;
            mem_d00Ps_dn0j0_ds   = mc.mem_d00Ps_dn0j0_ds      ;
            mem_d00Ps_dtcj_ds    = mc.mem_d00Ps_dtcj_ds       ;
            mem_d00Ps_dbcj_ds    = mc.mem_d00Ps_dbcj_ds       ;
            mem_d00Ps_dtaus0_ds  = mc.mem_d00Ps_dtaus0_ds     ;
            mem_d00Ps_dfs0_ds    = mc.mem_d00Ps_dfs0_ds       ;
           
        end
    
    end
end