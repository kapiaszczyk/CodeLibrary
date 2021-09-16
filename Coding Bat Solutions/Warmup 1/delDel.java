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