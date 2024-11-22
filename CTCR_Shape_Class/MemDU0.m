classdef MemDU0

    % ====== Members ======
    properties

        mem_du0_duzj0       = [] ;
        mem_du0_dm0j0       = [] ;
        mem_du0_dn0j0       = [] ;
        mem_du0_dtcj        = [] ;
        mem_du0_dbcj        = [] ;
        mem_du0_dtaus0      = [] ;
        mem_du0_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDU0(varargin)
            if nargin == 7

                mc.mem_du0_duzj0    = varargin{1} ;
                mc.mem_du0_dm0j0    = varargin{2} ;
                mc.mem_du0_dn0j0    = varargin{3} ;
                mc.mem_du0_dtcj     = varargin{4} ;
                mc.mem_du0_dbcj     = varargin{5} ;
                mc.mem_du0_dtaus0   = varargin{6} ;
                mc.mem_du0_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_du0_duzj0 , mem_du0_dm0j0 , mem_du0_dn0j0 , ...
                  mem_du0_dtcj , mem_du0_dbcj , mem_du0_dtaus0 , ...
                  mem_du0_dfs0] = Get_All_MemDU0(mc)

            mem_du0_duzj0   = mc.mem_du0_duzj0      ;
            mem_du0_dm0j0   = mc.mem_du0_dm0j0      ;
            mem_du0_dn0j0   = mc.mem_du0_dn0j0      ;
            mem_du0_dtcj    = mc.mem_du0_dtcj       ;
            mem_du0_dbcj    = mc.mem_du0_dbcj       ;
            mem_du0_dtaus0  = mc.mem_du0_dtaus0     ;
            mem_du0_dfs0    = mc.mem_du0_dfs0       ;
           
        end
    
    end
end