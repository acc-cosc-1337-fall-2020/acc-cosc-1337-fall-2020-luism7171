#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<limits>


int main() 
{	
  TicTacToe tic_tac_toe;
 	TicTacToeManager manager;
 	std::string player;

 	char choice;

 	do
  {
 		TicTacToe tic_tac_toe;

 		while(player != "X" && player != "x" && player != "O" && player != "o")
 		{
 			cout<<"Enter X or O: ";
			cin>>player;
		}
		
		tic_tac_toe.start_game(player);

 		do
 		{
 			int position;
 			cout<<"Enter position from 1 to 9: ";
 			cin>>position;

 			while(!cin.good() && (position < 1 || position > 9))
 			{
 				cin.clear();
 				cin.ignore(5, '\n');

 				cout<<"Enter position from 1 to 9: ";
 				cin>>position;
 			}

 			tic_tac_toe.mark_board(position);
 			tic_tac_toe.display_board();
 			cin>>tic_tac_toe;
 			cout<<tic_tac_toe;

 		} while (tic_tac_toe.game_over() == false);

 		player = "";
 		cout<<"Game over the winner is: "<<tic_tac_toe.get_winner()<<"\n";

 		manager.save_game(tic_tac_toe);

 		int x_wins, o_wins, ties;
 		manager.get_winner_totals(x_wins, o_wins, ties);

 		cout<<"X wins: "<<x_wins<<"\n";
 		cout<<"O wins: "<<o_wins<<"\n";
 		cout<<"Ties  : "<<ties<<"\n\n";

 		cout<<"Continue enter y or Y: ";
 		cin>>choice;

 	}while(choice == 'Y' || choice == 'y');

 	cout<<manager;

 	return 0;
 }