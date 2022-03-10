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

// Zadanie 2.3

 #include <iostream>

 void calculator() {

     double pierwszaLiczba = 0, drugaLiczba = 0, wynik = 0;
     char operatorArytmetyczny = '0';
     char flag = 'y';

     while (flag == 'y') {

         std::cout << "Podaj liczbe 1: " << std::endl;
         std::cin >> pierwszaLiczba;
         std::cout << "Podaj operator" << std::endl;
         std::cin >> operatorArytmetyczny;
         std::cout << "Podaj liczbe 2: " << std::endl;
         std::cin >> drugaLiczba;

         switch (operatorArytmetyczny) {
         case '+':
             wynik = pierwszaLiczba + drugaLiczba;
             std::cout << "Wynik: " << wynik << std::endl;
             break;
         case '-':
             wynik = pierwszaLiczba - drugaLiczba;
             std::cout << "Wynik: " << wynik << std::endl;
             break;
         case '*':
             wynik = pierwszaLiczba * drugaLiczba;
             std::cout << "Wynik: " << wynik << std::endl;
             break;
         case '/':
             if (drugaLiczba == 0) std::cout << "Nie mozna dzielic przez 0" << std::endl;
             wynik = pierwszaLiczba * drugaLiczba;
             std::cout << "Wynik: " << wynik << std::endl;
             break;
         default:
             std::cout << "Blad" << std::endl;
         }

         std::cout << "Czy chcesz kontynuowac? y/n" << std::endl; 
         std::cin >> flag; 
     }

 }

 int main() {
     calculator();
     return 0;
 }

