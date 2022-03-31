// Zadanie 4.1

#include <iostream>
#include <cstring>

int count(const char str[], char letterToFind, int &firstOccurance, int &lastOccurance, char &letterToFindConsole) {
	int counter = 0;

	firstOccurance = -1;
	lastOccurance = -1;

	letterToFindConsole = letterToFind;


	for (int i = 0; i < std::strlen(str); i++) {
		if (str[i] == letterToFind) {
			counter++;
			lastOccurance = i + 1;
		}
		if (counter == 1) firstOccurance = i;
 
	}

	return counter;
}

int main() {

	char str[] = "aaaaa";
	char letterToFindConsole = ' '; 
	int firstOccurance = 0, lastOccurance = 0;

	std::cout << count(str, 'c', firstOccurance, lastOccurance, letterToFindConsole) << std::endl;
	std::cout << "First occurance of " << letterToFindConsole << " is at position nr " << firstOccurance << std::endl;
	std::cout << "Last occurance of " << letterToFindConsole << " is at position nr " << lastOccurance << std::endl;

}

// Zadanie 4.2

#include <iostream>
#include <cstring>

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

	std::cout << "punkty: ";
	print(punkty, N);

	std::cout << std::endl;

	std::cout << "punkty: ";
	print(punkty, N, ", ");

}

// Zadanie 4.3 

// I dont work :)

#include <iostream>
#include <cstring>

void print(int array[], int size, const char beforeOutput[], const char afterOutput[], const char separator[] = " ") {

	int separatorLenght = strlen(separator);

	for (int i = 0; i < size; i++) {
		std::cout << array[i]; 
		for (int j = 0; j < separatorLenght; j++) {
			if (j == 0) std::cout << beforeOutput;
			std::cout << separator[i];
			if (j == separatorLenght - 1) std::cout << afterOutput;
		}
	}
}

int main() {

	const int N = 5;
	int punkty[N] = { 12, 5, 0, 20, 10 };

	char afterOutput[] = " Something stupid ";
	char beforeOutput[] = " Something dumb ";

	std::cout << "punkty: ";
	print(punkty, N, beforeOutput, afterOutput);

	std::cout << std::endl;

	std::cout << "punkty: ";
	print(punkty, N, beforeOutput, afterOutput, ", ");

}

// Zadanie 4.4

include <iostream>
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

	std::string array[] = {" They call ", " me...", " Tim "};

	kombinacje(array, 3);

	return 0;

}