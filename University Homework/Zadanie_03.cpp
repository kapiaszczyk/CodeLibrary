// Zadanie 3.1

#include <iostream>
#include <random>

void fillArray(double *array, int arraySize) {

	// int arraySize = sizeof(*array) / sizeof(double) - 1; // doesnt work, as we are calculating size of the pointer ; it is not possible to get the number of elements anymore ; instead use struct or pass the leght

	const double rangeFrom = 3.0;
	const double rangeTo = 9.0;
	std::random_device						rand_dev;							// uniformly-distributed integer random number generator that produces non-deterministic random numbers
	std::mt19937							generator(rand_dev());				// A Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits
	std::uniform_real_distribution<double>	distr(rangeFrom, rangeTo);			// Produces random floating-point values 
	
	for (int i = 0; i < arraySize; i++) {
		double randomNumber = distr(generator);
		double rounded = std::round(10 * randomNumber) / 10;					// Rounding up to one decimal point
		array[i] = rounded;
	}
}

void displayArray(double* array, int arraySize) {

	std::cout << "Array:" << std::endl;

	for (int i = 0; i < arraySize; i++) {
		std::cout << array[i] << "   ";
	}

	std::cout << std::endl;
}

void displayArrayInverted(double* array, int arraySize) {

	std::cout << "Inverted array:" << std::endl;

	for (int i = arraySize - 1; i >= 0; i--) {
		std::cout << array[i] << "   ";
	}

	std::cout << std::endl;
}

double average(double* array, int arraySize, bool flag) {

	if (flag == true) std::cout << "Average: ";

	double sum = 0; 

	for (int i = 0; i < arraySize; i++) {
		sum = sum + array[i];
	}

	return std::round(10 * (sum / arraySize)) / 10; ;

	// std::cout << (sum / arraySize) << std::endl;

}

void biggerLesser(double* array, int arraySize, double average) {

	int bigger = 0, lesser = 0;

	for (int i = 0; i < arraySize; i++) {
		if (array[i] > average) {
			bigger++;
		}
		else {
			lesser++;
		}
	}

	std::cout << "Bigger: " << bigger << std::endl;
	std::cout << "Lesser: " << lesser << std::endl;

}

int main() {

	const int ARRAY_LENGHT = 10;
	double array[ARRAY_LENGHT];
	bool flag = true;

	fillArray(array, ARRAY_LENGHT);
	displayArray(array, ARRAY_LENGHT);
	displayArrayInverted(array, ARRAY_LENGHT);
	std::cout << average(array, ARRAY_LENGHT, true) << std::endl;
	biggerLesser(array, ARRAY_LENGHT, average(array, ARRAY_LENGHT, false)); 

	return 0;
}

// Zadanie 3.2

#include <iostream>

int main() {

	int decimalNumber = 0;

	std::cout << "Your input: ";
	std::cin >> decimalNumber;
	int decimalNumberUnmodified = decimalNumber;

	int array[32];

	int i = 0;

	for (i = 0; decimalNumber > 0; i++) {
		array[i] = decimalNumber % 2;
		decimalNumber = decimalNumber / 2;
	}

	std::cout << "Your output in binary: ";

	if (decimalNumberUnmodified > 0) {
		std::cout << "0.";
	}
	else {
		std::cout << "1.";
	}
	for (i = i - 1; i >= 0; i--) {
		std::cout << array[i];
	}

	return 0;

}

// Zadanie 3.3

#include <iostream>
#include <random> // https://en.cppreference.com/w/cpp/numeric/random

