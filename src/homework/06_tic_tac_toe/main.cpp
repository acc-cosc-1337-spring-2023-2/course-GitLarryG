#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_data.h"



int main() 
{
	TicTacToeData data;
	TicTacToeManager manager(data);
	unique_ptr<TicTacToe> game;
	int x, o, t;
	auto decision = 'y';
	int size;
	do
	{
		string first_player;

		while(true)
		{
			cout << "Choose game type (3 for TicTacToe 3, 4 for TicTacToe 4): ";
			cin >> size;

			if (size == 3) {
				game = make_unique<TicTacToe3>();
				break;
			} else if (size == 4) {
				game = make_unique<TicTacToe4>();
				break;
			} else {
				std::cout << "Invalid game size!\n";
			}
		}
		
		while (true)
		{
			cout<<"Player 1, pick X or O: ";
			cin>>first_player;
			if (first_player == "x")
			{
				first_player = "X";
			}
			else if (first_player == "o")
			{
				first_player = "O";
			}
			if (first_player == "X" || first_player == "O")
			{
				break;
			}
			else
			{
				cout<<"Invalid input, please enter X or O: ";
			}
		}
		
		game->start_game(first_player);

		while (!game->game_over())
		{
			cin>>*game;
			cout<<*game;
		}
		string winner = game->get_winner();
		if (winner == "C")
		{
			cout<<"\n\nIt's a tie!\n\n";
		}
		else
		{
			cout<<"\n\n"<<winner<<" wins!\n\n";
		}
		manager.save_game(game);
		manager.get_winner_total(x, o, t);

		cout<<"\n\nX wins: "<<x<<"\nO wins: "<<o<<"\nTies: "<<t<<"\n\n";


		cout<<"Would you like to play again?(y/n): ";
		cin>>decision;
	}
	while (decision != 'n' && decision != 'N');
	{
		cout<<manager;
		cout<<"Game Over!\n\n Stats:\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"X wins: "<<x<<"\n";
		cout<<"Ties: "<<t<<"\n\n";
		cout<<"Thanks for playing!\n\n";
		return 0;
	}
}