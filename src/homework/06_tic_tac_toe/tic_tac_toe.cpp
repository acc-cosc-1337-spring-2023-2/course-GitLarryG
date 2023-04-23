//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


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
    int row_size = sqrt(game.pegs.size());
    int size = static_cast<int>(game.pegs.size());

    for(int i=0; i<size; i++)
    {
        out<<game.pegs[i];
        if((i+1) % row_size == 0)
        {
            out<<"\n";
        }
        else
        {
            out<<"|";
        }
    }
    out<<"\n";
    out<<"\n";
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    int max_position = game.pegs.size();
    cout<<"Enter position, can be 1-" << max_position << ": ";
    in>>position;
    if (position > 0 && position <= max_position && game.pegs[position-1] == " ")
    {
        game.mark_board(position);
    }
    else
    {
        cout<<"Invalid position, please enter a value between 1 and " << max_position << "\n";
    }
    return in;
}

bool TicTacToe::check_column_win()
{   
    return false;
}
bool TicTacToe::check_row_win()
{   
    return false;
}
bool TicTacToe::check_diagonal_win()
{   
    return false;
}

void TicTacToe::mark_board(int position)
{
// 1) Mark vector w position -1 equal to player(private variable)
    pegs[position-1] = player;
    set_next_player();
}

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
    for(int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
        else if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] != " ")
        {
            pegs[i] = " ";
        }
    }
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

TicTacToe::TicTacToe(int size) : pegs(size*size, " "){}
TicTacToe::TicTacToe(const vector<string>& p, const string& win) : pegs(p), winner(win){}

vector<string> TicTacToe::get_pegs() const{return pegs;}