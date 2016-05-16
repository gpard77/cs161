/**********************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date 1/18/15
 *
 * Description: This program reads a list of
 *  numbers from a file and then sums them.  
 *  The result is output into another file.
 *
 **********************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   //Delcare file stream objects
   ifstream inputFile;
   ofstream outputFile;
   
   double numbers, sumNumbers;

   // Set accumulator to zero
   sumNumbers = 0.0;

   // Open the input file
   inputFile.open("./nums.txt");

   // Open the output file
   outputFile.open("./sum.txt");

   //Loop until the EOF is reached
   if (inputFile)
   {
      cout << "Retrieving the list of numbers";
      cout << " from the specified file." << endl;
      
      while (inputFile >> numbers)  //Test for values
      {
         sumNumbers += numbers;
      }
      cout << "*********************************" << endl;
      cout << "Finished." << endl;
   } 
   else  //Display message alerting user of a problem  
   {
      cout << "There was an error opening the file.";
      cout << endl;
   }
   
   //Write the sum of numbers to output file
   if (outputFile)
   {
      outputFile << "The sum of the values is ";
      outputFile << sumNumbers;
      outputFile << ".";   
   }
   else  //Display message alerting user of a problem  
   {
      cout << "Output file could not be accessed";
      cout << " or created." << endl;
   }
   
   //Close stream objects   
   inputFile.close();
   outputFile.close();

   return 0;
}
