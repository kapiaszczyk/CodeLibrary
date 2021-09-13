#include <iostream>

int main() {

	int x, y;
	float z;

	std::cout << "Podaj x " << std::endl;
	std::cin >> x;

	std::cout << "Podaj y " << std::endl;
	std::cin >> y;

	z = x / y;

	std::cout << "Wynik " << z << std::endl;

}