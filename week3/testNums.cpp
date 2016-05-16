/********************************
 *
 * Geoff
 * 1/18/15
 *
 * Writing Numbers to file for test
 *
 ************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outputFile;
   
   // Open output file
   outputFile.open("./nums.txt");

   cout << "Writing numbers to file.";

   //Test numbers to write
   outputFile << 34.5 << "\n"; 
   outputFile << 19.3 << "\n";
   outputFile << 14.6 << "\n";
   outputFile << 12.8 << "\n";
   outputFile << -14.1 << "\n";

   // Close file
   outputFile.close();

   cout << "Complete." << endl;

   return 0;
}
