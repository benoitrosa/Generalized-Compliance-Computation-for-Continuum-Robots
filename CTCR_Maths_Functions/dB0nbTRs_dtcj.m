function dB0nbTRsdtcj = dB0nbTRs_dtcj(is,j,nbT,mem_T,mem_y,mem_dR0_dtcj,mem_dti_dtcj)
    
    dB0nbTRsdtcj = mem_dR0_dtcj(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dtcj(nbT,j,is))' ;

end