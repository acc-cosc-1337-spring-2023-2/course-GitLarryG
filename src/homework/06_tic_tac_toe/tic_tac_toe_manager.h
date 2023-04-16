//h
#include<iostream>
#include<vector>
#include<memory>
#include "tic_tac_toe.h"

using std::vector; using std::ostream;
using std::unique_ptr;


class TicTacToeManager
{
    public:
        void save_game(unique_ptr<TicTacToe>& b);
        friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& x, int& o, int& t);
    private:
        vector<unique_ptr<TicTacToe>> games;
        int x_win{0};
        int o_win{0};
        int ties{0};
        void update_winner_count(string winner);
};