int main() {

	// Initalise variables and constants
	int const ARRAY_DIMENSION = 10;
	int const GENERATE_RANGE = 100;
	int maxOne = -1 * (GENERATE_RANGE);
	int maxTwo = -1 * (GENERATE_RANGE);
	int array[ARRAY_DIMENSION][ARRAY_DIMENSION];

	// Define generating function parameters
	const int range_from = -1 * (GENERATE_RANGE);							// Define scope
	const int range_to = GENERATE_RANGE;									// ... 
	std::random_device                  rand_dev;							// Uniformly-distributed integer random number generator ?
	std::knuth_b                        generator(rand_dev());				// Choose algorythm
	std::uniform_int_distribution<int>  distr(range_from, range_to);		// Produces integer values evenly distributed across a range ?

	// Generate random numbers for the array
	for (int i = 0; i < ARRAY_DIMENSION; i++) {
		for (int j = 0; j < ARRAY_DIMENSION; j++) {
			array[i][j] = distr(generator);
		}
	}

	// Print out the array 
	for (int i = 0; i < ARRAY_DIMENSION; i++) {
		for (int j = 0; j < ARRAY_DIMENSION; j++) {
			// std::cout << array[i][j] << "   ";
			printf("%5d", array[i][j]);
		}
		std::cout << std::endl;
	}

	// Initalise array to store min values for each column 
	int min[ARRAY_DIMENSION];
	for (int i = 0; i < ARRAY_DIMENSION; i++) {
		min[i] = 0;
	}

	// Calculate minimum value in each respective column
	std::cout << std::endl;
	std::cout << "Min for respective columns: " << std::endl;

	for (int j = 0; j < ARRAY_DIMENSION; j++) {
		for (int i = 0; i < ARRAY_DIMENSION; i++) {
			if (array[i][j] < min[j]) {
				min[j] = array[i][j];
			}
		}
		printf("%5d", min[j]);
	}

	// Calculate diagonal max
	std::cout << std::endl;
	std::cout << std::endl;
	for (int j = 0; j < ARRAY_DIMENSION; j++) {
		if (array[j][j] > maxOne) {
			maxOne = array[j][j];
		}
	}
	std::cout << "Max one: " << maxOne << std::endl;
	std::cout << std::endl;

	for (int j = ARRAY_DIMENSION - 1; j > 0; j--) {
		if (array[j][j] > maxTwo) {
			maxTwo = array[j][j];
		}
	}
	std::cout << "Max two: " << maxTwo << std::endl;
	std::cout << std::endl;

	return 0;
	// std::exit(EXIT_SUCCESS);
	
}

// Zadanie 3.4

#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

int countWhitespace(std::string& userInput) {
	int counter = 0;
	int length = userInput.length();
	for (int i = 0; i < length; i++) {
		int character = userInput[i];
		if (isspace(character))
			counter++;
	}
	return counter;
}

int countLetters(std::string& userInput) {

	int counter = 0;
	int length = userInput.length();

	for (int i = 0; i <= userInput.length(); i++) {
		if (userInput[i] >= 66 && userInput[i] <= 122) {
			counter++;
		}
	}

	return counter;
}

int countVowels(std::string& userInput) {

	int counter = 0;
	int length = userInput.length();

	for (int i = 0; i <= userInput.length(); i++) {
		if (userInput[i] == 'a' || userInput[i] == 'e' || userInput[i] == 'i' ||
			userInput[i] == 'o' || userInput[i] == 'u' || userInput[i] == 'A' ||
			userInput[i] == 'E' || userInput[i] == 'I' || userInput[i] == 'O' || 
			userInput[i] == 'U') {
			counter++;
		}
	}

	return counter;
}

int countNumbersSum(std::string& userInput) {

	int length = userInput.length();
	int sum = 0;

	for (int i = 0; i <= userInput.length(); i++) {
		if (isdigit(userInput[i])){
			//convert charater to int
			int a = (userInput[i] - '0');
			sum = sum + a;
		}
	}

	return sum;
}


int main() {

	int licznik = 0; 

	// disable skipping whitespace
	std::cin >> std::noskipws;

	// single-pass input iterator that reads successive objects of type char from the input
	std::istream_iterator<char> it(std::cin);
	std::istream_iterator<char> end;
	std::string userInput(it, end);

	std::cout << userInput;

	// Program output
	std::cout << "Biale znaki: " << countWhitespace(userInput) << std::endl;
	std::cout << "Litery: " << countLetters(userInput) << std::endl;
	std::cout << "Samogloski: " << countVowels(userInput) << std::endl;
	std::cout << "Suma cyfr: " << countNumbersSum(userInput) << std::endl;

	return 0;
}