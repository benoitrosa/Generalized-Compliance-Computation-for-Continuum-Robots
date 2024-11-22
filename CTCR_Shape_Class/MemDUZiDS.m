classdef MemDUZiDS

    % ====== Members ======
    properties

        mem_duzi_duzj0_ds       = [] ;
        mem_duzi_dm0j0_ds       = [] ;
        mem_duzi_dn0j0_ds       = [] ;
        mem_duzi_dtcj_ds        = [] ;
        mem_duzi_dbcj_ds        = [] ;
        mem_duzi_dtaus0_ds      = [] ;
        mem_duzi_dfs0_ds        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDUZiDS(varargin)
            if nargin == 7

                mc.mem_duzi_duzj0_ds    = varargin{1} ;
                mc.mem_duzi_dm0j0_ds    = varargin{2} ;
                mc.mem_duzi_dn0j0_ds    = varargin{3} ;
                mc.mem_duzi_dtcj_ds     = varargin{4} ;
                mc.mem_duzi_dbcj_ds     = varargin{5} ;
                mc.mem_duzi_dtaus0_ds   = varargin{6} ;
                mc.mem_duzi_dfs0_ds     = varargin{7} ;
               
            end
        end

        % ====== Get all ======
        function [mem_duzi_duzj0_ds , mem_duzi_dm0j0_ds , mem_duzi_dn0j0_ds , ...
                  mem_duzi_dtcj_ds , mem_duzi_dbcj_ds , mem_duzi_dtaus0_ds , ...
                  mem_duzi_dfs0_ds] = Get_All_MemDUZiDS(mc)

            mem_duzi_duzj0_ds   = mc.mem_duzi_duzj0_ds      ;
            mem_duzi_dm0j0_ds   = mc.mem_duzi_dm0j0_ds      ;
            mem_duzi_dn0j0_ds   = mc.mem_duzi_dn0j0_ds      ;
            mem_duzi_dtcj_ds    = mc.mem_duzi_dtcj_ds       ;
            mem_duzi_dbcj_ds    = mc.mem_duzi_dbcj_ds       ;
            mem_duzi_dtaus0_ds  = mc.mem_duzi_dtaus0_ds     ;
            mem_duzi_dfs0_ds    = mc.mem_duzi_dfs0_ds       ;

        end
    
    end
end

