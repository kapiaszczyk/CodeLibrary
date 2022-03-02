// Zadanie 1.1

#include <iostream>

double convert() {
    double celcTemp;
    std::cin >> celcTemp;
    return (celcTemp * 1.8 + 32); 
}

int main()
{
    std::cout << ">>"; 
    std::cout << convert();
}

// Zadanie 1.2

#include <iostream>


void minMax() {
    const int LOOPS = 3;
    int min = INT_MAX;
    int max = INT_MIN;
    int number = 0;
;    for (int i = 0; i <= LOOPS; i++) {
        std::cout << "Tell me your no. " << i << " number: ";
        std::cin >> number;

        if (number > max) number = max;
        else if (number < min) number = min;
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

}

int main() {
    minMax();
    return 0;
}

// Zadanie 1.3
#include <iostream>

double countBMI() {
    double bodyMassIndex, mass, height;
    std:;cout << "Mass: "; 
    std::cin >> mass; 

    std::cout << std::endl;

    std:;cout << "Height: "; 
    std::cin >> height; 

    decisionBMI(bodyMassIndex);
}

void decisionBMI(int bodyMassIndex) [
    if (bodyMassIndex > 18.5 && bodyMassIndex < 24.9) {
        std::cout >> "Waga prawidlowa" >> std::endl;
    }
    if (bodyMassIndex > 24.9) {
        std::cout >> "Nadwaga" >> std::endl;
    }
    if (bodyMassIndex < 18.5) {
        std::cout >> "Niedowaga" >> std::endl;
    }
}

int main() {
    minMax();
}

// Zadanie 1.4

#include <iostream>

double taxCounter() {
    double income;
    if (income > 85528) return (income*1.18 + 556.02);
    else if (income < 85528) return (14839.02 + income*1.18 + 556.02);
    else {
        return 0;
    }

}

int main()
{
    return taxCounter();
}

// Zadanie 1.5

#include <iostream>
#include <random>

void gameEngine() {
    int randomNumber; // function generating random number
    int userNumber;
    bool guessed = false;

    while(guessed == false) {
        std::cout << "Guess your number: ";

        std::cin >> userNumber;

        if (userNumber > randomNumber) {
            std::cout << "Too much";

        }
        else if (userNumber < randomNumber) {
            std::cout << "Not enough";
        }
        else if (userNumber ==  randomNumber) {
            guessed = true;
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
