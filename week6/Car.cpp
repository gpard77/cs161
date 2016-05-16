/*************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/10/15
 *
 * Description: This program asks a user for information that
 *  will become a Car object (year, make).  It then provides
 *  options to the user to accelerate or brake the car.
 **************************************************************/
#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;


// Implemenation For Car.hpp prototypes
Car::Car()
{
   setYear(0);
   setMake("");
   setSpeed(0);
}

Car::Car(int yearIn, string makeIn, int speedIn)
{
   setYear(yearIn);
   setMake(makeIn);
   setSpeed(0);
}

void Car::setYear(int yearIn)
{
   year = yearIn;
}

void Car::setMake(string makeIn)
{
   make = makeIn;
}

void Car::setSpeed(int speedIn)
{
   speed = speedIn;
}

int Car::getSpeed()
{
   return speed;
}

/******************************************************************
 *                    Car::accelerate
 *
 *  This method provides the framework for accelerating a 
 *  Car object.  Max Speed is 80, Min Speed is 0
 *****************************************************************/
int Car::accelerate(int)
{

   if (speed < 80)  // "80" represents max speed
   {
      Car::setSpeed(speed + 10);
      return speed;
   }
   else
   {
      cout << "Slow Down.  You've reached max speed!" << endl;
   }
}

/******************************************************************
 *                    Car::brake
 *
 *  This method provides the framework for decelerating a 
 *  Car object.  Max Speed is 80, Min Speed is 0
 *****************************************************************/
int Car::brake(int)
{
  
   if (speed >= 10)  // "0" represent min speed
   {
      Car::setSpeed(speed - 10);
      return speed;
   }
   else
   {
      cout << "You're stopped.  Speed up!" << endl;
   }
}

int getChoice();  //Function prototype
void printMenu(); //Function prototype

/***************************************************************************************
 *                       main
 ************************************************************************************/

int main()
{

   int user_speed = 0;
   int  user_year = 0;
   string user_make; 

   Car pinto;  // Create Car object
   // User Welcome
   cout << "Let's set up your Car!" << endl << endl;

   // Get and Set info about the "make" of the car
   cout << "Please Enter the 'Make' of your car: ";
   cin >> user_make;
   pinto.setMake(user_make);

   // Get and Set info about the "year" the car was made
   cout << "Please Enter the 'Year' your car was made: ";
   cin >> user_year;
   pinto.setYear(user_year);

   // Review of info entered
   cout << endl;
   cout << "Your Car: " << user_year << " " << user_make;
   cout << endl;
   cout << "Let's Make This Baby Roll!!!" << endl;
   cout << "****************************" << endl;
   
   printMenu(); //Display Menu of Options  
   
   int choice;  // Holds menu selection   
   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function

      if (choice != 3)
      {
         if (choice == 1)
         {
            pinto.accelerate(user_speed);
            cout << "Current Speed: " << pinto.getSpeed() << endl;
            cout << endl << endl;
            printMenu();
         }
         else if ( choice == 2)
         {
            pinto.brake(user_speed);
            cout << "Current Speed: " << pinto.getSpeed() << endl;
            cout << endl << endl;
            printMenu();
         }
      }
   } while (choice !=3);

   
   
   return 0;
}
/*****************************************************************************
 *                           getChoice
 *
 * This function validates the User Selection when navigating the menu.
 ****************************************************************************/
// Menu Input Validation
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 3)
   {
      cout << "The only valid choices are 1-3." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
/*************************************************************************
 *                    printMenu
 *
 * When called this function displays a Menu of possible User selctions.
 ************************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING OPTIONS" << endl;
   cout << "1: Accelerate " << endl;
   cout << "2: Brake" << endl;
   cout << "3: Quit the program" << endl;
   cout << endl;
}   
