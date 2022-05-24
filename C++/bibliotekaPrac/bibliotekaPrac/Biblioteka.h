#pragma once
#ifndef BIBLIOTEKA_HPP_SEEN
#define BIBLIOTEKA_HPP_SEEN

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <array>
#include <stdexcept>
#include <cstring>  // strtok, etc
#include <sstream>

extern const std::string lineId[];
extern const int MINIMALNY_ROK;
extern const int ILE_WARTOSCI_PRACA;

class Praca;

class Biblioteka {

public:

    // Inicjalizuje menu biblioteki
    void menu();

        std::vector<Praca> listaPrac;
        std::vector<Praca> listaID;

    int checkValue(std::string line, const std::string id[]);

    // Wczytuje wszystkie prace
    void wczytajPrace(std::vector<Praca>& listaPrac, std::vector<Praca>& listaID);

    // Wyswietla skrocona liste prac
    void wyswSkrocone();

    // Wyswietla pelna liste prac
    void wyswPelne(std::vector<Praca>& listaPrac, int vectorSize);

    // Funkcja pozwalajace dodac nowa prace
    void dodajPrace(Biblioteka biblioteka);

    // Funkcja zapisujaca prace w pliku i w bibliotece
    void zapiszPrace(Praca praca);

    // Pozwala edytowac wybrana prace
    /*void edytujPrace(int idPracy) {

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
    void szukaj();

    // Wyswietla liczbe prac w bibliotece
    void ilePrac();

    // Wyswietla liczbe prac dla danego promotora
    void ilePracPromotora();

    // Wyswietla najczesciej wystepujace slowa kluczowe
    void najczSlowaKluczowe();

};

#endif