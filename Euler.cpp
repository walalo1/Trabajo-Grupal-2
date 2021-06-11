NTL::ZZ phi(NTL::ZZ n)
{
    NTL::ZZ result = NTL::ZZ(1);
    for (NTL::ZZ i = NTL::ZZ(2); i < n; i++)
        if (euclides(i, NTL::ZZ(n)) == NTL::ZZ(1))
            result++;
    return result;
}
NTL::ZZ implementar(NTL::ZZ a, NTL::ZZ b, NTL::ZZ c) {
    NTL::ZZ nuevo = phi(c);
    b = b % nuevo;
    // Implementación de exponenciación modular
}
