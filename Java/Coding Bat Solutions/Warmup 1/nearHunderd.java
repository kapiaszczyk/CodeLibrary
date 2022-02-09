// Warmup 1 - nearHunderd
// Given an int n, return true if it is within 10 of 100 or 200. Note: Math.abs(num) computes the absolute value of a number.

// not optimal solution
public boolean nearHundred(int n) {
  
    if (n >= 90 && n <= 110) {
        return true;
    }

    if (n >= 190 && n <= 210)  {
        return true;
    }

    else {
        return false;
    }
}

// optimal solution
public boolean nearHundred(int n) {
    return ((Math.abs(100 - n) <= 10) || (Math.abs(200 - n) <= 10));
  }
