// Enter a string and the program counts the number of vowels in the text. For added complexity have it report a sum of each vowel found.


#include <iostream>
#include <string>
#include <cstddef> 

bool isVowel(char ch) {
    ch = toupper(ch); // Converts c to its uppercase equivalent if c is a lowercase letter and has an uppercase equivalent. If no such conversion is possible, the value returned is c unchanged.
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {

    std::string input;
    int inputLenght;
    int vovelCount = 0;

    std::cout << "Enter a string" << std::endl;
    std::cin >> input;

    std::cout <<  std::endl;

    inputLenght = input.length();

    for (int i = 0; i < inputLenght; i++) {
        if (isVowel(input[i])) {
            vovelCount++;
        }
    }

    std::cout << vovelCount; 

}