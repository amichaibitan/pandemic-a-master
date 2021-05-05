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
    class Dispatcher: public Player
    {
        Board B;
        City C;
    

    public:
    Dispatcher(Board b, City c): Player(), C(c),B(b)
    {
        this->C = City::Milan;
    }

    Dispatcher() :  Player(), C(City::Tokyo)
    {

    };

    string role();
    Dispatcher &take_card(pandemic::City c);
    Dispatcher &drive(City c);
    Dispatcher &fly_direct(City c);
    Dispatcher &fly_charter(City c);
    Dispatcher &fly_shuttle(City c);       
    Dispatcher &build();
    Dispatcher &discover_cure(Color col);
    Dispatcher &treat(City c);

    };

}