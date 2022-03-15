// Zadanie 3.3

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