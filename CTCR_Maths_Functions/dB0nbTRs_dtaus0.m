function dB0nbTRsdtaus0 = dB0nbTRs_dtaus0(is0,is,j,nbT,mem_T,mem_y,mem_dR0_dtaus0,mem_dti_dtaus0)

    dB0nbTRsdtaus0 = mem_dR0_dtaus0(:,:,j,is,is0)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dtaus0(nbT,j,is,is0))' ;

end