// Given three ints, a b c, return true if one of them is 10 or more less than one of the others.

public boolean lessBy10(int a, int b, int c) {
  if ((Math.abs(b - a) >= 10) || (Math.abs(c - a) >= 10) || (Math.abs(c - b) >= 10)) return true;
  return false;
}
