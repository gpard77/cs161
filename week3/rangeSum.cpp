/*********************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date: 1/18/15
 *
 * Description: This program prompts the user
 *  for two integers and then sums the digits
 *  between them (inclusive).
 *
 *********************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double num1, num2, range, add;
   
   //User Greeting
   cout << "****************************\n";
   cout << "This program will ask you for\n";
   cout << "two numbers and then sum all\n";
   cout << "the digits within the range.\n";
   cout << "****************************" << endl;

   //Prompt the user for input 
   //and validate that both are numbers
   cout << "Please enter the first number: ";
   while (!(cin >> num1))
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   cout << "Please enter the second number: ";
   while (!(cin >> num2))
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }

   //Begin evaluation of user input:
   //Put data in order to sum incrementally
   if (num1 < num2)
   {
      while (num1 <= num2)
      {
         add += num1;
         num1++;
      }
      cout << "The sum of the digits ";
      cout << "in this range is ";
      cout << add << endl;
   }
   else if (num2 < num1)
   {
      while (num2 <= num1)
      {
         add += num2;
         num2++;
      }
      cout << "The sum of the digits ";
      cout << "in this range is ";
      cout << add << "." << endl;
   }
   else
   {
      //Input Numbers are the same
      cout << "The sum of the digits ";
      cout << "in this range is ";
      cout << num1 << "." << endl;
   }   
   return 0;
}
