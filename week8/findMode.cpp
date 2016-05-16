/********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/24/15
 *
 * Description: This program discerns the Mode of a data
 *   set that is specified by a User.
 ********************************************************/
#include <iostream>
using namespace std;


void findMode(int [], int); // Function prototype

int main()
{

   // User Welcome
   cout << endl;
   cout << "***************FIND MODE*******************" << endl;
   cout << endl;
   cout << "You will be prompted to input a data set." << endl;
   cout << "Afterwards, this program will display the" << endl;
   cout << "value (or values) that appear most often." << endl;
   cout << "-------------------------------------------" << endl;
   cout << endl;

   // Prompt User
   int size; //Hold a value for the Array Size

   cout << "How many numbers would you like to input: ";
   cin >> size;

   // Set up User Array
   int user_array[size];
   int *array_ptr = user_array; // Declare and Assign pointer 

   array_ptr = new int[size]; // Dynamically Allocate Array Size

   // Fill the Array
   cout << endl;
   cout << "Enter The Values Below." << endl;
   cout << "-------------------------------" << endl;
   for (int i = 0; i < size; i++)
   {
      cout << "Number " << (i + 1) << ": ";
      cin >> array_ptr[i];
   }
   
   // Pass the Array to the Function to find Mode
   findMode(array_ptr, size);

   delete [] array_ptr; // Free memory
   array_ptr = 0; // Pointer gets Null or Zero
 

   return 0;
}

/**********************************************************
 *                    findMOde
 *
 * This function accepts as parameters an array of ints 
 * and the SIZE of the array.  It then determines which
 * values in the array appear most often (Mode).
 *********************************************************/
void findMode(int modeArray[], int size)
{
   int temp;
   bool swap;

   // First, let's sort the Array (Ascending)
   do 
   {
      swap = false;
      for (int i = 0; i < (size - 1); i++)
      {
         if (modeArray[i] > modeArray[i + 1])
         {
            temp = modeArray[i];
            modeArray[i] = modeArray[i + 1];
            modeArray[i + 1] = temp;
            swap = true;
         }
       }
   } while (swap);
   cout << endl;

   for (int i = 0; i < size; i++)
   {
      cout << modeArray[i] << " ";
   }

   cout << endl << endl;

   // Next, tally each occurence of a number
   int otherNum = 1;
   int number = modeArray[0];
   int mode = number;
   int tally = otherNum;

   cout << "************************" << endl;
   cout << "From your data set" << endl; 
   cout << "Possible modes include: ";

   for (int i = 1; i <= size; i++)
   {
      if (modeArray[i] == number)
      {
         tally++;  // How many occurences of current number 
      }
      else // Move on to new number
      {   
         if ((tally > otherNum) ||(tally == otherNum)) // Is this number highest frequency so far?
         {
            otherNum = tally; // Update otherNum with new tally to beat
            cout <<  number << " ";
            mode = number; // Current winner is a mode
         }
         tally = 1; // Reset
         number = modeArray[i]; // Moving on...
      }
   }

   /* Unique Members of Array (TESTING)
   int counter = 0; 
   for (int i = 0; i < size; i++)
   {
      if (modeArray[i] != modeArray[i + 1])
      {
         counter++;
      }
   }*/
   cout << endl;
   cout << endl;
}
