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
    class Researcher: public Player
    {
        Board B;
        City C;
    

    public:
    Researcher(Board b, City c): Player(), C(c),B(b)
    {
        this->C = City::Milan;
    }

    Researcher() :  Player(), C(City::Tokyo)
    {

    };

    string role();
    Researcher &take_card(pandemic::City c);
    Researcher &drive(City c);
    Researcher &fly_direct(City c);
    Researcher &fly_charter(City c);
    Researcher &fly_shuttle(City c);       
    Researcher &build();
    Researcher &discover_cure(Color col);
    Researcher &treat(City c);

    };

}