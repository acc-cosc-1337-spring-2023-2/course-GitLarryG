//h
#include"tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
private:
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
public:
    TicTacToe4() : TicTacToe(4) {};
};
