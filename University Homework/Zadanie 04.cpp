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