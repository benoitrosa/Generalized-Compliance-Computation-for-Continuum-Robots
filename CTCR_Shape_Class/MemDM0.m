classdef MemDM0

    % ====== Members ======
    properties

        mem_dm0_duzj0       = [] ;
        mem_dm0_dm0j0       = [] ;
        mem_dm0_dn0j0       = [] ;
        mem_dm0_dtcj        = [] ;
        mem_dm0_dbcj        = [] ;
        mem_dm0_dtaus0      = [] ;
        mem_dm0_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDM0(varargin)
            if nargin == 7

                mc.mem_dm0_duzj0    = varargin{1} ;
                mc.mem_dm0_dm0j0    = varargin{2} ;
                mc.mem_dm0_dn0j0    = varargin{3} ;
                mc.mem_dm0_dtcj     = varargin{4} ;
                mc.mem_dm0_dbcj     = varargin{5} ;
                mc.mem_dm0_dtaus0   = varargin{6} ;
                mc.mem_dm0_dfs0     = varargin{7} ;

            end
        end

        % ====== Get all ======
        function [mem_dm0_duzj0 , mem_dm0_dm0j0 , mem_dm0_dn0j0 , ...
                  mem_dm0_dtcj , mem_dm0_dbcj , mem_dm0_dtaus0 , ...
                  mem_dm0_dfs0] = Get_All_MemDM0(mc)

            mem_dm0_duzj0   = mc.mem_dm0_duzj0      ;
            mem_dm0_dm0j0   = mc.mem_dm0_dm0j0      ;
            mem_dm0_dn0j0   = mc.mem_dm0_dn0j0      ;
            mem_dm0_dtcj    = mc.mem_dm0_dtcj       ;
            mem_dm0_dbcj    = mc.mem_dm0_dbcj       ;
            mem_dm0_dtaus0  = mc.mem_dm0_dtaus0     ;
            mem_dm0_dfs0    = mc.mem_dm0_dfs0       ;

        end
    
    end
end
