#include "Praca.h"
// #include "additionalFunctions.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <boost/algorithm/string/case_conv.hpp>



inline void clearCin() {
    std::cin.clear();
    std::cin.ignore();
}

inline void Praca::printTypeList(const std::vector<std::string> dozwoloneTypy) {
    for (unsigned int i = 0; i < dozwoloneTypy.size(); i++) std::cout << dozwoloneTypy[i] << std::endl;
}

// Sprawdza, czy rok spe³nia wymagania
inline bool validateYear(int input) {

    if (input == 0 || input < MINIMALNY_ROK) return false;
    return true;

}

inline bool Praca::validateType(std::string input, const std::vector<std::string> dozwoloneTypy) {
    return std::find(dozwoloneTypy.begin(), dozwoloneTypy.end(), input) != dozwoloneTypy.end();
}

inline void Praca::getInicjal(std::string imionaAutora, std::string& inicjalyAutora, const char COMA) {

    std::vector<std::string> imiona{};

    std::stringstream sstream(imionaAutora);
    std::string word;

    while (std::getline(sstream, word, COMA)) {
        imiona.push_back(word);
    }

    for (const auto& imie : imiona) {
        inicjalyAutora += imie[0] + ". ";
    }

}

inline std::string addStreszczenie() {

    std::string temp = "";

    std::cout << "Dodaj streszczenie" << std::endl;

    std::getline(std::cin, temp);

    if (temp != "" && temp.size() < 1000) {

        std::cout << "Maksymalna ilosc znakow to 1000!" << std::endl;

        while (temp != "") {

            std::getline(std::cin, temp);

        }
    }

    return temp;

}

inline std::string Praca::addSlowaKluczowe() {
    std::string temp = "";

    std::cout << "Dodaj slowa kluczowe oddzielone srednikami" << std::endl;

    std::getline(std::cin, temp);

    return temp;
}

inline std::string Praca::addImionaPromotora() {

    std::string temp = "";

    while (temp == "") {

        std::cout << "Dodaj imiona promotora oddzielone przecinkami" << std::endl;

        std::getline(std::cin, temp);

        if (temp == "") {

            std::cout << "Imiona promotora nie moga byc puste!" << std::endl;

            temp = "";
            clearCin();
        }

    }
    return temp;
}

inline std::string Praca::addNazwiskoPromotora() {

    std::string temp = "";

    while (temp == "") {

        std::cout << "Dodaj nazwisko promotora" << std::endl;

        std::getline(std::cin, temp);

        if (temp == "") {

            std::cout << "Nazwisko promotora nie moze byc puste!" << std::endl;
            temp = "";

            clearCin();
        }

    }

    return temp;

}

inline int Praca::addRok() {

    int temp = 0;

    while (!validateYear(temp)) {

        std::cout << "Dodaj rok" << std::endl;

        std::cin >> temp;

        if (!validateYear(temp)) {

            std::cout << "Minimalny rok to " << MINIMALNY_ROK << std::endl;
            temp = 0;

            clearCin();
        }

    }

    return temp;
}

inline std::string Praca::addImionaAutora() {

    std::string temp = "";

    while (temp == "") {

        std::cout << "Dodaj imiona autora oddzielone przecinkami" << std::endl;

        std::getline(std::cin, temp);

        if (temp == "") {

            std::cout << "Imiona autora nie moga byc puste!" << std::endl;
            temp = "";

            clearCin();
        }

    }

    getInicjal(temp, Praca::inicjalyAutora, COMA);

    return temp;
}

inline std::string Praca::addNazwiskoAutora() {

    std::string temp = "";

    while (temp == "") {

        std::cout << "Dodaj nazwisko autora " << std::endl;

        std::cin >> temp;

        if (temp == "") {

            std::cout << "Nazwisko autora nie moze byc puste!" << std::endl;
            temp = "";

            clearCin();

        }

    }

    return temp;
}

inline std::string Praca::addTytul() {

    std::string temp = "";

    while (temp == "") {

        std::cout << "Dodaj tytul pracy" << std::endl;

        std::getline(std::cin, temp);


        if (temp == "") {

            std::cout << "Tytul pracy nie moze byc pusty!" << std::endl;
            temp = "";

            clearCin();

        }

    }


    return temp;
}

inline std::string Praca::addTypPracy() {

    std::cout << "Dodaj typ pracy" << std::endl;
    std::string temp = "";

    while (!Praca::validateType(temp, dozwoloneTypy)) {

        std::cin >> temp;

        boost::algorithm::to_lower(temp);

        if (!Praca::validateType(temp, dozwoloneTypy)) {

            std::cout << "Nieozwolony typ pracy. Podaj jeden z nastepujacych typow pracy" << std::endl;

            Praca::printTypeList(dozwoloneTypy);

            clearCin();

        }

    }

    return temp;
}

//inline void Praca::getPracaId(int& idPraca) {
//
//    static ID idObject;
//    idPraca = idObject.id;
//
//}