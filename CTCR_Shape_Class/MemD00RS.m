classdef MemD00RS

    % ====== Members ======
    properties

        mem_d00Rs_duzj0       = [] ;
        mem_d00Rs_dm0j0       = [] ;
        mem_d00Rs_dn0j0       = [] ;
        mem_d00Rs_dtcj        = [] ;
        mem_d00Rs_dbcj        = [] ;
        mem_d00Rs_dtaus0      = [] ;
        mem_d00Rs_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemD00RS(varargin)
            if nargin == 7

                mc.mem_d00Rs_duzj0    = varargin{1} ;
                mc.mem_d00Rs_dm0j0    = varargin{2} ;
                mc.mem_d00Rs_dn0j0    = varargin{3} ;
                mc.mem_d00Rs_dtcj     = varargin{4} ;
                mc.mem_d00Rs_dbcj     = varargin{5} ;
                mc.mem_d00Rs_dtaus0   = varargin{6} ;
                mc.mem_d00Rs_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_d00Rs_duzj0 , mem_d00Rs_dm0j0 , mem_d00Rs_dn0j0 , ...
                  mem_d00Rs_dtcj , mem_d00Rs_dbcj , mem_d00Rs_dtaus0 , ...
                  mem_d00Rs_dfs0] = Get_All_MemD00RS(mc)

            mem_d00Rs_duzj0   = mc.mem_d00Rs_duzj0      ;
            mem_d00Rs_dm0j0   = mc.mem_d00Rs_dm0j0      ;
            mem_d00Rs_dn0j0   = mc.mem_d00Rs_dn0j0      ;
            mem_d00Rs_dtcj    = mc.mem_d00Rs_dtcj       ;
            mem_d00Rs_dbcj    = mc.mem_d00Rs_dbcj       ;
            mem_d00Rs_dtaus0  = mc.mem_d00Rs_dtaus0     ;
            mem_d00Rs_dfs0    = mc.mem_d00Rs_dfs0       ;
           
        end
    
    end
end