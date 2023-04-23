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
    save_file.open(file_name, std::ios::app);

    for (const auto& game : games)
    {
        vector<string> pegs = game->get_pegs();

        for (const string& peg : pegs)
        {
            save_file << peg;
        }
        save_file << "," << game->get_winner();
        save_file << "\n";
    }
    save_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;
    ifstream read_file(file_name);
    string line;

    if (read_file.is_open())
    {
        while (getline(read_file, line))
        {
            vector<string> pegs;
            size_t delimiter_position = line.find(",");

            for (size_t i = 0; i < delimiter_position; i++)
            {
                string peg(1, line[i]);
                pegs.push_back(peg);
            }
            string winner = line.substr(delimiter_position + 1);

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