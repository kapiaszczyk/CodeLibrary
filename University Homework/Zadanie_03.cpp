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
	for (int i = 0; i < arraySize; i++) {
		std::cout << array[i] << "   ";
	}
}

int main() {

	const int ARRAY_LENGHT = 10;
	double array[ARRAY_LENGHT];

	fillArray(array, ARRAY_LENGHT);
	displayArray(array, ARRAY_LENGHT);

	return 0;
}