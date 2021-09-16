
// Warmup 1 - diff21
// Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.

public int diff21(int n) {

    if (n <= 21) {
        return (21 - n);
    }

    else {
        return ((21 - n) * (-2));
    }
}

// Warmup 1 - parrotTrouble
//  We have a loud talking parrot. The "hour" parameter is the current hour time in the range 0..23. We are in trouble if the parrot is talking and the hour is before 7 or after 20. Return true if we are in trouble.

public boolean parrotTrouble(boolean talking, int hour) {
	if ((talking == true && hour < 7) || (talking == true && hour > 20)) {
		return true;
	}
		return false;
}

// Warup 1 - Makes 10
// Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.

public boolean makes10(int a, int b) {

    if (a == 10 || b == 10 || (a+b) == 10) {
        return true;
    }

    else {
        return false;
    }
  
}

// Warmup 1 - nearHunderd
// Given an int n, return true if it is within 10 of 100 or 200. Note: Math.abs(num) computes the absolute value of a number.

// bad solution
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

// better solution
public boolean nearHundred(int n) {
    return ((Math.abs(100 - n) <= 10) || (Math.abs(200 - n) <= 10));
  }

// Warmup 1 - missingChar
// Given a non-empty string and an int n, return a new string where the char at index n has been removed. The value of n will be a valid index of a char in the original string (i.e. n will be in the range 0..str.length()-1 inclusive).

public String missingChar(String str, int n) {
    int len = str.length();
    return (str.substring(0, n) + str.substring(n+1, len));
}

// Warmup 1 - frontBack // review!!!!!!!
// Given a string, return a new string where the first and last chars have been exchanged.

// wrong solution
public String frontBack(String str) {
    int last = str.length();
    String  End = str.substring(last);
    String  Start = str.substring(1);
    str = str.substring(1);
    return (End + str );
}

// solution 
public String frontBack(String str) {
    if (str.length() <= 1) return str;
    
    String mid = str.substring(1, str.length()-1);
    
    // last + mid + first
    return str.charAt(str.length()-1) + mid + str.charAt(0);
  }

// Warmup 1 - front3
//  Given a string, we'll say that the front is the first 3 chars of the string. If the string length is less than 3, the front is whatever is there. Return a new string which is 3 copies of the front.

// SUBSTRING
/* public String substring​(int beginIndex)
Returns a string that is a substring of this string. The substring begins with the character at the specified index and extends to the end of this string.
public String substring​(int beginIndex, int endIndex)
Returns a string that is a substring of this string. The substring begins at the specified beginIndex and extends to the character at index endIndex - 1. Thus the length of the substring is endIndex-beginIndex.
https://docs.oracle.com/en/java/javase/11/docs/api/java.base/java/lang/String.html */

public String front3(String str) {
    String front;
    
    if (str.length() >= 3) {
      front = str.substring(0, 3);
    }
    else {
      front = str;
    }
  
    return front + front + front;
  }

  // Warmup 1 - posNeg
  // Given 2 int values, return true if one is negative and one is positive. Except if the parameter "negative" is true, then return true only if both are negative.

 public boolean posNeg(int a, int b, boolean negative) {
    if ( a > 0 & b < 0 & negative == false || a < 0 & b > 0 & negative == false || negative == true & a < 0 & b < 0) {
        return true;
    }

    return false;
}

// alternative solution 
public boolean posNeg(int a, int b, boolean negative) {
    if (negative) {
      return (a < 0 && b < 0);
    }
    else {
      return ((a < 0 && b > 0) || (a > 0 && b < 0));
    }
  }
