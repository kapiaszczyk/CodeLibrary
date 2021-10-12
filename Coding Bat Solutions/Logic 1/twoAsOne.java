// Given three ints, a b c, return true if it is possible to add two of the ints to get the third.

public boolean twoAsOne(int a, int b, int c) {
  if ((a + b) == c || (b + c) == a || (a + c) == b) {
    return true;
  }
  return false;
}
