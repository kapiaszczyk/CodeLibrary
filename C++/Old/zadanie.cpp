// 1.4 Calculate the volume of a ball.
// mathematical equation: V = 4/3 πr³

#include <iostream>
#include <iomanip>
#include <cmath>

const static double pi = 3.141592653589793238;

double Calculate(double radius); // declaration of the function, click on it and press f12 to go to the definition (Visual Studio)

int main() {

    double radius;

    std::cout << "Set the radius: ";
    std::cin >> radius;

    std::cout << std::fixed;
    std::cout << "Volume of your ball: " << std::setprecision(5) << Calculate(radius) << std::endl;
}

double Calculate(double radius) { // definition of the function
    double volume;
    volume = 4 * pi * pow(radius, 2) / 3;
    return volume;
}