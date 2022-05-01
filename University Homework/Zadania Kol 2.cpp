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

// Zadanie 4.2

#include <iostream>
#include <cstring>

using std::cout; using std::endl;

void print(int array[], int size, const char separator[] = " ") {

	int separatorLenght = strlen(separator);

	for (int i = 0; i < size; i++) {
		std::cout << array[i];

		for (int i = 0; i < separatorLenght; i++) {
			std::cout << separator[i];
		}
	}

}

int main() {

	const int N = 5;
	int punkty[N] = { 12, 5, 0, 20, 10 };

	cout << "punkty: ";
	print(punkty, N);

	cout << "\npunkty: ";
	print(punkty, N, ", ");

	return 0;

}
