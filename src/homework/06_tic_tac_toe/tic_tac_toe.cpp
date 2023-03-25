//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
// 1) First_player function argument value must be X or O
    if(first_player != "X" && first_player != "O")
    {
        cout<<"Invalid input, please enter and X or an O."<<"\n";
    }
// 2) In function set player(private variable) to first_player function argument.
    player = first_player;
// 3) Call the clear_board function
    clear_board();
}

void TicTacToe::mark_board(int position)
{
// 1) Mark vector w position -1 equal to player(private variable)
    if(position <= 0 && position >= 10)
    {
        cout<<"invalid position, please enter a value between 1 and 9";
    }
    if (pegs[position-1] == " ")
    {
        pegs[position-1] = player;
    }
    else
    {
        cout<<"Position already filled!\n\n";
        set_next_player();
    }
// 2) Call set_next_player private function
    set_next_player();
}

void TicTacToe::display_board() const
{
// No parameters
// Iterate vector of strings pegs to 
    for(int i=0; i<3; i++)
    {
        for (int z = 0; z<3; ++z)
        {
            cout<<pegs[i*3+z];
            if(z<2)
            {
                cout<<"|";
            }
        }
        cout<<"\n";
    }
}// Display a tic tac toe board in 3x 3 format

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i<=8; i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++)
    {
        if (pegs[i] != " ")
            {
                pegs[i] = " ";
            }
    }
}