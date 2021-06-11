NTL::ZZ naive(NTL::ZZ a, NTL::ZZ p, NTL::ZZ n) {
    NTL::ZZ r = NTL::ZZ(1);
    for(NTL::ZZ i = NTL::ZZ(1); i <= p; i++) {
        r = (r * a) % n;
    }
    return r;
}

