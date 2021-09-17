#include <string>

std::string reverseString (std::string str)
{
  std::string Result = std::string(str.rbegin(),str.rend());
  return Result;
}

// or 

std::string reverseString (std::string str) {
  std::string temp = "";
  for (int i = std::str.length()-1; i >= 0; i--) {
    temp = temp + str[i];
  }
  return temp;
}
