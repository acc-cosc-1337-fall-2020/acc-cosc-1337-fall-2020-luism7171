//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe game)
{
  update_winner_account(game.get_winner());
  games.push_back(game);
}
//function updates winner if x wins it ads a win to its talley vise versa
void TicTacToeManager::update_winner_account(std::string winner)
{
  if(winner == "X")
  {
    x_wins++;
  }
  else if(winner == "O")
  {
    o_wins++;
  }
  else
    {
      ties++;
    }
}
//gets the total wins and ties of the player
void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
  x = x_wins;
  o = o_wins;
  t = ties;
}
//ostream over load
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  out<<"\nGame history\n";

  for(auto& game: manager.games)
  {
    out<<game;
  }

  return out;
}