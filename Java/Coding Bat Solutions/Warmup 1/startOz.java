// Given a string, return a string made of the first 2 chars (if present), however include first char only if it is 'o' 
// and include the second only if it is 'z', so "ozymandias" yields "oz".

// Not the optimal code
public String startOz(String str) {
  String Sample = "oz";
  if (str.length() < 1) return "";
  if (str.charAt(0) == Sample.charAt(0)) {
    if (str.length() == 1) return "o";
    if (str.charAt(1) == Sample.charAt(1)) { 
      return "oz";
     }
     else {
         return "o";
     }
  }
  else if (str.charAt(1) == Sample.charAt(1)) {
    return "z";
  }
return "";
}

// Optiomal solution
public String startOz(String str) {
  String result = "";
  
  if (str.length() >= 1 && str.charAt(0)=='o') {
    result = result + str.charAt(0);
  }
  
  if (str.length() >= 2 && str.charAt(1)=='z') {
    result = result + str.charAt(1);
  }
  
  return result;
}
