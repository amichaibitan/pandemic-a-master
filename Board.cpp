#include <map>
#include "Board.hpp"

using namespace pandemic;
using namespace std;

namespace pandemic
{

    bool Board::is_clean()
    {
        return true;
    }

    const int Board::operator[](size_t index)const
    {
        return 1;
    }
    
    int &Board::operator[](size_t index)
    {
        Board b;
        return arr;
    }

    ostream &operator<<(std::ostream &os , const Board &b)
    {
        return os;
    }

    void Board::remove_cures (){}
}