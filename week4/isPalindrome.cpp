/***************************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date: 1/26/15
 *
 * Description: This program asks for a string and
 *   then decides if the string is a palindrome 
 *   or not.
 *
 ***************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isPalindrome(string words);


int main()
{
   const int SIZE = 50;
   char words[SIZE];

   //User Greeting
   cout << "***************************" << endl;
   cout << "Let's see if a word"  << endl;
   cout << "is a Palindrome." << endl;
   cout << "('true' means Palindrome!)" << endl;
   cout << "***************************" << endl << endl;
   //Prompt user for a string and store
   cout << "Please enter your word: ";
   cin.getline(words, SIZE);

   //Pass string into the function to see if 
   //it is a Palindrome.
   isPalindrome(words); 

   return 0;

}

/******************************************************
 *                isPalindrome
 *
 * Description: This function accepts a string and 
 *    decides if the string is a Palindrome (the same
 *    forwards and back)
 *
 * Parameters:  A string value
 *
 *****************************************************/

bool isPalindrome(string words)
{
   //Create a variable to hold characters
   char forward;
   //Evaluate individual characters for the length
   //of a word
   for (int i = 0; i < words.length(); i++)
   {
     forward = words[i];
   }

   //Create a variable to hold characters
   char reverse;
   //Evaluate the characters in a word in
   //reverse order
   for (int j = words.length(); j >= 0; j--)
   {
     reverse = words[j];
   }

   //Compare the characters forwards and back
   //If equal then a palindrome 
   if (forward == reverse)
   {
      cout << boolalpha << true << endl;
   }
   else
   {
      cout << boolalpha << false << endl;
   }
}
