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

  // Warmup 1 - nearHunderd
// Given a string, take the last char and return a new string with the last char added at the front and back, so "cat" yields "tcatt". The original string will be length 1 or more.

public String backAround(String str) {
    // Get the last char
    String last = str.substring(str.length() - 1);
    return last + str + last;
}

// Warmup 1 - or35
// Return true if the given non-negative number is a multiple of 3 or a multiple of 5. Use the % "mod" operator.
public boolean or35(int n) {
    if (n % 3 == 0 || n % 5 == 0 ) {
      return true;
    }
  
    return false;
}  
  
// Warmup 1 - front22 
// Given a string, take the first 2 chars and return the string with the 2 chars added at both the front and back, so "kitten" yields"kikittenki". If the string length is less than 2, use whatever chars are there.

public String front22(String str) {
    if (str.length() > 2) {
        String front = str.substring(0, 2);
        return front + str + front;
    } else {
        return str + str + str;
    }

}

// Warmup 1 - startHi 
// Given a string, return true if the string starts with "hi" and false otherwise.

// bad code, investigate why its not working
public boolean startHi(String str) {
    if (str.length() <= 1) {
      return false;
    }
    else if (str.substring(0, 2) == "hi") { // <-- this line especially
      return true;
    }
    else {
        return false;
    }
  }

// solution using string.equals()
public boolean startHi(String str) {

    if (str.length() < 2) {
      return false;
    }
    else {
      String s = str.substring(0,2);
      if (s.equals ("hi")) { 
        return true; }
      else return false;
    }
  }
  
// Warmup 1 - icyHot
// Given two temperatures, return true if one is less than 0 and the other is greater than 100.
public boolean icyHot(int temp1, int temp2) {
  if ( (temp1 > 100) & (temp2 < 0) || (temp1 < 0) & (temp2 > 100)) { 
      return true;
  }
  return false;
}

// Warmup 1 - in1020
// Given 2 int values, return true if either of them is in the range 10..20 inclusive.
public boolean in1020(int a, int b) {
    if (a >= 10 & a <= 20|| b >= 10 & b <= 20) {
      return true;
    }
    return false;
}

// Warmup 1 - hasTeen
// We'll say that a number is "teen" if it is in the range 13..19 inclusive. Given 3 int values, return true if 1 or more of them are teen.

public boolean hasTeen(int a, int b, int c) {
    if (a >= 13 & a <= 19 || b >= 13 & b <= 19 || c >= 13 & c <= 19) {
        return true;
      }
      return false;
}

// Warmup 1 - loneTeen
// We'll say that a number is "teen" if it is in the range 13..19 inclusive. Given 2 int values, return true if one or the other is teen, but not both.

public boolean loneTeen(int a, int b) {
    if (a >= 13 & a <= 19 && b >= 13 & b <= 19 ) {
        return false;
      }
    else if (a >= 13 & a <= 19 || b >= 13 & b <= 19 ) {
        return true;
    }
    return false;
}

// Warmup 1 - delDel
// Given a string, if the string "del" appears starting at index 1, return a string where that "del" has been deleted. Otherwise, return the string unchanged.
public String delDel(String str) {
  
    if (str.length() <= 3) {
        return str;
      }
      
    String s = str.substring(1,4);

    if (s.equals("del")) {
      String front = str.substring(0, 1);
      String end = str.substring(4, str.length());
      return front+end; 
    }
    return str;
}

/// Warmup  - mixStart
// Return true if the given string begins with "mix", except the 'm' can be anything, so "pix", "9ix". all count.
public boolean mixStart(String str) {
    if (str.length() <= 2) {
        return false;
      }
      
    String s = str.substring(1,3);

    if (s.equals("ix")) {
        return true;
    }
    return false;
}

// warmup  close10
public int close10(int a, int b) {
  int resulta;
  int resultb;
  
  resulta = Math.abs(10 - a);
  resultb = Math.abs(10 - b);
  
  if (resulta == resultb) {
    return 0;
  }
  
  else if (resulta > resultb) {
    return b;
  }
  
  else {
    return a;
  }
  
}
