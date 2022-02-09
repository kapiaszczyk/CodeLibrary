// Return true if the given string begins with "mix", except the 'm' can be anything, so "pix", "9ix" .. all count.

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
