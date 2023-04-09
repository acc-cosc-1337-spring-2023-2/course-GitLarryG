#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	int x, o, t;
	auto decision = 'y';
	do
	{
		string first_player;

		cout<<"Player 1, pick X or O: ";
		cin>>first_player;
		while (true)
		{
			if (first_player == "X" || first_player == "O")
			{
				break;
			}
			else
			{
				cout<<"Invalid input, please enter X or O: ";
				cin>>first_player;
			}
		}
		
		game.start_game(first_player);

		while (!game.game_over())
		{
			cin>>game;
			cout<<game;
		}
		string winner = game.get_winner();
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
		return 0;
	}
}