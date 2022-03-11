// Zadanie 3.1

#include <iostream>
#include <random>



void fillArray(double *array, int arraySize) {

	// int arraySize = sizeof(*array) / sizeof(double) - 1; // doesnt work, as we are calculating size of the pointer ; it is not possible to get the number of elements anymore ; instead use struct or pass the leght

	const double rangeFrom = 3.0;
	const double rangeTo = 9.0;
	std::random_device						rand_dev;					// uniformly-distributed integer random number generator that produces non-deterministic random numbers
	std::mt19937							generator(rand_dev());		// A Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits
	std::uniform_real_distribution<double>	distr(rangeFrom, rangeTo);			// Produces random floating-point values 
	
	for (int i = 0; i < arraySize; i++) {
		double randomNumber = distr(generator);
		double rounded = std::round(10 * randomNumber) / 10;
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


	//const int range_from = 3;
	//const int range_to = 9;
	//std::random_device                  rand_dev;
	//std::mt19937                        generator(rand_dev());
	//std::uniform_int_distribution<int>  distr(range_from, range_to);



	//for (int i = 0; i < ARRAY_LENGHT; i++) {
	//	std::cout << array[i] << "    ";
	//}

	return 0;
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