#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;

namespace pandemic
{
    class Medic: public Player
    {
        Board B;
        City C;

    public:
    Medic(Board b, City c): Player(), C(c),B(b)
    {
        this->C = City::Milan;
    }

    Medic() :  Player(), C(City::Tokyo)
    {

    };

    string role();
    Medic &take_card(pandemic::City c);
    Medic &drive(City c);
    Medic &fly_direct(City c);
    Medic &fly_charter(City c);
    Medic &fly_shuttle(City c);       
    Medic &build();
    Medic &discover_cure(Color col);
    Medic &treat(City c);

    };
}