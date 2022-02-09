// Given 2 int values, return true if they are both in the range 30..40 inclusive, or they are both in the range 40..50 inclusive.

public boolean in3050(int a, int b) {
  if ((a > 29 & a < 41 && b > 29 & b < 41 )|| (a > 39 & a < 51 && b > 39 & b < 51)) {
    return true;
  }
  else {
    return false;
  }
}