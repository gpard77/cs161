/*********************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date 1/25/15
 *
 * Description: This program computes the 
 *   distance of a falling object.  It asks
 *   for the amount of time lapsed and returns
 *   the distance in meters that the object
 *   has fallen.
 *
 **********************************************/

#include <iostream>
#include <cmath>
using namespace std;

void fallDistance(int time); //Function prototype

int main()
{
   int time;

   //Prompt user for time value and validate
   cout << "Please enter (in seconds) the amount" << endl;
   cout << "of time the object has fallen." << endl;
   cout << "Number of Seconds: ";
   while (!(cin >> time))
   {
      cout << "Please enter a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   //Validate as Positive number
   for (time; time < 0; )
   {
      cout << "Please enter a positive number: ";
      while (!(cin >> time))
      {
         cout << "Please enter a number: ";
         cin.clear();
         cin.ignore(100, '\n');
      }
   }
   //Pass value into function to get distance
   fallDistance(time);

   return 0;
}

/**********************************************************
 *               fallDistance
 *
 *  Description: This function receives user input 
 *               representing seconds and then uses it to 
 *               calculate distance of a falling object.
 *  Parameters: User supplied int
 *  Pre-Condition: Gets a value supplied by user from main
 *  Post-Condition: Computes distance and prints result
 *
 ***********************************************************/

void fallDistance(int time)
{
   const double G = 9.8;  //Constant Value (Accel. due to gravity)
   int distance, tSquared;

   //Figure Time Squared for simplicity 
   tSquared = pow(time, 2);

   //Establish distance formula
   distance =  (G * tSquared) / 2;

   cout << "Distance travelled (in meters): " << distance << endl;

} 
