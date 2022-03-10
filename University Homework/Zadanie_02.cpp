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

#include <iostream>


int main() {

	int n = 0; 
	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> n;
	int min = n;
	int max = n;
	int suma = n;

	while (n != 1) {
		if (n % 2 == 0) { 
			n = n / 2; 
			std:: cout << n << std::endl;
			if (n > max) max = n;
			if (n < min) min = n;
			suma = suma + n;
			
		}
		else {
			n = 3 * n + 1;
			std::cout << n << std::endl;
			if (n > max) max = n;
			if (n < min) min = n;
			suma = suma + n;

		}
	}

	std::cout << max << std::endl;
	std::cout << min << std::endl;
	std::cout << suma << std::endl;

	return 0;
}
