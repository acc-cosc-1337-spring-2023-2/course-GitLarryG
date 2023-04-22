//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>

using std::ofstream; using std::ifstream; 
using std::getline; using std::make_unique;


void TicTacToeData::save_games(const vector <unique_ptr<TicTacToe>>& games)
{
    ofstream save_file;
    save_file.open(file_name);

    for (auto& game : games)
    {
        for (auto peg : game->get_pegs())
        {
            save_file << peg;
        }
        save_file << game->get_winner();
        save_file << "\n";
    }
    save_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;
    ifstream read_file(file_name);
    string line;
   
    //read_file.open(file_name);
    if (read_file.is_open())
    {
        while (getline(read_file, line))
        {
            vector<string> pegs;
            string winner;

            for (size_t i = 0; i < line.size() - 1; i++)
            {
                string peg(1, line[i]);
                pegs.push_back(peg);
            }

            winner = line[line.size() - 1];

            unique_ptr<TicTacToe> game;

            if (pegs.size() == 9)
            {
                game = make_unique<TicTacToe3>(pegs, winner);
            }
            else if (pegs.size() == 16)
            {
                game = make_unique<TicTacToe4>(pegs, winner);
            }

            games.push_back(std::move(game));
        }
    read_file.close();
    }
    else
    {
        cout << "Unable to open or file not found.";
    }
    return games;
}