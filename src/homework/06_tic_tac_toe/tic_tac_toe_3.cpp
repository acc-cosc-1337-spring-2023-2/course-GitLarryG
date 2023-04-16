#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{
    for (int i = 0; i < 9; i++)
    {
        if (i == 0 || i == 1 || i == 2)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6])
            {
                return true;
            }
        }
    }
    return false;
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
{
    for (int i = 0; i < 9; i++)
    {
        if (i == 0 || i == 3 || i == 6)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2])
            {
                return true;
            }
        }
    }
    return false;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win()
{
    for (int i = 0; i < 9; i++)
    {
        if (i == 0)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+4] && pegs[i] == pegs[i+8])
            {
                return true;
            }
        }
        if (i == 2)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+2] && pegs[i] == pegs[i+4])
            {
                return true;
            }
        }
    }
    return false;
}