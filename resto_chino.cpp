ZZ resto_chino(vector<ZZ>bas, vector<ZZ>mods)
{
    ZZ P(mods[0] * mods[1]);  

    vector<ZZ>val_P(2);
    val_P[0] = mods[1];
    val_P[1] = mods[0]; 

    vector<ZZ>val_q(2);
    
    for (int i = 0; i < val_q.size(); i++)
    {
        ZZ valor_de_p(val_P[i]);

        if (valor_de_p >= mods[i]) 
        {valor_de_p = mod(valor_de_p, mods[i]);}

        valor_de_p = inv(valor_de_p, mods[i]);
        val_q[i] = mod(valor_de_p, mods[i]);
    }
    
    ZZ x0(0);
    for (int i = 0; i < 2; i++)
    {
        ZZ aux = (mod(bas[i], P) * mod(val_P[i], P) * mod(val_q[i], P));
        x0 += mod(aux, P);
    
    }

    x0 = mod(x0, P);

    return x0;
}
