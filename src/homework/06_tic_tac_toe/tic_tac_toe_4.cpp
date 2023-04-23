#include "tic_tac_toe.h"
#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    for (int i = 0; i < 16; i++)
    {
        if (i == 0 || i == 1 || i == 2 || i == 3)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+4] && pegs[i] == pegs[i+8] && pegs[i] == pegs[i+12])
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
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    for (int i = 0; i < 16; i++)
    {
        if (i == 0 || i == 4 || i == 8 || i == 12)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2] && pegs[i] == pegs[i+3])
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
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{
    for (int i = 0; i < 16; i++)
    {
        if (i == 0)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+5] && pegs[i] == pegs[i+10] && pegs[i] == pegs[i+15])
            {
                return true;
            }
        }
        else if (i == 3)
        {
            if (pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6] && pegs[i] == pegs[i+9])
            {
                return true;
            }
        }
    }
    return false;
}