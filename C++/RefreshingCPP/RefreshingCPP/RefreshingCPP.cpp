// RefreshingCPP.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h> 
// square root
#include<iomanip>
// set precision

int main() {

	double liczba; 

	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> liczba;
	std::cout << sqrt(liczba) << std::endl;
	std::cout << std::setprecision(2) << std::fixed << liczba << std::endl;
	std::cout  << std::scientific << liczba << std::endl;

	int liczba2;
	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> liczba2;

	if (liczba2 >= 0) {
		std::cout << liczba2;
	}
	else {
		liczba2 = liczba2 * (-1);
		std::cout << liczba2;
	}
}