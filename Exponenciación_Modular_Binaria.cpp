ZZ binpow(ZZ a, ZZ b, ZZ c) {
  ZZ uno{1};
  if (b == 0)
    return uno;
 
  if (b == 1)
    return mod(a, c);
 
  ZZ t = binpow(a, b / 2, c);
  t = mod((t * t), c);
 
  if (b % 2 == 0)
    return t;
  else
    return mod((mod(a, c) * t), c);  
}
