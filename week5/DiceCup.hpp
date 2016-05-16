/***********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/3/15
 *
 * Description: Header file for DiceCup.cpp
 *
 ***********************************************************/

#ifndef DICECUP_HPP
#define DICECUP_HPP
using namespace std;

// Defines the interface of the DiceCup class
class DiceCup
{
private: 
   int numDice;
   int numFaces;
public:
   DiceCup();
   DiceCup(int, int);
   void setNumDice(int);
   void setNumFaces(int);
   int rollDice(int throws);
};
#endif
   
