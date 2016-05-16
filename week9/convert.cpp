/***********************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 2/28/15
 *
 * Description: This program allows a user to convert a binary number
 *   to a decimal and vica versa.
 ************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

// Function Prototypes
void printMenu();
int getChoice();
int binToDecimal(string, int, int);
int decToBinary(int);

int main()
{
   // User Welcome
   cout << endl;
   cout << "***************************" << endl;
   cout << "        CONVERT IT         " << endl;
   cout << "***************************" << endl;
   cout << endl << endl;
   cout << "This program will convert a" << endl;
   cout << "number from Binary to Decimal" << endl;
   cout << "and vice versa." << endl;
   cout << endl;

   string user_binary;
   int number = 0; // hold length of binary
   int counter = 0; // Used in Binary to Decimal function

   int user_decimal; // hold value to be converted to Binary
   int choice = 0; // hold value for menu choice 

   printMenu(); // Print Menu of Options

   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function
      if (choice != 3)
      {
         // Option to Convert Binary to Decimal
         if (choice == 1)
         {
            cout << "Please Enter Binary To Be Converted: ";
            while (!(cin >> user_binary))
            {
               cout << "Please Enter 0(s) & 1(s) " << endl;
               cin.clear();
               cin.ignore(100, '\n');
            }
            cout << endl;
            int convertToDec = 0; 
            number = user_binary.length(); // Assign Number Length of Binary
            cout << "---------------------------------------" << endl;
            cout << "The equivalent Decimal is: ";
            convertToDec = binToDecimal(user_binary, number, counter);
            cout << convertToDec;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << endl << endl;
            printMenu();
         }
         // Option to Convert Decimal to Binary
         else if (choice == 2)
         {
            cout << "Please Enter Decimal To Be Converted: ";
            while (!(cin >> user_decimal))
            {
               cout << "Please Enter Format (0.00) " << endl;
               cin.clear();
               cin.ignore(100, '\n');
            }
            cout << endl;
            int convertToBin;
            cout << "---------------------------------------" << endl;
            cout << "The equivalent Binary is: ";
            convertToBin = decToBinary(user_decimal);
            cout << convertToBin;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << endl << endl;
            printMenu();
         }
      }
   } while (choice !=3);  // Quit the program




   return 0;
} 

/************************************************************************
 *                          printMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING OPTIONS:" << endl;
   cout << "1: Convert Binary to Decimal" << endl;
   cout << "2: Convert Decimal to Binary" << endl;
   cout << "3: Quit the program" << endl;
   cout << endl;
}   

/************************************************************************
 *                      getChoice
 *
 *  This function validates the user's menu selection
 ************************************************************************/
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 3)
   {
      cout << "The only valid choices are 1-4." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}

/********************************************************************************
 *                      binToDecimal
 *
 * This function will convert binary entries to decimals
 ******************************************************************************/
int binToDecimal(string binary, int number, int counter)
{
   int total = 0;
    
   if (number >= 0)
   {
      if (binary[(number - 1)] == '1')
      {
         total = pow(2, counter);
      }
      return total + binToDecimal(binary, --number, ++counter) + 0; //Recursive Call
   }
   return total;
}

/**********************************************************************************
 *                          decToBinary
 *
 * This function will convert decimal entries to binary 
 *********************************************************************************/
int decToBinary(int number)
{  
   if (number > 0)
   {
      return (number % 2) + 10 * decToBinary(number / 2); // Recursive Call
   }
}
