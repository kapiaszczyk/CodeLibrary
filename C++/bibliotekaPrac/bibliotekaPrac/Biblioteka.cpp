#include "Biblioteka.h"
#include "additionalFunctions.h"
#include "Praca.h"
#include "UI_messages.h"

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <array>
#include <stdexcept>
#include <cstring>  // strtok, etc
#include <sstream>

// Inicjalizuje menu biblioteki
inline void Biblioteka::menu() {

    int choice{};
    bool subMenu = false;

    menuMessage();

    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Dodawanie prac" << std::endl;
        //biblioteka.dodajPrace(biblioteka);
        break;

    case 2:
        std::cout << "Edycja pracy" << std::endl;
        std::cout << "Podaj ID pracy, ktora chcesz edytowac" << std::endl;
        break;
    case 3:
        std::cout << "Wyswietlanie listy prac w formacie skroconym" << std::endl;

        break;
    case 4:
        std::cout << "Wyswietlanie listy prac w formacie pelnym" << std::endl;
        break;
    case 5:
        std::cout << "Wyszukiwanie pracy" << std::endl;
        break;
    case 6:
        std::cout << "Dodatkowe funkcje" << std::endl;
        subMenu = true;
        break;
    }

    if (subMenu) {

        int choice{};

        subMenuMessage();

        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Wyswietlanie liczby wszystkich prac" << std::endl;
            break;
        case 2:
            std::cout << "Wyswietlanie liczby prac dla poszczegolnych promotorow" << std::endl;
            break;
        case 3:
            std::cout << "Wyswietlanie 10 slow kluczowych" << std::endl;
            break;
        default:
            std::cout << "Wybiez jedna z trzech funkcji" << std::endl;
            break;

        }
    }

}

inline int Biblioteka::checkValue(std::string line, const std::string id[]) {

    std::string lineId = "";

    if (true) {
        for (int i = 0; i < ILE_WARTOSCI_PRACA; ++i) {
            if (line.substr(0, 2) == id[i]) return i;
            if (line == "") return -1;
        }
    }
}

// Wczytuje wszystkie prace
inline void Biblioteka::wczytajPrace(std::vector<Praca>& listaPrac, std::vector<Praca>& listaID) {

    Praca nowaPraca;

    std::ifstream stream("prace.txt");
    stream.seekg(0);

    std::string tempLine;

    while (!stream.eof())
    {
        std::getline(stream, tempLine);

        switch (checkValue(tempLine, lineId)) {
        case 0:
            tempLine.erase(0, 3);
            //nowaPraca.Praca::idPraca = stol(tempLine);
            break;
        case 1:
            tempLine.erase(0, 3);
            nowaPraca.Praca::typPracy = tempLine;
            break;
        case 2:
            tempLine.erase(0, 3);
            nowaPraca.Praca::tytul = tempLine;
            break;
        case 3:
            tempLine.erase(0, 3);
            nowaPraca.Praca::nazwiskoAutora = tempLine;
            break;
        case 4:
            tempLine.erase(0, 3);
            nowaPraca.Praca::imionaAutora = tempLine;
            break;
        case 5:
            tempLine.erase(0, 3);
            nowaPraca.Praca::inicjalyAutora = tempLine;
            break;
        case 6:
            tempLine.erase(0, 3);
            nowaPraca.Praca::rok = stol(tempLine);
            break;
        case 7:
            tempLine.erase(0, 3);
            nowaPraca.Praca::nazwiskoPromotora = tempLine;
            break;
        case 8:
            tempLine.erase(0, 3);
            nowaPraca.Praca::imionaPromotora = tempLine;
            break;
        case 9:
            tempLine.erase(0, 3);
            nowaPraca.Praca::slowaKluczowe = tempLine;
            break;
        case 10:
            tempLine.erase(0, 3);
            nowaPraca.Praca::streszczenie = tempLine;
            break;
        case -1:
            listaPrac.push_back(nowaPraca);
            break;
        default:
            std::cout << "Blad podczas wczytywania danych" << std::endl;
            break;
        }
    }
}

