function dB0nbTRsdfs0 = dB0nbTRs_dfs0(is0,is,j,nbT,mem_T,mem_y,mem_dR0_dfs0,mem_dti_dfs0)

    dB0nbTRsdfs0 = mem_dR0_dfs0(:,:,j,is,is0)*rotz(mem_y.mem_t(nbT,is))' ...
                   + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dfs0(nbT,j,is,is0))' ;

end