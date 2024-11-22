function dB0nbTRsdm0j0 = dB0nbTRs_dm0j0(is,j,nbT,mem_T,mem_y,mem_dR0_dm0j0,mem_dti_dm0j0)
    
    dB0nbTRsdm0j0 = mem_dR0_dm0j0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dm0j0(nbT,j,is))' ;

end
