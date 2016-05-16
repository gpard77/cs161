/******************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date: 1/17/15
 *
 * Description: This program asks a user
 *   for an integer and then based on 
 *   this number reports whether a 
 *   substance is a solid, liquid, or gas.
 ********************************************/

#include <iostream>
using namespace std;

int main()
{
   int number;
  
   //User Greeting
   cout << endl;
   cout << "What State am I in????" << endl;
   cout << "----------------------" << endl;
   cout << "Please enter a number: ";  //Request a number from user
   while (!(cin >> number)) //validate the input
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   cout << endl;

   //Use user input to find the result
   //Display in a type of table 
   cout << "************************" << endl;
   cout << "Substance: Ethyl Alcohol" << endl;
   if (number <= -173.0)
   {
      cout << "At " << number << " degrees, this" 
      << " substance is a solid.\n";
   }
   else if (number >= 172)
   {
      cout << "At " << number << " degrees, this"
      << " substance is gas.\n";
   }
   else
   {
      cout << "At " << number << " degrees, this"
      << " substance is a liquid.\n";
   }
   //Find correct state and display
   cout << "************************" << endl;
   cout << "Substance: Mercury" << endl;
   if (number <= -38.0)
   {
      cout << "At " << number << " degrees, this" 
      << " substance is a solid.\n";
   }
   else if (number >= 676)
   {
      cout << "At " << number << " degrees, this"
      << " substance is gas.\n";
   }
   else
   {
      cout << "At " << number << " degrees, this"
      << " substance is a liquid.\n";
   }
   //Find correct state and display
   cout << "************************" << endl;
   cout << "Substance: Oxygen" << endl;
   if (number <= -362.0)
   {
      cout << "At " << number << " degrees, this" 
      << " substance is a solid.\n";
   }
   else if (number >= -306)
   {
      cout << "At " << number << " degrees, this"
      << " substance is gas.\n";
   }
   else
   {
      cout << "At " << number << " degrees, this"
      << " substance is a liquid.\n";
   }
   //Find correct state and display
   cout << "************************" << endl;
   cout << "Substance: Water" << endl;
   if (number <= 32.0)
   {
      cout << "At " << number << " degrees, this" 
      << " substance is a solid.\n";
   }
   else if (number >= 212)
   {
      cout << "At " << number << " degrees, this"
      << " substance is gas.\n";
   }
   else
   {
      cout << "At " << number << " degrees, this"
      << " substance is a liquid.\n";
   }

   cout << "*************************" << endl;
   
   return 0;
}
