classdef MemDU0DS

    % ====== Members ======
    properties

        mem_du0_duzj0_ds       = [] ;
        mem_du0_dm0j0_ds       = [] ;
        mem_du0_dn0j0_ds       = [] ;
        mem_du0_dtcj_ds        = [] ;
        mem_du0_dbcj_ds        = [] ;
        mem_du0_dtaus0_ds      = [] ;
        mem_du0_dfs0_ds        = [] ;
        
    end

    methods

        % ====== Constructor ======
        function mc = MemDU0DS(varargin)
            if nargin == 7

                mc.mem_du0_duzj0_ds    = varargin{1} ;
                mc.mem_du0_dm0j0_ds    = varargin{2} ;
                mc.mem_du0_dn0j0_ds    = varargin{3} ;
                mc.mem_du0_dtcj_ds     = varargin{4} ;
                mc.mem_du0_dbcj_ds     = varargin{5} ;
                mc.mem_du0_dtaus0_ds   = varargin{6} ;
                mc.mem_du0_dfs0_ds     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_du0_duzj0_ds , mem_du0_dm0j0_ds , mem_du0_dn0j0_ds , ...
                  mem_du0_dtcj_ds , mem_du0_dbcj_ds , mem_du0_dtaus0_ds , ...
                  mem_du0_dfs0_ds] = Get_All_MemDU0DS(mc)

            mem_du0_duzj0_ds   = mc.mem_du0_duzj0_ds      ;
            mem_du0_dm0j0_ds   = mc.mem_du0_dm0j0_ds      ;
            mem_du0_dn0j0_ds   = mc.mem_du0_dn0j0_ds      ;
            mem_du0_dtcj_ds    = mc.mem_du0_dtcj_ds       ;
            mem_du0_dbcj_ds    = mc.mem_du0_dbcj_ds       ;
            mem_du0_dtaus0_ds  = mc.mem_du0_dtaus0_ds     ;
            mem_du0_dfs0_ds    = mc.mem_du0_dfs0_ds       ;

        end
    
    end
end