classdef MemDUZi

    % ====== Members ======
    properties

        mem_duzi_duzj0       = [] ;
        mem_duzi_dm0j0       = [] ;
        mem_duzi_dn0j0       = [] ;
        mem_duzi_dtcj        = [] ;
        mem_duzi_dbcj        = [] ;
        mem_duzi_dtaus0      = [] ;
        mem_duzi_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDUZi(varargin)
            if nargin == 7

                mc.mem_duzi_duzj0    = varargin{1} ;
                mc.mem_duzi_dm0j0    = varargin{2} ;
                mc.mem_duzi_dn0j0    = varargin{3} ;
                mc.mem_duzi_dtcj     = varargin{4} ;
                mc.mem_duzi_dbcj     = varargin{5} ;
                mc.mem_duzi_dtaus0   = varargin{6} ;
                mc.mem_duzi_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_duzi_duzj0 , mem_duzi_dm0j0 , mem_duzi_dn0j0 , ...
                  mem_duzi_dtcj , mem_duzi_dbcj , mem_duzi_dtaus0 , ...
                  mem_duzi_dfs0] = Get_All_MemDUZi(mc)

            mem_duzi_duzj0      = mc.mem_duzi_duzj0     ;
            mem_duzi_dm0j0      = mc.mem_duzi_dm0j0     ;
            mem_duzi_dn0j0      = mc.mem_duzi_dn0j0     ;
            mem_duzi_dtcj       = mc.mem_duzi_dtcj      ;
            mem_duzi_dbcj       = mc.mem_duzi_dbcj      ;
            mem_duzi_dtaus0     = mc.mem_duzi_dtaus0    ;
            mem_duzi_dfs0       = mc.mem_duzi_dfs0      ;
            
        end
    
    end
end
