/**************************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date 1/31/15
 *
 * Description: This program prompts the user
 *   for data about a date and then based on a menu
 *   of options displays the date in the desired
 *   format.
 *
 ***************************************************/

#include <iostream>
#include <iomanip>
#include "Date.hpp" //Header file required for this program
using namespace std;

int getChoice(); //Function prototype


/*********************************************************
 *                 Date::Date
 *
 * Default constructor: initializes values  to 1/1/2001
 **********************************************************/
Date::Date()
{
    setDay(1);
    setMonth(1);
    setYear(2001);
}

/**********************************************************
 *                Date::Date
 *
 * Three parameter constructor
 **********************************************************/
Date::Date(int dayIn, int monthIn, int yearIn)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}

/**********************************************************
 *                 Date::setDay
 *
 * This function sets the value for day as specified by
 * the user.  It also evaluates if the day entered is 
 * valid.
 **********************************************************/
void Date::setDay(int dayIn)
{
   day = dayIn;
   
   //  Special Case: February (disregarding leap years)   
   if (month == 2 && day > 28)
   {
      cout << "February only has 28 days." << endl;
      cout << "Enter 1-28: ";
      cin >> day;
   }
   // 30 Days Hath September, April, June & Nov. All the rest are trying too hard.
   else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
   {
      cout << "The month chosen only has 30 days." << endl;
      cout << "Enter 1-30: ";
      cin >> day;
   }
   // Display Error Message for days less than 1 or greater than 31
   // Set variable "day" to zero.  
   if (day < 1 || day > 31)
   {
      cout << "Invalid Entry. Value set to Zero." << endl;
      day = 0;
   }
}

/*************************************************************
 *                 Date::setMonth
 *
 * This function sets the value for "month" as directed by
 * the user.  It aslo validates the entry.
 *************************************************************/
void Date::setMonth(int monthIn)
{
    month = monthIn;

    // Display Error Message for months less than 1 or greater than 12
    // Set variable "month" to zero.
    if (month < 1 || month > 12)
    {
       cout << "Invalid Entry. Value set to Zero." << endl;
       month = 0;
    }
}

/**************************************************************
 *                    Date::setYear
 * 
 * This function sets the value for "year" as directed by the
 * user.  It also validates the entry.
 **************************************************************/
void Date::setYear(int yearIn)
{
    year = yearIn;
}

/****************************************************************
 *                    Date::print1
 *
 *  This function displays a date in the format: mm/dd/yy
 ****************************************************************/
void Date::print1()
{
    int yearMod = year % 100;  // Grab last two digits of year
    cout << setw (2) << setfill ('0') << month << "/"; 
    cout << setw (2) << setfill ('0') << day << "/"; 
    cout << setw (2) << setfill ('0') << yearMod << endl;
}                 

/*****************************************************************
 *                    Date::print2
 *
 * This function dispalys a date in the format: Month Day, Year
 *****************************************************************/
void Date::print2()
{
   switch (month)
   {
      case 1: cout << "January " << day << "," << " " << year << endl;
              break;
      case 2: cout << "February " << day << "," << " " << year << endl;
              break;   
      case 3: cout << "March " << day << "," << " " << year << endl;
              break;
      case 4: cout << "April " << day << "," << " " << year << endl;
              break;
      case 5: cout << "May " << day << "," << " " << year << endl;
              break;
      case 6: cout << "June " << day << "," << " " << year << endl;
              break;
      case 7: cout << "July " << day << "," << " " << year << endl;
              break;
      case 8: cout << "August " << day << "," << " " << year << endl;
              break;
      case 9: cout << "September " << day << "," << " " << year << endl;
              break;
      case 10: cout << "October " << day << "," << " " << year << endl;
              break;
      case 11: cout << "November " << day << "," << " " << year << endl;
              break;
      case 12: cout << "December " << day << "," << " " << year << endl;
              break;
   }
}

/*********************************************************************
 *                         Date::print3
 *
 * This function displays a date in the format: Day Month Year
 *********************************************************************/ 
void Date::print3()
{
   switch (month)
   {
      case 1: cout << day << " January " << year << endl;
              break;  
      case 2: cout << day << " February " << year << endl;
              break;  
      case 3: cout << day << " March " << year << endl;
              break;  
      case 4: cout << day << " April " << year << endl;
              break;  
      case 5: cout << day << " May " << year << endl;
              break;  
      case 6: cout << day << " June " << year << endl;
              break;  
      case 7: cout << day << " July " << year << endl;
              break;  
      case 8: cout << day << " August " << year << endl;
              break;  
      case 9: cout << day << " September " << year << endl;
              break;  
      case 10: cout << day << " October " << year << endl;
              break;  
      case 11: cout << day << " November " << year << endl;
              break;  
      case 12: cout << day << " December " << year << endl;
              break;  
   }
}   
 
int main()
{
   
   int user_month, user_day, user_year;
   int choice;  //holds user's menu choice
   Date userDate; //Establish Date object

   // User Welcome
   cout << endl << endl; 
   cout << "********************************" << endl;
   cout << "*  Welcome to --------         *" << endl;
   cout << "*  -------- Format Your Date!  *" << endl;
   cout << "********************************" << endl;
   cout << endl << endl;
   
   // Prompt the User for a Date and Set Values
   cout << "Let's enter the date information." << endl;
   cout << "Please enter numbers only." << endl;
   cout << "Enter a month: ";
   while (!(cin >> user_month))  //Verify as a number
   {
      cout << "Please enter a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   userDate.setMonth(user_month);

   cout << "Enter a day: ";
   while (!(cin >> user_day))    //Verify as a number
   {
      cout << "Please enter a number: ";
      cin.clear();
      cin.ignore(100, '\n');
   }
   userDate.setDay(user_day);

   cout << "Enter a year: ";   
   while (!(cin >> user_year))   //Verify as a number
   {
      cout << "Please enter a number: ";  
      cin.clear();
      cin.ignore(100, '\n');
   }

   while (user_year < 1000)  //Ensure 4 digit number for formatting options
   {
      cout << "Please enter 4 digits: ";
      while (!(cin >> user_year))  //Verify as a number
      {
         cout << "Please enter a number: ";
         cin.clear();
         cin.ignore(100, '\n');
      }
   }
   userDate.setYear(user_year);
   
   cout << string(50, '\n'); // Add whitespace before displaying menu

   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING OPTIONS" << endl;
   cout << "1: MM/DD/YY (01/01/01)" << endl;
   cout << "2: Month Day, Year (January 01, 2001)" << endl;
   cout << "3: Day Month Year (01 January 2001)" << endl;
   cout << "4: Quit the program" << endl;
   cout << endl;   
      
   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function

      if (choice != 4)
      {
         switch (choice)
         {
            case 1:   userDate.print1();
                      break;
            case 2:   userDate.print2();
                      break;
            case 3:   userDate.print3();
                      break;
         }
      }
   } while (choice !=4);

   return 0;  
}   

/**********************************************************
 *                   getChoice
 *
 * This function inputs, validates, and returns the
 * user's menu choice
 *********************************************************/
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 4)
   {
      cout << "The only valid choices are 1-4." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
