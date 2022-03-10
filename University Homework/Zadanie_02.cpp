// Zadanie 2.1

#include <iostream>
#include <math.h>

int main() {

	int n = 0; 
	int licznik = 0;

	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> n;


	for (int i = 1; i <= sqrt(n); i++) {

		if (n % i == 0) {
			std::cout << i << std::endl;
			licznik++;
		}
	}

	if (licznik == 2 && n != 1) std::cout << "Liczba byla pierwsza" << std::endl;

	return 0;
}

// Zadanie 2.2