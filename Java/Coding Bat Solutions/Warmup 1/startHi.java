// Warmup 1 - startHi 
// Given a string, return true if the string starts with "hi" and false otherwise.

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