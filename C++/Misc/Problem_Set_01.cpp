// Kubiak

//1.1 - Calculate the field of a rectangle with the accuracy of two decimal places.

#include <iostream>
#include <iomanip>

int main() {

    float x, y, z;

    std::cout << "Set x: " << std::endl;
    std::cin >> x;

    std::cout << "Set y : " << std::endl;
    std::cin >> y;

    z = y * x;
  
    std::cout << std::fixed;
    std::cout << "Result: "<< std::setprecision(2) << z << std::endl;
}


// 1.2 Display pi number wth  the accuracy of five decimal places

#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>


int main() {

  
    std::cout << std::fixed;
    std::cout << "PI number: "<< std::setprecision(5) << M_PI << std::endl;
}


/* Why cmath doesnt work? - #include <math.h> occurs within cmath's header guards; This is NOT the case with cmath. So you need to make sure you #define _USE_MATH_DEFINES before you include anything else or make yourself a constant that defines the value */

// 1.3 Display the square root of pi

#include <iostream>
#include <iomanip>
#include <cmath>


int main() {

    const static double pi = 3.141592653589793238;

    std::cout << std::fixed;
    std::cout << "Squre root of pi: "<< std::setprecision(5) << sqrt(pi) << std::endl;
}


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
    std::cout << "Volume of your ball: "<< std::setprecision(5) << Calculate(radius) << std::endl;
}

double Calculate(double radius) { // definition of the function
    double volume;
    volume = 4 * pi * pow(radius, 2) / 3;
    return volume;
}
