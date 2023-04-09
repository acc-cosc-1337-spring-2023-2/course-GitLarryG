//h

#include<iostream>
#include<vector>
#include<string>

using std::string; using std::vector;
using std::cout; using std::cin;
using std::ostream; using std::istream;

#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

class TicTacToe
{
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);

    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
        
        string get_player() const{return player;};
        string get_winner();

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();

        vector<string> pegs{9, " "};
        string player;
        string winner = "";
};

#endif