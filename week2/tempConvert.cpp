/************************************************
 *
 * Geoffrey Pard
 * Date: 1/11/15
 *
 * Description: This program converts degrees
 *    Celsius to degrees Fahrenheit.
 *
 ***********************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double degreesC, degreesF;

   //Prompt the user to enter the temperature in degrees Celsius
   cout << "Enter the temperature in degrees Celsius: ";
   cin >> degreesC;
   
   //Establish the formula to convert between
   //Celsius and Fahrenheit.
   degreesF = ((9 * degreesC) / 5) + 32;

   //Display the result of the conversion.
   cout << fixed << showpoint << setprecision(1);
   cout << "That's " << degreesF << " degrees in Fahrenheit." << endl; 

   return 0;   
}     
