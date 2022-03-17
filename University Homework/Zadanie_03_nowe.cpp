// Zadanie 3.1

// Zadanie 3.1

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

double calculateAverage(int arraySize, double *array) {
	double sum = 0;

	for (int i = 0; i < arraySize; ++i) {
		sum = sum + array[i];
	}

	return sum / arraySize;
}

double calculateStdev(double average, int arraySize, double *array) {

	double standardDeviation = 0;

	for (int i = 0; i < arraySize; ++i) {
		standardDeviation += pow(array[i] - average, 2);
	}

	return sqrt((standardDeviation / arraySize));
}

int higherThanAverage(double *array, int arraySize, double average) {
	 
	int coutner = 0;

	for (int i = 0; i < arraySize; i++) {
		coutner = coutner + (array[i] > average ? 1 : 0);
	}

	return coutner;
}

double minimum(double* array, int arraySize) {

	double minimum = 9999;

	for (int i = 0; i < arraySize; i++) {
		minimum = (array[i] < minimum ? array[i] : minimum);
	}

	return minimum;
}

void sorterPrinter(double* array, int arraySize) {
	std::sort(array, array + arraySize);

	for (int i = arraySize - 1; i >= 0; i--) {
		std::cout << std::setw(5);
		std::cout << array[i]; 
	}
}

int main() {

	double tempArray[] = { 4.2, 5.7, 3.3, 7.7, -1, 1.8, 6.6, 1.5, 2.2, 7.9, -6.1, 4.3, 6.3, 3.3, 3.2, 7, 2.9, 4.2, 4.8, 4.7 };
	int const ARRAY_SIZE = 20;
	double average = calculateAverage(ARRAY_SIZE, tempArray);

	// Average temperature
	std::cout << "Average temperature: ";
	std::cout << average << std::endl;


	// Standard deviation
	std::cout << "Standard deviation: ";
	std::cout << calculateStdev(average, ARRAY_SIZE, tempArray) << std::endl;

	//Higher than average
	std::cout << "Higher than everage: " << higherThanAverage(tempArray, ARRAY_SIZE, average) << std::endl;

	// Minimum temperature
	std::cout << "Minimum: " << minimum(tempArray, ARRAY_SIZE) << std::endl;

	// Temperature highest to lowest
	std::cout << "Temperature highest to lowest: ";
	sorterPrinter(tempArray, ARRAY_SIZE);

	return 0;
}

// Zadanie 3.2