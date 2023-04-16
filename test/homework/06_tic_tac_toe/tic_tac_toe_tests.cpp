#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify first player is X")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");
	REQUIRE(test_instance->get_player() == "X");
}

TEST_CASE("Verify first player is O")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("O");
	REQUIRE(test_instance->get_player() == "O");
}


TEST_CASE("Verify test_instance ends when board is full for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(8);
	REQUIRE(test_instance->game_over() == true);
	REQUIRE(test_instance->get_winner() == "C");
}

TEST_CASE("Verify win by first column for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by second column for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(8);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by third column for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by first row for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by second row for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);
	
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);
	test_instance->mark_board(6);

	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by third row for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(8);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win diagonally from top left for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win diagonally from bottom left for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");
	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Get winner returns X when X wins for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Get winner returns O when O wins for 3x3")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe3>();
	test_instance->start_game("O");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "O");
}

TEST_CASE("Get winner total function works after 3 games for 3x3")
{
	
	TicTacToeManager manager_instance;

	int o = 0, x = 0, t = 0;

	{
	unique_ptr<TicTacToe> test_instance1 = make_unique<TicTacToe3>();

	test_instance1->start_game("X");

	test_instance1->mark_board(1);
	test_instance1->mark_board(2);
	test_instance1->mark_board(5);
	test_instance1->mark_board(3);
	test_instance1->mark_board(9);

	REQUIRE(test_instance1->game_over() == true);
	REQUIRE(test_instance1->get_winner() == "X");

	manager_instance.save_game(test_instance1);
	//std::cout << "Game winner: " << test_instance1->get_winner() << std::endl;
	}

	manager_instance.get_winner_total(o, x, t);
	////std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{
	unique_ptr<TicTacToe> test_instance2 = make_unique<TicTacToe3>();
	test_instance2->start_game("O");

	test_instance2->mark_board(1);
	test_instance2->mark_board(2);
	test_instance2->mark_board(5);
	test_instance2->mark_board(3);
	test_instance2->mark_board(9);

	REQUIRE(test_instance2->game_over() == true);
	REQUIRE(test_instance2->get_winner() == "O");

	manager_instance.save_game(test_instance2);
	//std::cout << "Game winner: " << test_instance2->get_winner() << std::endl;
	}

	manager_instance.get_winner_total(o, x, t);
	//std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{
	unique_ptr<TicTacToe> test_instance3 = make_unique<TicTacToe3>();
	test_instance3->start_game("X");

	test_instance3->mark_board(1);
	test_instance3->mark_board(2);
	test_instance3->mark_board(5);
	test_instance3->mark_board(3);
	test_instance3->mark_board(9);

	REQUIRE(test_instance3->get_winner() == "X");

	manager_instance.save_game(test_instance3);
	//std::cout << "Game winner: " << test_instance3->get_winner() << std::endl;
	}

	manager_instance.get_winner_total(o, x, t);
	//std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;
	
	manager_instance.get_winner_total(o, x, t);

	REQUIRE(x == 1);
	REQUIRE(o == 2);
	REQUIRE(t == 0);
}

TEST_CASE("Verify test_instance ends when board is full for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(8);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(10);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(11);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(12);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(14);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(13);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(16);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(15);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "C");
}

TEST_CASE("Verify win by first column for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(13);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by second column for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(10);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(14);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by third column for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(11);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(15);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by first row for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by second row for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(8);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win by third row for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(10);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(11);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(12);
	REQUIRE(test_instance->game_over() == true);


	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win diagonally from top left for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(11);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(16);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Verify win diagonally from bottom left for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(13);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(10);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(9);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Get winner returns X when X wins for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("X");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "X");
}

TEST_CASE("Get winner returns O when O wins for 4x4")
{
	unique_ptr<TicTacToe> test_instance = make_unique<TicTacToe4>();
	test_instance->start_game("O");
	test_instance->mark_board(1);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(5);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(2);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(6);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(3);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(7);
	REQUIRE(test_instance->game_over() == false);

	test_instance->mark_board(4);
	REQUIRE(test_instance->game_over() == true);

	REQUIRE(test_instance->get_winner() == "O");
}

TEST_CASE("Get winner total function works after 3 games for 4x4")
{
	TicTacToeManager manager_instance;

	int o = 0, x = 0, t = 0;

	{
	unique_ptr<TicTacToe> test_instance1 = make_unique<TicTacToe4>();

	test_instance1->start_game("X");

	test_instance1->mark_board(1);
	test_instance1->mark_board(5);
	test_instance1->mark_board(2);
	test_instance1->mark_board(6);
	test_instance1->mark_board(3);
	test_instance1->mark_board(7);
	test_instance1->mark_board(4);

	REQUIRE(test_instance1->game_over() == true);
	REQUIRE(test_instance1->get_winner() == "X");

	manager_instance.save_game(test_instance1);
	//std::cout << "Game winner: " << test_instance1->get_winner() << std::endl;
	}

	manager_instance.get_winner_total(o, x, t);
	//std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{
	unique_ptr<TicTacToe> test_instance2 = make_unique<TicTacToe4>();

	test_instance2->start_game("O");

	test_instance2->mark_board(1);
	test_instance2->mark_board(5);
	test_instance2->mark_board(2);
	test_instance2->mark_board(6);
	test_instance2->mark_board(3);
	test_instance2->mark_board(7);
	test_instance2->mark_board(4);

	REQUIRE(test_instance2->game_over() == true);

	REQUIRE(test_instance2->get_winner() == "O");

	manager_instance.save_game(test_instance2);
	//std::cout << "Game winner: " << test_instance2->get_winner() << std::endl;

	}

	manager_instance.get_winner_total(o, x, t);
	//std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;

	{

	unique_ptr<TicTacToe> test_instance3 = make_unique<TicTacToe4>();

	test_instance3->start_game("X");

	test_instance3->mark_board(1);
	test_instance3->mark_board(5);
	test_instance3->mark_board(2);
	test_instance3->mark_board(6);
	test_instance3->mark_board(3);
	test_instance3->mark_board(7);
	test_instance3->mark_board(4);

	REQUIRE(test_instance3->game_over() == true);

	REQUIRE(test_instance3->get_winner() == "X");

	manager_instance.save_game(test_instance3);
	//std::cout << "Game winner: " << test_instance3->get_winner() << std::endl;

	}

	manager_instance.get_winner_total(o, x, t);
	//std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << std::endl;
}