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

// Zadanie 4.4

#include <iostream>
#include <cstring>
#include <string>

void kombinacje(std::string array[], int arrayLength, int i = 0, std::string starterString = "") {

	if (arrayLength == i) {
		std::cout << starterString << std::endl;
	}
	else {
		kombinacje(array, arrayLength, i + 1, starterString + array[i]);
		kombinacje(array, arrayLength, i + 1, starterString);
	}
}

int main() {

	std::string array[] = { " uga ", "  buga ", " uga buga " };

	kombinacje(array, 3);

	return 0;

}

// Zadanie 5.1

#include <iostream>
#include <cstring>
#include <string>
#include <limits>

using std::cout;
using std::endl;

void minMax(const int tab[], const int size, int* pmin, int* pmax) {

	*pmin = INT_MAX;
	*pmax = INT_MIN;

	for (int i = 0; i < size; ++i) {
		if (tab[i] > *pmax) *pmax = tab[i];
		else if (tab[i] < *pmin) *pmin = tab[i];
	}

}

int main() {

	// Variables
	int t[] = { 3, -4, 1, 0, 10, 5 };
	int smallest, largest;

	minMax(t, 6, &smallest, &largest);

	cout << "Najmniejszy: " << smallest << endl;
	cout << "Najwiekszy: " << largest << endl;

	return 0;
}