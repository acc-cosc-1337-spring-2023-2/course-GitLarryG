//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    //std::cout << "Saving game with winner: " << b.get_winner() << std::endl;

}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
    
}

void TicTacToeManager::update_winner_count(string winner)
{


    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    for (const auto& game : manager.games)
    {
        out << *game << "\n";
    }
    return out;
}
