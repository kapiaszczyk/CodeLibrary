// Zadanie 4.1

#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout; using std::endl;


int countOccurrences(const char string[], char charToFind, int & firstOccurance, int & lastOccurance) {

    int stringLength = strlen(string); 
    int occuranceCount{};

    for (int i = 0; i <= stringLength; ++i) {
        if (string[i] == charToFind) {
            occuranceCount++;
            if (occuranceCount == 1) firstOccurance = i + 1;
            lastOccurance = i + 1;
        }
        else occuranceCount = -1;
    }

    return occuranceCount;
}

int main() {

    char exampleString[] = "abrakadabra";
    int firstOccurance, lastOccurance;
    int num_b = countOccurrences(exampleString, 'b', firstOccurance, lastOccurance);

    cout << "Znak 'b' znaleziono " << num_b << " razy w \""
        << exampleString << "\"\n"
        << "pierwszy raz na pozycji " << firstOccurance
        << " a ostatni na pozycji " << lastOccurance << '\n';

    const char exampleString2[] = "Katowice, Bankowa 12";
    cout << "Znak 'x' wystepuje w \"" << exampleString2 << "\" " << countOccurrences(exampleString, 'x', firstOccurance, lastOccurance) << " razy\n";

    return 0;

}

