/**************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 2/16/15
 *
 * Description: This program performs the Caesar cipher.  It
 * asks the user to enter a string and an offset.  It then 
 * shifts the letters in the string by the number entered as
 * the offset.
 **************************************************************/
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
void encipher(char[], int); //Prototype

int main()
{
   const int SIZE = 100; // Good for input less than 100 chars
   char words[SIZE];
   int offset = 0;  // Initialize our offset variable

   // User Welcome
   cout << endl;
   cout << "*****************************" << endl;
   cout << "Welcome to the Caesar Cipher!" << endl;
   cout << "****************************"  << endl;
   cout << endl;
   cout << "This program encrypts your message" << endl;
   cout << "by the number of characters you specify." << endl;
   cout << "****************************************" << endl;
   cout << endl;
   cout << "Enter your message ( < 100 Characters): ";
   cin.getline(words, SIZE);
   cout << "Please enter number for offset: ";
   cin >> offset;
   encipher(words, offset); // function call

   return 0;
}
/**************************************************************
 *                    encipher
 *
 * This function uses the User's entered offset and shifts the
 * letters in the message by that number of letters (wrapping
 * the alphabet if necessary.  Spaces are ignored
 **************************************************************/
void encipher(char words[], int offset)
{
   char space = 32;  //ASCII Value for a space
   char lbegin = 97; //ASCII Value for lowercase 'a'
   char ubegin = 65; //ASCII Value for uppercase 'A'

   for (int i = 0; i < strlen(words); i++)
   {
      if (words[i] != space) // Skip spaces
         if (isupper(words[i])) //If any letters are upper start at 65
         {
            words[i] = ubegin + ((words[i] - ubegin) + offset)%26;
         }
         else // the rest start from 97
         {
            words[i] = lbegin + ((words[i] - lbegin) + offset)%26;
         }
      else
      {
         words[i] = space; // spaces won't shift
      }
   }
   // Print our shifted message
   cout << "Encrypted Message: ";
   for (int j = 0; j < strlen(words); j++)
   {
      cout << words[j];
   }
   cout << endl << endl;
}

   
