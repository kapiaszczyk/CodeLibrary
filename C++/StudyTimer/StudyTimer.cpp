#include <fstream>
#include <string>
#include <windows.h> 
#include <iostream>

using std::cout; using std::cin; using std::endl;
using std::string;


int main() {

    char input;

    cout << "Start? y/n" << endl;
    cin >> input;

    int sec = 0;

    if (input == 'y') {

    cout << "Stop? y/n" << endl;

    cin.clear();

    while(true) {
        Sleep(1);
        sec++;
    }  

    }

    string time = std::to_string(sec);

    std::fstream file("studycounter.txt");

    file << time;

    file.close();

}