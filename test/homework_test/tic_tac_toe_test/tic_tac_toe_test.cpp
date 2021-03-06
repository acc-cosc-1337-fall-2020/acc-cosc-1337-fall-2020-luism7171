#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}
TEST_CASE("Verify game ends when the board is full")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
} 
 TEST_CASE("Test win by first column", "X wins")
 {
 	TicTacToe board;
 	board.start_game("O");
 	board.start_game("X");
 	REQUIRE(board.game_over() == false);
 	board.mark_board(1);
 	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
 	REQUIRE(board.game_over() == false);
 	board.mark_board(7);
 	REQUIRE(board.game_over() == true);
 	REQUIRE(board.get_winner() == "X");
 }

 TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);        
	REQUIRE(board.game_over() == false);
	board.mark_board(5);       
	REQUIRE(board.game_over() == false);
	board.mark_board(4);        
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);         
	REQUIRE(board.game_over() == false);
	board.mark_board(6);          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);         
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);

	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);     
	REQUIRE(board.game_over() == false);
	board.mark_board(2);      
	REQUIRE(board.game_over() == false);
	board.mark_board(5);      
	REQUIRE(board.game_over() == false);
	board.mark_board(1);       
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);     
	REQUIRE(board.game_over() == false);
	board.mark_board(4);       
	REQUIRE(board.game_over() == false);
	board.mark_board(8);         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win diagonal 1", "[X wins with 1 5 9]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);      
	REQUIRE(board.game_over() == false);
	board.mark_board(4);       
	REQUIRE(board.game_over() == false);
	board.mark_board(5);       
	REQUIRE(board.game_over() == false);
	board.mark_board(3);      
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win diagonal 2", "[X wins with 3 5 7]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(4); 
	REQUIRE(board.game_over() == false);
	board.mark_board(5);    
	REQUIRE(board.game_over() == false);
	board.mark_board(1);       
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	
	REQUIRE(board.game_over() == true);
} 	

