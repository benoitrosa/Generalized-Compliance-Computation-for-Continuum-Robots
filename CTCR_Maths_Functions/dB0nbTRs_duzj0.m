function dB0nbTRsduzj0 = dB0nbTRs_duzj0(is,j,nbT,mem_T,mem_y,mem_dR0_duzj0,mem_dti_duzj0)
    
    dB0nbTRsduzj0 = mem_dR0_duzj0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_duzj0(nbT,j,is))' ;

end