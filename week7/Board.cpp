/*****************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/14/15
 *
 * Description: The is the implementation for Board.hpp
 *****************************************************************/
#include <iostream>
#include "Board.hpp"
using namespace std;


Board::Board() // Default Constructor intializes board to '.'(empty)
{ 

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         gameBoard[i][j] = '.';
      }
   }
}
/***************************************************************
 *                 makeMove
 *
 * This method takes User Coordinates to log a move on the
 * Tic Tac Toe board.  It also keeps track of which user's
 * turn it is.
 ***************************************************************/
bool Board::makeMove(int xCoord, int yCoord, char turn)
{
   bool unOccupied = true;
  
   while (gameBoard[yCoord][xCoord] != '.')
   {
      cout << "*******************" << endl;
      cout << "Occupied Spot." << endl;
      cout << "Please Enter Again." << endl;
      cout << "*******************" << endl;
      unOccupied = false;
      return unOccupied;
   }
   
   gameBoard[yCoord][xCoord] = turn;
 
   

   cout << endl << endl;
}
/*******************************************************************
 *                   gameState
 *
 * This method holds values indicative of possible stages in
 * game progress. 
 ******************************************************************/
int Board::gameState()
{ 
   char soMoney = '.';
   
   // Check for Draw
   int tally = 0; // Count characters
      
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (gameBoard[i][j] == '.')
         {
            tally++;
         }
      }
   }
      if (tally == 0 && (soMoney != 'X' || soMoney != 'O'))
      {
         soMoney = 'D';
      }

   // Check for Across (Row) Winners
   for (int i = 0; i < 3; i++)
   {
      if (gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
      {
         soMoney = gameBoard[i][0];
      }
   }

   // Check for Up/Down (Column) Winners
   for (int j = 0; j < 3; j++)
   {
      if (gameBoard[0][j] == gameBoard[1][j] && gameBoard[1][j] == gameBoard[2][j])
      {
         soMoney = gameBoard[0][j];
      }
   }

   // Check for Diagonal Winners
   if ((gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2]) ||
       (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0]))
   {
      soMoney = gameBoard[1][1];
   }
   //cout << soMoney << endl; 
   // Create enum data variable and
   // Access the enum to check the
   // state of the game.
   State gameResult;

   gameResult = IN_PROGRESS;

   if (soMoney == 'X')
   {
      gameResult = X_WINS;
      cout << "'X' is the Winner!" << endl;
      return gameResult;
   }
   else if (soMoney == 'O')
   {
      gameResult = O_WINS;
      cout << "'O' is the Winner!" << endl;
      return gameResult;
   }
   else if (soMoney == 'D')
   {
      gameResult = DRAW;
      cout << "The Game Ends in a Draw!" << endl;
      return gameResult;
   }

   cout << endl;

}

/***********************************************************
 *                 print
 *
 * This method when called displays the current board
 **********************************************************/
void Board::print()
{
   for (int s = 0; s < 1; s++)  //Add a space on the board
   {
      cout << " ";
   }   
   for (int num = 0; num < 3; num++)  //Number the rows and columns
   {
      cout << num;
   }
      for (int i = 0; i < 3; i++)
      {
         cout << endl;
         cout << i;
         for (int j = 0; j < 3; j++)
         {
            cout << gameBoard[i][j];
         }
      }
   cout << endl << endl;
}
