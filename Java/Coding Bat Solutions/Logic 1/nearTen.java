// Given a non-negative number "num", return true if num is within 2 of a multiple of 10. 
// Note: (a % b) is the remainder of dividing a by b, so (7 % 5) is 2.

// not the most elegant solution

public boolean nearTen(int num) {
  int check = num % 10;
  if (check <= 2 && check >= 0 || check <= 9 && check >= 8) return true;
  return false;
}

// modified the condition

public boolean nearTen(int num) {
  int check = num % 10;
  if (check < 3 || check >= 8) return true;
  return false;
}

// actually, this solution looks even worse

public boolean nearTen(int num) {
  if ((num + 2) % 10 == 0 || (num + 1) % 10 == 0 || num % 10 == 0 || num % 10 == 2 || num % 10 == 1) return true;
  return false;
}

// but this one doesn't look bad

public boolean nearTen(int num) {
  if (num % 10 < 3 || num % 10 >=8) return true;
  return false;
}
