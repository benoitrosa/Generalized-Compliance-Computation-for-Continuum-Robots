classdef MemDTi

    % ====== Members ======
    properties

        mem_dti_duzj0       = [] ;
        mem_dti_dm0j0       = [] ;
        mem_dti_dn0j0       = [] ;
        mem_dti_dtcj        = [] ;
        mem_dti_dbcj        = [] ;
        mem_dti_dtaus0      = [] ;
        mem_dti_dfs0        = [] ;

    end

    methods

        % ====== Constructor ======
        function mc = MemDTi(varargin)
            if nargin == 7

                mc.mem_dti_duzj0    = varargin{1} ;
                mc.mem_dti_dm0j0    = varargin{2} ;
                mc.mem_dti_dn0j0    = varargin{3} ;
                mc.mem_dti_dtcj     = varargin{4} ;
                mc.mem_dti_dbcj     = varargin{5} ;
                mc.mem_dti_dtaus0   = varargin{6} ;
                mc.mem_dti_dfs0     = varargin{7} ;
                
            end
        end

        % ====== Get all ======
        function [mem_dti_duzj0 , mem_dti_dm0j0 , mem_dti_dn0j0 , ...
                  mem_dti_dtcj , mem_dti_dbcj , mem_dti_dtaus0 , ...
                  mem_dti_dfs0] = Get_All_MemDTi(mc)

            mem_dti_duzj0   = mc.mem_dti_duzj0      ;
            mem_dti_dm0j0   = mc.mem_dti_dm0j0      ;
            mem_dti_dn0j0   = mc.mem_dti_dn0j0      ;
            mem_dti_dtcj    = mc.mem_dti_dtcj       ;
            mem_dti_dbcj    = mc.mem_dti_dbcj       ;
            mem_dti_dtaus0  = mc.mem_dti_dtaus0     ;
            mem_dti_dfs0    = mc.mem_dti_dfs0       ;
           
        end
    
    end
end

