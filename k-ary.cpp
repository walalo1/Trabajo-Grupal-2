ZZ binpow(ZZ a, ZZ b, ZZ m) {
  a = mod(a, m);
  ZZ res = conv<ZZ>("1");
  while (b > 0) {
    if ((b & 1) == 1)
      res = mod(res * a, m);
    a = mod(a * a, m);
    b >>= 1;
  }
  return res;
}

