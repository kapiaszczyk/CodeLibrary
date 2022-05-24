#include "ID.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

/*
inline int ID::getID(std::vector<Praca>& listaPrac) {

    int n = listaPrac.size();
    // listaPrac[n - 1];

    std::fstream file;
    file.open("prace.txt");

    if (file.good())
    {
        std::string idLine;
        std::getline(file, idLine);
        return std::stoi(idLine);
    }
    else {
        throw std::invalid_argument("Plik uszkodzony - nie mo¿na odczytaæ ID");
    }

    file.close();
    return -1;
}*/
/*
inline void ID::overwriteLastId() {

    std::fstream file;
    file.open("prace.txt", std::ios::out);

    if (file.good())
    {
        file << returnLastID();
    }

    else {
        throw std::invalid_argument("Plik uszkodzony - nie mozna zapisac ostatniego ID");
    }

}
*/