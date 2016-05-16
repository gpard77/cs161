/***************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/10/15
 *
 * Description: This program keeps track of parts needed for a
 *   factory production line.  It allows a user to specify 
 *   parts available and a choice to produce certain items.  
 *   It also prints a Parts Order.
 ****************************************************************/
#include <iostream>
#include "Supplies.hpp"
using namespace std;

// Implementation of Supplies.hpp prototypes

Supplies::Supplies()
{
   setNumThingamajigs(100);
   setNumWatchamacallits(70);
   setNumFramistats(50);
}

Supplies::Supplies(int thingamajigsIn, int watchamacallitsIn, int framistatsIn)
{
   setNumThingamajigs(thingamajigsIn);
   setNumWatchamacallits(watchamacallitsIn);
   setNumFramistats(framistatsIn);
}

void Supplies::setNumThingamajigs(int thingamajigsIn)
{
   thingamajigs = thingamajigsIn;
}

void Supplies::setNumWatchamacallits(int watchamacallitsIn)
{
   watchamacallits = watchamacallitsIn;
}

void Supplies::setNumFramistats(int framistatsIn)
{
   framistats = framistatsIn;
}

void Supplies::printPartsOrder()
{
   int order1 = 0, order2 = 0, order3 = 0;

   if (thingamajigs < 100 || watchamacallits < 70 || framistats < 50) // Fully Stocked Quantity
   {
      order1 = (100 - thingamajigs);
      order2 = (70 - watchamacallits);
      order3 = (50 - framistats); 

      cout << "*****PARTS ORDER***********************" << endl;
      cout << "Thingamajigs:        " << order1 << endl;
      cout << "Watchamacallits:     " << order2 << endl;
      cout << "Framistats:          " << order3 << endl;
      cout << "***************************************" << endl;
   }
   else
   {
      cout << "Fully Stocked" << endl;
   }
}
/************************************************************************************
 *                            Supplies::produceThing1
 *
 * This method reduces Supply categories by the number of parts needed to 
 * produce a Thing1
 ***********************************************************************************/
int Supplies::produceThing1(int job)
{
   for (int i = 0; i < job; i++)
   {
      Supplies::setNumThingamajigs(thingamajigs - 1);
      Supplies::setNumWatchamacallits(watchamacallits - 2);
      Supplies::setNumFramistats(framistats - 1);
   }
}
/************************************************************************************
 *                            Supplies::produceThing2
 *
 * This method reduces Supply categories by the number of parts needed to 
 * produce a Thing2
 ***********************************************************************************/
int Supplies::produceThing2(int job)
{
   for (int i = 0; i < job; i++)
   {
      Supplies::setNumThingamajigs(thingamajigs - 2);
      Supplies::setNumFramistats(framistats - 1);
   }
}
int getChoice(); // Function prototype
void printMenu(); // Function prototype

/********************************************************************************
 *                            main
 *******************************************************************************/
int main()
{
   int user_thing = 0;
   int user_what = 0; 
   int user_fram = 0;
   Supplies workOrder;  //Create Supplies object   

   cout << "***********************" << endl;
   cout << "    Inventory Count    " << endl;
   cout << "***********************" << endl;
   cout << endl;
   cout << "Enter Number in stock..." << endl;
   cout << "Thingamajigs: ";
   cin >> user_thing;
   workOrder.setNumThingamajigs(user_thing);
   cout << "Watchamacallits: ";
   cin >> user_what;
   workOrder.setNumWatchamacallits(user_what);
   cout << "Framistats: ";
   cin >> user_fram;
   workOrder.setNumFramistats(user_fram);
   cout << endl;
   
   printMenu(); // Display Menu of Options  

   int choice = 0; // Hold Menu Selection  
   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function
      if (choice != 4)
      {
         if (choice == 1)
         {
            int jobs = 0;
            cout << "How many Thing1(s) to make: ";
            cin >> jobs;
            workOrder.produceThing1(jobs);
            cout << endl << endl;
            printMenu();
         }
         else if (choice == 2)
         {
            int jobs = 0;
            cout << "How many Thing2(s) to make: ";
            cin >> jobs;
            workOrder.produceThing2(jobs);
            cout << endl << endl;
            printMenu();
         }
         else if (choice == 3)
         {
            workOrder.printPartsOrder();
            cout << endl << endl;
            printMenu();
         }
      }
   } while (choice !=4);



   return 0;
}

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
/************************************************************************
 *                          printMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "SELECT A PRODUCT TO PRODUCE" << endl;
   cout << "1: Thing1 " << endl;
   cout << "2: Thing2" << endl;
   cout << "3: Print Parts Order" << endl;
   cout << "4: Quit the program" << endl;
   cout << endl;
}   
