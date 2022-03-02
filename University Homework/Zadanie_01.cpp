// Zadanie 1.1

//#include <iostream>
//
//double convert() {
//    double celcTemp;
//    std::cin >> celcTemp;
//    return (celcTemp * 1.8 + 32);
//}
//
//int main()
//{
//    std::cout << ">>";
//    std::cout << convert();
//}

// Zadanie 1.2

//#include <iostream>
//#include <limits>
//
//
//void minMax() {
//    const int LOOPS = 3;
//    int min = std::numeric_limits<int>::max();
//    int max = std::numeric_limits<int>::min();
//    int number = 0;
//
//    for (int i = 1; i <= LOOPS; i++) {
//        std::cout << "Tell me your no. " << i << " number: ";
//        std::cin >> number;
//
//        if (number > max) {
//            max = number;
//        }
//        else if (number < min) {
//            min = number;
//        }
//    }
//
//    std::cout << "Min: " << min << std::endl;
//    std::cout << "Max: " << max << std::endl;
//
//}
//
//int main() {
//    minMax();
//    return 0;
//}

// Zadanie 1.3

//#include <iostream>
//
//void countBMI() {
//    double mass, height;
//    double bodyMassIndex = 0;
//    std:: cout << "Mass: ";
//    std::cin >> mass;
//
//    std::cout << std::endl;
//
//    std::cout << "Height: ";
//    std::cin >> height;
//
//    bodyMassIndex = mass / (height * height);
//
//    if (bodyMassIndex > 18.5 && bodyMassIndex < 24.9) {
//        std::cout << "Waga prawidlowa" << std::endl;
//    }
//
//    if (bodyMassIndex > 24.9) {
//        std::cout << "Nadwaga" << std::endl;
//    }
//
//    if (bodyMassIndex < 18.5) {
//        std::cout << "Niedowaga" << std::endl;
//    }
//}
//
//
//int main() {
//    countBMI();
//    return 0;
//}

// Zadanie 1.4

//#include <iostream>
//
//void taxCounter() {
//    double income = 0;
//    std::cout << "Podaj swoj dochod: ";
//    std::cin >> income;
//
//    if (income > 85528) {
//        std::cout << (income * 1.18 + 556.02) << std::endl;
//    }
//
//    else if (income < 85528) {
//        std::cout << (14839.02 + income * 1.18 + 556.02) << std::endl;
//    }
//
//}
//
//int main()
//{
//    taxCounter();
//    return 0;
//}

// Zadanie 1.5

#include <iostream>
#include <random>

void gameEngine() {
    int userNumber = 0;
    bool guessed = false;

    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 100); 


    int randomNumber = dist6(rng);

    while (guessed == false) {
        std::cout << "Guess your number: ";

        std::cin >> userNumber;

        if (userNumber > randomNumber) {
            std::cout << "Too much" << std::endl;

        }
        else if (userNumber < randomNumber) {
            std::cout << "Not enough" << std::endl;
        }
        else if (userNumber == randomNumber) {
            guessed = true;
            std::cout << "You won!" << std::endl;
        }

        else {
            std::cout << "Error" << std::endl;
        }
    }
}


int main() {
    gameEngine();
    return 0;
}
