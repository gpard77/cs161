/********************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 2/16/15
 *
 * Description: This file will serve as the implementation for 
 *   TicTacToe.hpp.  It will also contain the main function that
 *   runs a game of TIC TAC TOE for two users.
 *******************************************************************/
#include <iostream>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;


/************************************************************************
 *                       TICTACTOE
 *
 * Default Constructor
 ***********************************************************************/
TicTacToe::TicTacToe()
{
   Board boardObj;
}

/***********************************************************************
 *                       TICTACTOE
 *
 * Constructor with char parameter for TicTacToe class
 * Asks which player will begin the game
 ***********************************************************************/
TicTacToe::TicTacToe(char start)
{
   Board boardObj;  
   
   char first = start; 

   if (first == 'X' || first == 'x')
   {
      cout << "Player 'X' will begin..." << endl;
   }
   else
   {
      cout << "Player 'O' will begin..." << endl;
   }
} 

/***********************************************************************
 *                              play
 *
 * This method starts the game and loops until the game has conluded
 **********************************************************************/
void TicTacToe::play(char user_start)
{
   Board user_board;
   
   char player;
   player = user_start; // holds value of player to go first
   int user_x, user_y;  // To hold the player's move

   user_board.print();  // Clean board
   cout << endl;

   cout << "Players will choose moves in a (X,Y) fashion." << endl;
   cout << "Press Enter After each coordinate..." << endl;
   cout << "---------------------------------------------" << endl;
   int progress = 0;
   bool goodMove = true;
   // Loop game while no one has won and it isn't a draw
   while ((progress != 1) && (progress != 2) && (progress != 3)) 
   {  
      cout << "Player " << player << " enter your selection." << endl;
      cout << "Enter X: ";
      cin >> user_x;
      cout << "Enter Y: ";
      cin >> user_y;

      goodMove = user_board.makeMove(user_x, user_y, player);
      //user_board.makeMove(user_x,user_y, player);
      cout << endl;
      user_board.print();
      cout << endl;
      // Check for winner
      progress = user_board.gameState();
      // Swap players if good move
      if (goodMove == true)
      {
         if (player == 'X' || player == 'x')
         {
            player = 'O';
         }
         else if (player == 'O' || player == 'o')
         {
            player = 'X';
         }
      } 
   }      
}

/************************************************************************
 *                      main
 *
 *************************************************************************/
int main()
{
   char user_start;

   // User Welcome
   cout << endl;
   cout << "Welcome to TIC TAC TOE" << endl;
   cout << endl;

   // Decide who goes first
   cout << "Enter 'X' or 'O' to decide who goes first: ";
   cin >> user_start;
   TicTacToe user_game(user_start);
   cout << endl;

   user_game.play(toupper(user_start));

   cout << endl;   

   return 0;

}
