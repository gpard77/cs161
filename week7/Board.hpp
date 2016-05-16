/***************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/14/15
 *
 * Description: This serves as the Header file for Board.cpp
 **************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

using namespace std;

// Enum for gameState method
enum State
{
   IN_PROGRESS = 0,
   X_WINS = 1,
   O_WINS = 2,
   DRAW = 3
};

// Defines the interface for the Board class
class Board
{
private:
   char gameBoard[3][3];

public:
   Board();
   bool makeMove(int, int, char);
   int gameState();
   void print();
};
#endif

