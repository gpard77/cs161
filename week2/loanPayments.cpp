/*********************************************
 *
 * Geoffrey Pard
 * Date: 1/11/15
 *
 * Description: This program prompts the user
 *    for information about an outstanding loan
 *    and uses the input to create a report
 *    outlining payment information.
 **********************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double loanPrincipal, interestRate, numPayments;
   double ratePlusOne, powResult, monthlyPayment, amountPaidBack, interestPaid;

   //Request loan information from the user
   cout << "Enter your loan amount ($XXX.XX): $";
   cin >> loanPrincipal;
   cout << "Enter the stated monthly ";
   cout << "interest rate for your loan (percentage): ";
   cin >> interestRate;
   cout << "Enter the number of monthly payments needed ";
   cout << "to repay the loan (must be greater than zero): ";
   cin >> numPayments;

   //Convert user data into a form usable in pow function
   //Store result in variable for use in loan payment formula
   interestRate = interestRate / 100;
   ratePlusOne = interestRate + 1;
   powResult = pow(ratePlusOne, numPayments); 

   //Establish the formula for figuring loan payments
   monthlyPayment = ((interestRate * powResult)  / (powResult - 1)) * loanPrincipal;

   //Calculate actual amount paid back over course of loan period
   amountPaidBack = monthlyPayment * numPayments;
   interestPaid = (monthlyPayment * numPayments) - loanPrincipal;

   //Convert Interest Rate back to Percentage
   interestRate = interestRate * 100;

   //Create user friendly table to display the loan information
   cout << endl << endl;
   cout << "*****************************************************" << endl;
   cout << fixed << showpoint << setprecision(2);
   cout << left << setw(40) << "Loan Amount:"
        << right << setw(1) << "$" << loanPrincipal << endl; 
   cout << left << setw(40) << "Monthly Interest Rate:"
        << right << setw(1) << " " << interestRate << "%" << endl;
   cout << noshowpoint << setprecision(0);
   cout << left << setw(40) << "Number of Payments:"
        << right << setw(1) << " " << numPayments << endl;
   cout << fixed << showpoint << setprecision(2);
   cout << left << setw(40) << "Monthly Payment:"
        << right << setw(1) << "$" << monthlyPayment << endl;
   cout << left << setw(40) << "Amount Paid Back:"
        << right << setw(1) << "$" << amountPaidBack << endl;
   cout << left << setw(40) << "Interest Paid:" 
        << right << setw(1) << "$" << interestPaid << endl;
   cout << "*****************************************************" << endl;


   return 0;
}    
