//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
    // 1) First_player function argument value must be X or O, loop here while user doesn’t provide an X or O
    while (first_player != "X" && first_player != "O")
    {
        cout << "Invalid input, please enter an X or an O: ";
        cin >> first_player;
    }
// 2) In function set player(private variable) to first_player function argument.
    player = first_player;
// 3) Call the clear_board function    
    clear_board();
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(int i=0; i<3; i++)
    {
        for (int z = 0; z<3; ++z)
        {
            out<<game.pegs[i*3+z];
            if(z<2)
            {
                out<<"|";
            }
        }
        out<<"\n";
    }
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"Enter position, can be 1-9: ";
    in>>position;
    game.mark_board(position);
    return in;
}



void TicTacToe::mark_board(int position)
{
// 1) Mark vector w position -1 equal to player(private variable)
    if(position <= 0 || position >= 10)
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
        return;
    }
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


bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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

void TicTacToe::set_winner()
{
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        if(player == "X")
        {
            winner = "O";
        }
        else
        {
            winner = "X";
        }
    }
    else
    {
        winner = "C";
    }
}

string TicTacToe::get_winner()
{
    set_winner();
    //std::cout << "Game winner: " << winner << std::endl;
    return winner;
}

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    return false;
}