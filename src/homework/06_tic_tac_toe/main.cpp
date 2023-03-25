#include"tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	auto decision = 'y';
	do
	{
		string first_player;
		int position;

		cout<<"Player 1, pick X or O: ";
		cin>>first_player;
		
		game.start_game(first_player);

		while (game.game_over() != true)
		{
			cout<<"\nEnter position, can be 1-9: ";
			cin>>position;
			cout<<"\n";
			game.mark_board(position);
			game.display_board();
		}
		cout<<"\n\nGame Over!\n\n"<<"Play again?(y/n): ";
		cin>>decision;
	}
	while (decision != 'n' && decision != 'N');
	return 0;
}