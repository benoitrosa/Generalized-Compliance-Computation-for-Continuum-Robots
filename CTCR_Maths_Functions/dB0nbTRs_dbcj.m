function dB0nbTRsdbcj = dB0nbTRs_dbcj(is,j,nbT,mem_T,mem_y,mem_dR0_dbcj,mem_dti_dbcj)
    
    dB0nbTRsdbcj = mem_dR0_dbcj(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dbcj(nbT,j,is))' ;

end