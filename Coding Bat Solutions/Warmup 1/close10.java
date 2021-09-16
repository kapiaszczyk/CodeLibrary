// Given 2 int values, return whichever value is nearest to the value 10, or return 0 in the event of a tie. 
// Note that Math.abs(n) returns the absolute value of a number.

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


