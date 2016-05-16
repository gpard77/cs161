/******************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/28/15
 *
 * Description: This program asks the user for a list of doubles
 *   and then displays the sum of the list.
 ******************************************************************/
#include <iostream>
using namespace std;


double recSum(double [], int); // Function Prototype

int main()
{

   // User Welcome
   cout << "****************************" << endl;
   cout << "       RECURSIVE SUM        " << endl;
   cout << "****************************" << endl;
   cout << endl;

   int size = 0; // To hold size of user array

   // Prompt User for Array Size
   cout << "Enter the number of integers you would like to input: ";
   cin >> size;

   double user_array[size];
   double *array_ptr = user_array; // Declare and Assign pointer 

   array_ptr = new double[size]; // Dynamically Allocate Array Size

   // Fill the Array with User Values
   for (int i = 0; i < size; i++)
   {
      cout << "Number " << (i + 1) << ": ";
      cin >> array_ptr[i];
   }

   // Display original list
   cout << endl;
   cout << "Your List of Numbers: ";
   for (int i = 0; i < size; i++)
   {
      cout << array_ptr[i] << " ";
   }
   cout << endl;

   // Call Function and Sum the List
   double user_total = 0;
   cout << "The Sum of Your List: ";
   user_total = recSum(array_ptr, size);
   cout << user_total;
   cout << endl << endl;

   return 0;
}

/**************************************************************
 *                      revSum
 *
 *  This function accepts a user defined aray of doubles and 
 *  recursiely sums that list.
 ***************************************************************/
double recSum(double array[], int size)
{
   if (size < 0)
   {
      return 0; // For Function's Base Case
   }
   else
   {
      return array[size] + recSum(array, size - 1);
   }
} 
