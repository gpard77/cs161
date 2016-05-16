/*****************************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date: 1/24/15
 *
 * Description: This program performs
 *  an arithmetic function  known as the 'hailstone
 *  sequence'.  The program asks the user for 
 *  a number and then displays how many steps
 *  it takes to come to a solution.
 *
 *****************************************************/

#include <iostream>
using namespace std;

void hailStone(int num); //Function prototype

int main()
{
   int num, counter;
   
   //Prompt user for input and
   //Verify it as a number
   cout << "Enter a number: ";
   while (!(cin >> num))
   {
      cout << "Please enter a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   //Call Function to obtain steps needed
   //in hailstone operation.
   hailStone(num);

   return 0;
}

/*****************************************************
 *            * hailStone*
 *
 *Description:  This function performs the hailstone
 *  operation.  It determines if a number is even
 *  or odd.  If even, it divides by 2 until the number
 *  is one.  If odd, it multiplies by 3 and adds 1.
 *
 *Parameters: User supplied int.    
 *Pre-Conditions: User input will be a verified number
 *Post-Condition: The function prints the number of
 *  steps needed to get back to 1.
 *
 *****************************************************/
 
void hailStone(int num)
{
   int counter = 0;
   for (num; num !=1; counter++)
   {
      if (num % 2 == 0 && num >= 1)
      {
         num = num /2;
      }
      else
      {
         num = (num * 3) + 1;
      } 
   }
   cout << "The process completes in " << counter;
   cout << " steps." << endl; 
}
