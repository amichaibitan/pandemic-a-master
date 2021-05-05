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
    class Virologist: public Player
    {
        Board B;
        City C;
    

    public:
    Virologist(Board b, City c): Player(), C(c),B(b)
    {
        this->C = City::Milan;
    }

    Virologist() :  Player(), C(City::Tokyo)
    {

    };

    string role();
    Virologist &take_card(pandemic::City c);
    Virologist &drive(City c);
    Virologist &fly_direct(City c);
    Virologist &fly_charter(City c);
    Virologist &fly_shuttle(City c);       
    Virologist &build();
    Virologist &discover_cure(Color col);
    Virologist &treat(City c);

    };

}