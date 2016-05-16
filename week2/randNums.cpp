/**************************************************
 * 
 * Geoffrey Pard
 * Date: 1/11/15
 *
 * Description: This program generates five random
 *    numbers inside a range specified by the user
 *
 ***********************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int lowerBound, upperBound;
   unsigned seed;

   //Use the time function to get a seed value
   seed = time(0);
   srand(seed); 
   
   cout << "We will generate 5 random numbers ";
   cout << "in a range of your choosing." << endl << endl;

   //Request minimum value from user
   cout << "Input a number to represent the minimum value: ";
   cin >> lowerBound;

   //Request maximum value from user
   cout << "Input a number to represent the maximum value: ";
   cin >> upperBound;

   //Generate five random numbers inside the user's range
   cout << endl;
   cout << rand() % (upperBound - lowerBound) + (lowerBound) << "   ";  
   cout << rand() % (upperBound - lowerBound) + (lowerBound) << "   ";  
   cout << rand() % (upperBound - lowerBound) + (lowerBound) << "   ";  
   cout << rand() % (upperBound - lowerBound) + (lowerBound) << "   ";  
   cout << rand() % (upperBound - lowerBound) + (lowerBound) << endl;  

   return 0;
}       
