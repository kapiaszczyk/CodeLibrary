// Zadanie 2.1

#include <iostream>

void calculator() {

    double pierwszaLiczba = 0, drugaLiczba = 0, wynik = 0;
    char operatorArytmetyczny = '0';

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

}

int main() {

    calculator();
    return 0;

    //cin.ignore();
    //cin.get();
}
