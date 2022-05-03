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

// Zadanie 5.2

#include <iostream>

using std::cout;
using std::endl;

int* copyReversed(int values[], const int size) {

	int tempSize = size - 1;
	int * pointer = &values[tempSize];

	for (int i = 0; i <= tempSize; i++ ) {
		pointer[i] = *(values + tempSize - i);
	}

	return &pointer[0];
}

int main() {

	const int firstSequenceLength = 5;
	int firstSequence[firstSequenceLength] = { 1, 6, 7, 5, 3 };

	int* sequenceReversed = copyReversed(firstSequence, firstSequenceLength);

	for (int i = 0; i < firstSequenceLength; ++i) {
		cout << sequenceReversed[i] << " ";
	}

	for (int i = 0; i < firstSequenceLength; ++i) {
		cout << firstSequence[i] << " ";
	}

	return 0;

}

// Zadanie 5.3

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string* get_words(string text, int& num_words) {

	int textLength = text.size(); 
	string* arrayOfWords = new string[textLength];
	int counter{};
	string tempWord; 

	for (int i = 0; i < textLength; i++) {

		if (std::isspace(text[i])) {
			tempWord = "";
			if (std::isspace(text[i+1])) {
				i++;
			}
		}
		else if (!std::isspace(text[i])) {
			tempWord += text[i];
			if (std::isspace(text[i + 1])) {
				// cout << "Temp word nested: " << tempWord << endl;
				arrayOfWords[counter] = tempWord;

				// cout << "Array of words word: " << arrayOfWords[counter] << endl;
				counter++;
			}
		}

	}

	num_words = counter;
	return arrayOfWords;

}

int main() {

	int num_words;

	string sampleText = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Maxime mollitia, molestiae quas vel sint commodi repudiandae consequuntur voluptatum laborum numquam blanditiis harum quisquam eius sed odit fugiat iusto fuga praesentium optio, eaque rerum!Provident similique accusantium nemo autem.";

	string* words = get_words(sampleText, num_words);

	cout << "Lista slow:\n";

	if (num_words > 0) {

		for (int i = 0; i < num_words; ++i) {
			cout << i << ". " << words[i] << endl;
		}

		delete[] words;
		words = nullptr;
	}

	return 0;

}