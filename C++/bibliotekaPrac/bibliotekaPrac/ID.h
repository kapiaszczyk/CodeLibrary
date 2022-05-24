#pragma once
#ifndef ID_HPP_SEEN
#define ID_HPP_SEEN

#include <iostream>

//extern Praca praca;

class ID  { /*public Praca*/

public:

    int id;

    ID() {
        int lastID = 1;
        std::cout << "Pobrano ostatnie ID" << std::endl;
        id = lastID + 1;
        //overwriteLastId();
    }

    // virtual int getID(std::vector<Praca>& listaPrac);

    // void overwriteLastId();

};

#endif