NTL::ZZ recursiveExp(NTL::ZZ A, NTL::ZZ B, NTL::ZZ C)
{
    if (A == 0)
        return NTL::ZZ(0);
    if (B == 0)
        return NTL::ZZ(1);
 
    NTL::ZZ y;
    if (NTL::IsOdd(B)) {
        y = A % C;
        y = (y * recursiveExp(A, B - NTL::ZZ(1), C) % C) % C;
    }
    else {
        y = recursiveExp(A, B / NTL::ZZ(2), C);
        y = (y * y) % C;
    }
 
    return ((y + C) % C);
}
