//h

#include<iostream>
#include<vector>
#include<string>

using std::string; using std::vector;
using std::cout; using std::cin;

#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

class TicTacToe
{
    public:
        bool game_over(){return check_board_full();};  //public
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const{return player;};  //public
        void display_board() const;  //public

    private:
        void set_next_player();  //private
        bool check_board_full(); //private
        void clear_board();  //private
        vector<string> pegs{9, " "};
        string player;

};

#endif