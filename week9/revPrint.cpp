/******************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/28/15
 *
 * Description: This program asks the user for a list of integers
 *   and then displays the list in reverse order
 ******************************************************************/
#include <iostream>
using namespace std;


void revPrint(int [], int); // Function Prototype

int main()
{

   // User Welcome
   cout << "****************************" << endl;
   cout << "     REVERSE - A - LIST     " << endl;
   cout << "****************************" << endl;
   cout << endl;

   int size = 0; // To hold size of user array

   // Prompt User for Array Size
   cout << "Enter the number of integers you would like to input: ";
   cin >> size;

   int user_array[size];
   int *array_ptr = user_array; // Declare and Assign pointer 

   array_ptr = new int[size]; // Dynamically Allocate Array Size

   // Fill the Array with User Values
   for (int i = 0; i < size; i++)
   {
      cout << "Number " << (i + 1) << ": ";
      cin >> array_ptr[i];
   }

   // Display original list
   cout << endl;
   cout << "Your Original List: ";
   for (int i = 0; i < size; i++)
   {
      cout << array_ptr[i] << " ";
   }
   cout << endl;

   // Call Function to Reverse the List
   cout << "Your Reverse List: ";
   revPrint(array_ptr, size);
   cout << endl << endl;

   return 0;
}

/**************************************************************
 *                      revPrint
 *
 *  This function accepts a user defined aray of ints and 
 *  reverses the order of the array for display
 ***************************************************************/
void revPrint(int array[], int size)
{
   if ((size - 1) >= 0)
   {
      cout << array[size - 1] << " ";
      revPrint(array, (--size)); // Recursive function call
   }

} 
