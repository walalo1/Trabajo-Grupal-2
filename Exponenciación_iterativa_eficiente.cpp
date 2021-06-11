NTL::ZZ iterativaEficiente(NTL::ZZ A, NTL::ZZ B, NTL::ZZ C) {
    NTL::ZZ res = NTL::ZZ(1);
     A = A % C;
    if (A == 0) {
        return NTL::ZZ(0);
    }
    while (B > 0) {
        if (NTL::IsOdd(B)) {
            res = (res * A) % C;
        }
        B = B >> 1;
        A = (A * A) % C;
    }
    return res;
}
