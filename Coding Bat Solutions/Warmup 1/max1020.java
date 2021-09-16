// Given 2 positive int values, return the larger value that is in the range 10..20 inclusive, or return 0 if neither is in that range.

public int max1020(int a, int b) {
  if (a >= 10 & a <= 20 || b >= 10 & b <= 20 ) {
      if (a > b && a >= 10 & a <= 20) {
        return a;
      }
      else {
        if (b >= 10 & b <= 20 ) {
          if (b > a ) {
          return b;
          }
        return b;
        }
        return a;
      }
  }
  else {
    return 0;
  }
}