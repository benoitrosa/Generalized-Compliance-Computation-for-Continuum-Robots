classdef MemD00TS



    % ====== Members ======
    properties

        mem_d00Ts_duzj0       = [] ;
        mem_d00Ts_dm0j0       = [] ;
        mem_d00Ts_dn0j0       = [] ;
        mem_d00Ts_dtcj        = [] ;
        mem_d00Ts_dbcj        = [] ;
        mem_d00Ts_dtaus0      = [] ;
        mem_d00Ts_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00TS(varargin)
            if nargin == 7

                mc.mem_d00Ts_duzj0    = varargin{1} ;
                mc.mem_d00Ts_dm0j0    = varargin{2} ;
                mc.mem_d00Ts_dn0j0    = varargin{3} ;
                mc.mem_d00Ts_dtcj     = varargin{4} ;
                mc.mem_d00Ts_dbcj     = varargin{5} ;
                mc.mem_d00Ts_dtaus0   = varargin{6} ;
                mc.mem_d00Ts_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Ts_duzj0 , mem_d00Ts_dm0j0 , mem_d00Ts_dn0j0 , ...
                  mem_d00Ts_dtcj , mem_d00Ts_dbcj , mem_d00Ts_dtaus0 , ...
                  mem_d00Ts_dfs0] = Get_All_MemD00TS(mc)

            mem_d00Ts_duzj0   = mc.mem_d00Ts_duzj0      ;
            mem_d00Ts_dm0j0   = mc.mem_d00Ts_dm0j0      ;
            mem_d00Ts_dn0j0   = mc.mem_d00Ts_dn0j0      ;
            mem_d00Ts_dtcj    = mc.mem_d00Ts_dtcj       ;
            mem_d00Ts_dbcj    = mc.mem_d00Ts_dbcj       ;
            mem_d00Ts_dtaus0  = mc.mem_d00Ts_dtaus0     ;
            mem_d00Ts_dfs0    = mc.mem_d00Ts_dfs0       ;
           
        end
    
    end
end