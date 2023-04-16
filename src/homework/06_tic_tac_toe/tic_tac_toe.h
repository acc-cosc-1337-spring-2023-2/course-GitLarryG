//h

#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<cmath>

using std::string; using std::vector;
using std::cout; using std::cin;
using std::ostream; using std::istream;
using std::make_unique; using std::unique_ptr;

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

        TicTacToe(int size);

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();;
        void set_winner();

        string player;
        string winner = "";

    protected:
        virtual bool check_column_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win() = 0;

        vector<string> pegs;
};

#endif