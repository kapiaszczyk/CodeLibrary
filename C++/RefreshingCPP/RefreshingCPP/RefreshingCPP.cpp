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


/*
RANDOM INTEGERS

	const double range_from = 3.0;
	const double range_to = 9.0;
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(range_from, range_to);

distr(generator)


*/

/*
DOUBLE

random<double>(0.0, 0.3)


template<typename Numeric, typename Generator = std::mt19937>
Numeric random(Numeric from, Numeric to)
{
	thread_local static Generator gen(std::random_device{}());

	using dist_type = typename std::conditional
		<
		std::is_integral<Numeric>::value
		, std::uniform_int_distribution<Numeric>
		, std::uniform_real_distribution<Numeric>
		>::type;

	thread_local static dist_type dist;

	return dist(gen, typename dist_type::param_type{ from, to });
}

*/

/*


	int decimalNumber = 0;

	std::cout << "Your input: ";
	std::cin >> decimalNumber;
	int decimalNumberUnmodified = decimalNumber;

	int array[32];

	int i = 0;

	convertToBinary(decimalNumber, array, i);

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

*/