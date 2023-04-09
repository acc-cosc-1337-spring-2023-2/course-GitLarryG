#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify first player is X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify first player is O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}


TEST_CASE("Verify game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Verify win by first column")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second column")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third column")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by first row")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second row")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);

	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third row")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win diagonally from top left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win diagonally from bottom left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Get winner returns X when X wins")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Get winner returns O when O wins")
{
	TicTacToe game;
	game.start_game("O");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Get winner total function works after 3 games")
{
	
	TicTacToeManager manager;

	int o = 0, x = 0, t = 0;

	{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");

	manager.save_game(game);
	std::cout << "Game winner: " << game.get_winner() << std::endl;
	}

	manager.get_winner_total(o, x, t);
	std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{
	TicTacToe game;
	game.start_game("O");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "O");

	manager.save_game(game);
	std::cout << "Game winner: " << game.get_winner() << std::endl;
	}

	manager.get_winner_total(o, x, t);
	std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");

	manager.save_game(game);
	std::cout << "Game winner: " << game.get_winner() << std::endl;
	}

	manager.get_winner_total(o, x, t);
	std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;
	
	manager.get_winner_total(o, x, t);

	REQUIRE(x == 1);
	REQUIRE(o == 2);
	REQUIRE(t == 0);
}