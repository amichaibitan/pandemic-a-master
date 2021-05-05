#pragma once

#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include "City.hpp"

using namespace std;
const int City_Num=48;

namespace pandemic
{
    class Board
    {
        int arr;

        public:
        Board () : arr()
        {

        }

        bool is_clean();
        const int operator[](size_t index)const;
        int &operator[](size_t index);


        int operator[](City c)const
        {
            return 1;
        }

        int &operator[](City c)
        {
            return arr;
        }
        void remove_cures ();

        friend ostream &operator<<(std::ostream &os , const Board &b);

    };
}