/*****************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 1/19/15
 *
 * Description: This program generates
 *   a random number between 1-100
 *   and asks a user to guess the number
 *
 *****************************************/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
   int num, guess, numGuess;
   srand(time(NULL));  //seed random number

   num = rand() %101;  //set number range
   //cout << "Rand num is: " << num << endl; (for testing)
  
   cout << "******************************" << endl;
   cout << "The Guess A Number Game" << endl;
   cout << "******************************" << endl;

   //Create loop to increment number of guesses
   for (numGuess =1; guess != num; numGuess++)
   {
      cout << "Enter a guess between 0-100: ";
      // Make sure input is a number
      while (!(cin >> guess))
      {
         cout << "Invalid Input.  Please ";
         cout << "enter a number: ";
         cin.clear();
         cin.ignore(100, '\n');
      } 
 
      // Start sequence that guides user to correct guess
      if(guess == num) //To specify winning guess
      {  
         cout << "You got it!" << endl;
         cout << "It took you " << numGuess << " guesses." << endl;
         exit(0);
      }
      else if (guess > 100 || guess < 0) //Keep numbers in range
      {
         cout << "Invalid Guess: keep numbers between 0-100." << endl;
      }
      else if (guess < num)
      {
         cout << "Your guess is too low." << endl;
      }
      else if (guess > num)
      {
         cout << "Your guess is too high." << endl;
      }
   }
      
   return 0;
}