// Wyswietla skrocona liste prac
inline void Biblioteka::wyswSkrocone() {

}

// Wyswietla pelna liste prac
inline void Biblioteka::wyswPelne(std::vector<Praca>& listaPrac, int vectorSize) {

}

// Funkcja pozwalajace dodac nowa prace
inline void Biblioteka::dodajPrace(Biblioteka biblioteka) {

    Praca nowaPraca;

    //nowaPraca.Praca::getPracaId(nowaPraca.idPraca);

    std::cout << "Dodano nowa instancje praca" << std::endl;
    //std::cout << "ID tej pracy: " << nowaPraca.Praca::idPraca <<   endl;

    nowaPraca.Praca::typPracy = nowaPraca.Praca::addTypPracy();
    nowaPraca.Praca::tytul = nowaPraca.Praca::addTytul();
    nowaPraca.Praca::nazwiskoAutora = nowaPraca.Praca::addNazwiskoAutora();
    nowaPraca.Praca::imionaAutora = nowaPraca.Praca::addImionaAutora();

    nowaPraca.Praca::rok = nowaPraca.Praca::addRok();
    nowaPraca.Praca::nazwiskoPromotora = nowaPraca.Praca::addNazwiskoPromotora();
    nowaPraca.Praca::imionaPromotora = nowaPraca.Praca::addImionaPromotora();
    nowaPraca.Praca::slowaKluczowe = nowaPraca.Praca::addSlowaKluczowe();
    nowaPraca.Praca::streszczenie = nowaPraca.Praca::addStreszczenie();

    //dodajPraceDoListy(nowaPraca, biblioteka);
    Biblioteka::zapiszPrace(nowaPraca);
}

// Funkcja zapisujaca prace w pliku i w bibliotece
inline void Biblioteka::zapiszPrace(Praca praca) {

    std::ofstream myfile("prace.txt", std::ofstream::app);

    myfile << '\n'
        //<< "ID " << praca.Praca::idPraca << '\n'
        << "TP " << praca.Praca::typPracy << '\n'
        << "TT " << praca.Praca::tytul << '\n'
        << "AN " << praca.Praca::nazwiskoAutora << '\n'
        << "AI " << praca.Praca::imionaAutora << '\n'
        << "II " << praca.Praca::inicjalyAutora << '\n'
        << "YY " << praca.Praca::rok << '\n'
        << "PN " << praca.Praca::nazwiskoPromotora << '\n'
        << "PI " << praca.Praca::imionaPromotora << '\n'
        << "SK " << praca.Praca::slowaKluczowe << '\n'
        << "ST " << praca.Praca::streszczenie << '\n';

    myfile.close();

}

// Pozwala edytowac wybrana prace
/*inline void edytujPrace(int idPracy) {

    cout << "Podaj ID pracy, ktora chcesz edytowac" << endl;

    int choice{};

    // Wyswietl prace

    cout << "Ktora wartosc chcesz edytowac?" << endl;

    cout << "[1] Nazwisko autora" << endl;
    cout << "[2] Nazwisko promotora" << endl;
    cout << "[3] Tytul" << endl;
    cout << "[4] Slowo kluczowe" << endl;
    cout << "[5] Streszczenie" << endl;
    cout << "[3] Rok powstania" << endl;


}*/

// Wyszukuje 
inline void Biblioteka::szukaj() {
    searchMenuMessage();
}

// Wyswietla liczbe prac w bibliotece
inline void Biblioteka::ilePrac() {

}

// Wyswietla liczbe prac dla danego promotora
inline void Biblioteka::ilePracPromotora() {

}

// Wyswietla najczesciej wystepujace slowa kluczowe
inline void Biblioteka::najczSlowaKluczowe() {

}
