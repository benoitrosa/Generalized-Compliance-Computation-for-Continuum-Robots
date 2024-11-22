function dm0dn0j0 = dm0_dn0j0(vect_z_is,j,v0,is)

    dm0dn0j0 = -(vect_z_is(is)-vect_z_is(1))*hat(v0)*[delta_ij(1,j);delta_ij(2,j);delta_ij(3,j)] ;

end