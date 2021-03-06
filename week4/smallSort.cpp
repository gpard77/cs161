/********************************************
 *
 * GeoffresortY Pard
 * CS 161-405
 * Date: 1/24/15
 *
 * Description: This program asks the user 
 *  for three numbers and then sorts the
 *  numbers from smallest to largest.
 *
 *******************************************/

#include <iostream>
using namespace std;

//void getNums(int &num1, int &num2, int &num3); //Function prototypes
void orderNums(int &sortX, int &sortY, int &sortZ);

int main()
{
   int num1, num2, num3; 

   //User Welcome
   cout << "This program will sort";
   cout << " your input!" << endl;
   cout << "Get ready to enter three numbers." << endl << endl;
   
   
   //Get three numbers from the user
   cout << "Please enter your first number: ";
   while (!(cin >> num1))
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore();
   }
   //Second Number
   cout << "Please enter your second number: ";
   while (!(cin >> num2))
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore();
   }
   //Third Number
   cout << "Please enter your third number: ";
   while (!(cin >> num3))
   {
      cout << "Must be a number: ";
      cin.clear();
      cin.ignore();
   }
   cout << "The numbers you entered are: ";
   cout << num1 << ", " << num2 << ", " << num3 << endl;

   //Function to sort the numbers smallest to largest
   orderNums(num1, num2, num3);
   
   //Display message to show the sorted input
   cout << "Sorted (smallest to largest): ";
   cout << num1 << ", " << num2 << ", " << num3 << endl;

   return 0;
}

/**********************************************************
 *                 orderNums
 *
 * Description: This function sorts users values smallest
 *              to largest.
 * Parameters:  Receives 3 int(s) obtained from function getNums
 * Pre-Condition: Evaluates numbers as inputed
 * Post-Condition: Sorted values placed in reference variables
 *                 are sent back to the main function
 *
 **********************************************************/
void orderNums(int &sortX, int &sortY, int &sortZ)
{

   int temp;
   //Loop to swap values so that numbers
   //can be sorted smallest to largest
   if (sortX > sortY && sortX > sortZ)
   {
      temp = sortX;
      if (sortY > sortZ)
      {
         sortX = sortZ;
         sortZ = temp;
      }
      else if (sortZ > sortY)
      {
         sortX = sortY;
         sortY = sortZ;
         sortZ = temp;
      }
   }
   else if (sortY > sortX && sortY > sortZ)
   {
      temp = sortY;
      if (sortX > sortZ)
      {
         sortY = sortX;
         sortX = sortZ;
         sortZ = temp;
      }
      else if (sortZ > sortX)
      {
         sortY = sortZ;
         sortZ = temp;
      }
   }
   else 
   {
      temp = sortX;
      if (sortX > sortY)
      {
         sortX = sortY;
         sortY = temp;
      }
   }    
} 
