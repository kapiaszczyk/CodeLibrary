// Zadanie 3.1

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