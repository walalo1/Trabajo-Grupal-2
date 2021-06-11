ZZ exp_modular(ZZ base, ZZ exp, ZZ n)
{
    ZZ result(1);
    base = mod(base, n);
    while (exp > 0)
    {
        if (mod(exp, ZZ(2)) == ZZ(1)) 
            result = mod(result * base, n); 
        exp =exp/ 2; 
        base = mod((base * base), n);
    }
    return result;
}
