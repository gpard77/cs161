/************************************************
 *
 * Geoffrey Pard
 * Date: 1/11/15
 *
 * Description: This program calculates income
 *    from ticket sales.
 *
 ************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double CLASS_A_COST = 15.00;
   const double CLASS_B_COST = 12.00;
   const double CLASS_C_COST = 9.00;

   int numClassA, numClassB, numClassC;
   double salesA, salesB, salesC, totalSales;

   //Greeting
   cout << "***This program calculates gross profit from ticket sales.***"
        << endl << endl;

   //Record number of Class A tickets sold
   //And Calculate gross sales for ticket price.
   cout << "Enter the number of Class A tickets sold: ";
   cin >> numClassA;
   salesA = numClassA * CLASS_A_COST;

   //Record number of Class B tickets sold
   //And Calculate gross sales for ticket price
   cout << "Enter the number of Class B tickets sold: ";
   cin >> numClassB;
   salesB = numClassB * CLASS_B_COST;

   //Record number of Class C tickets sold
   //And Calculate gross slaes for ticket price
   cout << "Enter the number of Class C tickets sold: ";
   cin >> numClassC;
   salesC = numClassC * CLASS_C_COST;

   //Calculate and Display total ticket sales
   totalSales = salesA + salesB + salesC;
   cout << fixed << showpoint << setprecision(2);
   cout << "Gross profit from ticket sales is $" << totalSales << endl;     

   return 0;
}    
