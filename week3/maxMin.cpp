/*****************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date 1/19/15
 *
 * Description: This program prompts the 
 *  user to specify how many numbers they
 *  would like to input and then returns
 *  the largest and smallest value.
 *
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
   int ask = 0;  //Initialize counter
   double numbers, userValue, test;
   double smallValue, largeValue;
   
   //Initialize variables with extreme values
   smallValue = 300000000000;
   largeValue = -30000000000;

   //Ask the user how many numbers to enter
   cout << "How many numbers would you";
   cout << " like to enter? ";
   while (!(cin >> numbers))  //Verify input
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }

   //Get the actual numbers from the user
   for (ask=0; ask < numbers; ask++)
   {
      cout << "Please enter a number: ";
      while (!(cin >> userValue))  //Verify input
      {
         cout << "Must be a number: ";
         cin.clear();
         cin.ignore(100, '\n');
      }
      //Test to see which is larger
      if (userValue < smallValue)
      {
         smallValue = userValue;
      }
      else if (userValue > largeValue)
      {
         largeValue = userValue;
      }
   }
   //Display result to the user
   cout << "The minimum value of your selections is ";
   cout << smallValue << "." << endl;
   cout << "The maximum value of your selections is ";
   cout << largeValue << "." << endl;

   return 0;
}
