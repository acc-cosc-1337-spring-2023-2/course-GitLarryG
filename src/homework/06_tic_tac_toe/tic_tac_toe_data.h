//h
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::cout; using std::cin;

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:
    void save_games(const std::vector <std::unique_ptr <TicTacToe>>& games);
    vector <std::unique_ptr <TicTacToe>> get_games();
private:
    const string file_name{"saved_games7.dat"};
};

#endif