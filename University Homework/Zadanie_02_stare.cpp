// // Zadanie 2.1

// #include <iostream>

// void calculator() {

//     double pierwszaLiczba = 0, drugaLiczba = 0, wynik = 0;
//     char operatorArytmetyczny = '0';

//     std::cout << "Podaj liczbe 1: " << std::endl;
//     std::cin >> pierwszaLiczba;
//     std::cout << "Podaj operator" << std::endl;
//     std::cin >> operatorArytmetyczny;
//     std::cout << "Podaj liczbe 2: " << std::endl;
//     std::cin >> drugaLiczba;

//     switch (operatorArytmetyczny) {
//     case '+':
//         wynik = pierwszaLiczba + drugaLiczba;
//         std::cout << "Wynik: " << wynik << std::endl;
//         break;
//     case '-':
//         wynik = pierwszaLiczba - drugaLiczba;
//         std::cout << "Wynik: " << wynik << std::endl;
//         break;
//     case '*':
//         wynik = pierwszaLiczba * drugaLiczba;
//         std::cout << "Wynik: " << wynik << std::endl;
//         break;
//     case '/':
//         if (drugaLiczba == 0) std::cout << "Nie mozna dzielic przez 0" << std::endl;
//         wynik = pierwszaLiczba * drugaLiczba;
//         std::cout << "Wynik: " << wynik << std::endl;
//         break;
//     default: 
//         std::cout << "Blad" << std::endl;
//     }

// }

// int main() {

//     calculator();
//     return 0;

//     //cin.ignore();
//     //cin.get();
// }


// Zadanie 2.2 

// ...


// Zadanie 2.3

void pobieranie() {

    bool flag = false;


    while(flag == flase) {

    std::cout << "Podaj liczbe: ";
    std::cin >> 
    }
}

int minMax(int min, int max) {
    int min, max;

    for(i)
}

int main() {

    bool flag = false;
    int liczba;
    int licznik = 0, licznik2 = 0;
    int min = INT.MIN, max = INT.MAX;
    int suma = 0;
    int[] array;


    while(flag == flase) {

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

        if(liczba == 0) {
            flag == true;
        }
        else {
            if (liczba < min) min = liczba;
            if (liczba > max) max  liczba;
            licznik++;

            for (i = 0; i < licznik; i++ ) {
                array[i] = liczba;
            }

        }

    }

    std::cout << "Suma min i max: " << (min + max) << std::endl; 
    std::cout << "Średnia: " << suma / licznik << std::endl; 
    
    for (i = 0; i < licznik; i++ ) {
        if(array[i] > (suma / licznik)) licznik2++;
    }

    std::cout << "Ile wiekszych od sredniej: " << suma / licznik << std::endl; 


    return SYSTEM.EXIT; 
}