/**************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/23/15
 *
 * Description: This program takes three values 
 *  and sorts them in ascending order
 **************************************************/
#include <iostream>
using namespace std;

void sort(int *, int *, int *); // Function prototype

int main()
{
   // Delcare Three Variables for User Input
   int num1 = 0;
   int num2 = 0;
   int num3 = 0;

   // User Welcome
   cout << endl;
   cout << "****************SMALL SORT**************" << endl;
   cout << endl;
   cout << "Please enter three numbers to be sorted." << endl;
   
   // Prompt User for Vlaues
   cout << "Enter Number 1: ";
   cin >> num1;
   cout << "Enter Number 2: ";
   cin >> num2;
   cout << "Enter Number 3: ";
   cin >> num3;

   // Dispaly the Order Entered
   cout << endl << endl;
   cout << "Original Order: " << endl;
   cout << num1 << endl;
   cout << num2 << endl;
   cout << num3 << endl;

   // Call the Sort Function and Display the Sorted Order
   cout << endl << endl;
   cout << "Sorted Order: " << endl;
   sort(&num1, &num2, &num3); // Passing the Address of User Values

   return 0;
}

/*******************************************************
 *                  sort
 *
 * This function accepts three values as parameters and
 * sorts them in acsending order
 ******************************************************/
void sort(int *input1, int *input2, int *input3)
{
   int numbers[3]= {*input1, *input2, *input3}; // Set array to hold pointers
   int temp; // Holding place for swap
   bool swap;

   do
   {
      swap = false;
      for (int i = 0; i < 2; i++)
      {
         if (numbers[i] > numbers[i + 1])
         {
            temp = numbers[i];  // If number is larger, put here
            numbers[i] = numbers[i + 1]; //And then put smaller here
            numbers[i + 1] = temp; // Move up first element (swap)
            swap = true;
         }
      }
   } while (swap);

   // Display our Sorted List
   for (int i = 0; i < 3; i++)
   {
      cout << numbers[i] << endl;
   }
}
