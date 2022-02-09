#include <algorithm>
#include <iostream>
#include <string>

void reverse(std::string) {

    std::string input, output;

    std::cout << "Type in your sentence: ";
    std::cin >> input;


    std::string str = input;
    std::reverse(input.begin(), input.end());

    std::cout << "inverted: ";
    std::cout << input;

}

int main()
{

    std::string input;
    reverse(input);
}


