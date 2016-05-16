/****************************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date: 1/25/15
 *
 * Description: This program gets a number from the
 *    user and determines if the number is prime.
 *
 **************************************************/

#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int num); //Function prototype

int main()
{
   int num;
   //User Welcome
   cout << "***********************************" << endl;
   cout << "This program requests a number " << endl;
   cout << "And determines if it is prime" << endl;
   cout << "***********************************" << endl;
   cout << "A True statement means prime." << endl << endl;

   //Get number from the user and validate
   cout << "Please enter a positive number: ";
   while (!(cin >> num))
   {
      cout << "Must be a positive integer: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   //Pass user number into function to determine if prime.
   isPrime(num);

   return 0;
}

/****************************************************************
 *                      isPrime
 *
 * Description: This function receives an integer and determines
 *              whether the number is prime or not.
 * Parameters: Receives a user entered integer.
 * Pre-Condition: Gets a number for evaluation.
 * Post-Condition: Determines if the number is prime or not.
 *
 ***************************************************************/
 
void isPrime(int num)
{
   bool prime = true;
   //Special Case: The number 1 and less
   // are not prime numbers.
   if (num <= 1)
   {
      cout << "false" << endl;
   }
   else
   {
      //To find a prime we only need to check
      //numbers up to the square root of the 
      //number given.
      for (int i = 2; i <= sqrt(num); i++)
      {
         //An answer without a remainder is not prime.
         if (num % i == 0)
         {
            prime = false;
         }
      }
      //Display true for prime otherwise false
      if (prime == true)
      {
         cout << "true" << endl;
      }
      else
      {
         cout << "false" << endl;
      }
   } 
}
