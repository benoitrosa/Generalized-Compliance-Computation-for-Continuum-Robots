function dB0nbTRsdn0j0 = dB0nbTRs_dn0j0(is,j,nbT,mem_T,mem_y,mem_dR0_dn0j0,mem_dti_dn0j0)
    
    dB0nbTRsdn0j0 = mem_dR0_dn0j0(:,:,j,is)*rotz(mem_y.mem_t(nbT,is))' ...
                    + mem_T(1:3,1:3,is)*(hat([0;0;1])*rotz(mem_y.mem_t(nbT,is))*mem_dti_dn0j0(nbT,j,is))' ;

end
