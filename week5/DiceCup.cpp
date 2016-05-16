/*********************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/3/15
 *
 * Description: DiceCup.  This program prompts
 *  a user for input regarding the number of 
 *  dice and the number of faces for those dice.
 *  It then asks for the number of desired rolls
 *  and tallies the result.
 *
 *************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DiceCup.hpp"

/**************************************************
 *               DiceCup::DiceCup
 *
 * Default Constructor
 *************************************************/
DiceCup::DiceCup()
{
   setNumDice(1);
   setNumFaces(2);
}

/**************************************************
 *               DiceCup::DiceCup
 *
 * Constructor with parameters
 *************************************************/
DiceCup::DiceCup(int numDiceVal, int numFaceVal)
{
   setNumDice(numDiceVal);
   setNumFaces(numFaceVal);
}

/***************************************************
 *               DiceCup::setNumDice
 *
 * Sets the number of dice to be used
 **************************************************/
void DiceCup::setNumDice(int numDiceVal)
{
   if ( numDiceVal >= 0)
   {
      numDice = numDiceVal;
   }
   else
   {
      numDice = 0;
      cout << "Invalid Entry: Must be positive." << endl;
   }
}

/**************************************************
 *                DiceCup::setNumFaces
 *
 * Sets the number of faces per die
 *************************************************/
void DiceCup::setNumFaces(int numFaceVal)
{
   numFaces = numFaceVal;
}

/*************************************************
 *                DiceCup::rollDice
 *
 * Simulates the dice roll, tallies the total, and
 * returns that value.
 *************************************************/
int DiceCup::rollDice(int throws)
{
   int dice;
   int total = 0;
   for (int y = 1; y <= throws; y++)
   {
      cout << endl;
      cout << "You got: " << endl;
      for (int i = 1; i <= numDice; i++)
      {
         dice = rand() % numFaces + 1;
         total += dice;
         cout << dice << endl;
      
      }
   }
   // Display Sum for all dice thrown.
   cout << "************************************" << endl;
   cout << "The total for all rolls is " << total << endl;
   cout << "************************************" << endl;
}


int main()
{  
   //Establish randomness and set seed
   unsigned seed;
   seed = time(0);
   srand(seed);


   int user_Dice, user_Faces, throws;  // Stores user values
   DiceCup roll; // Create DiceCup Class object

   // Prompt user for number of dice, faces, throws
   cout << "How many dice would you like to use? ";
   cin >> user_Dice;
   roll.setNumDice(user_Dice);

   cout << "How many 'faces' should each die have? ";
   cin >> user_Faces;
   roll.setNumFaces(user_Faces);

   cout << "How many throws should we make? ";
   cin >> throws;
   
   roll.rollDice(throws); // Calls function to throw dice

   return 0;

}
