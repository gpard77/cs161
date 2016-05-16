/********************************************
 *
 * Geoffrey Pard
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

void getNums(int &num1, int &num2, int &num3); //Function prototypes
void orderNums(int &x, int &y, int &z);

int main()
{
   int x, y, z; 

   //User Welcome
   cout << "This program will sort";
   cout << " your input!" << endl;
   cout << "Get ready to enter three numbers." << endl << endl;

   //Function to prompt user for input
   //It also stores the values     
   getNums(x, y, z);
   //Function to sort the numbers smallest to largest
   orderNums(x, y, z);

   return 0;
}

/**********************************************************
 *                getNums
 *
 * Description: Prompts user for three numbers
 * Parameters: Takes 3 int(s): num1, num2, num3
 * Pre-Condition: Get numbers and verify input
 * Post-Condition: Uses reference values to update variables
 *                 in the main function.
 *
 *********************************************************/
void getNums(int &num1, int &num2, int &num3)
{   
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
void orderNums(int &x, int &y, int &z)
{

   int temp;
   //Loop to swap values so that numbers
   //can be sorted smallest to largest
   if (x > y && x > z)
   {
      temp = x;
      if (y > z)
      {
         x = z;
         z = temp;
      }
      else if (z > y)
      {
         x = y;
         y = z;
         z = temp;
      }
   }
   else if (y > x && y > z)
   {
      temp = y;
      if (x > z)
      {
         y = x;
         x = z;
         z = temp;
      }
      else if (z > x)
      {
         y = z;
         z = temp;
      }
   }
   else 
   {
      temp = x;
      if (x > y)
      {
         x = y;
         y = temp;
      }
   }
   //Display message to show the sorted input
   cout << "Sorted (smallest to largest): ";
   cout << x << ", " << y << ", " << z << endl;
     
} 
