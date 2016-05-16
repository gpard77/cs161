/*************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/14/15
 *
 * Description: This servies as the Header file for 
 *    TicTacToe.cpp
 ************************************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"

using namespace std;

class TicTacToe
{
private:  
   char player1;
   char player2;
  
public:
   Board boardObj;
   Board turn;
   TicTacToe();
   TicTacToe(char);
   void play(char);
};
#endif   
