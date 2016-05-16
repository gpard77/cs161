/*****************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: This program allows a user to add items to their
 *  shopping cart.  It will prompt the user for information about
 *  each item and when the user is finished adding items, it will
 *  compute the final cost.
 ****************************************************************/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "ShoppingCart.hpp"
using namespace std;


/*******************************************************************
 *                       addItem
 *   
 * This method allows the user to add an item to their cart
 *******************************************************************/
void ShoppingCart::addItem(Item tempItem)
{
    cart.push_back(tempItem);
}

/******************************************************************
 *                       listContents
 *
 * This method allows the user to view all of the items in their
 * cart.
 ******************************************************************/
void ShoppingCart::listContents()
{
   for (int i = 0; i < cart.size(); i++)
   {
      cout << "Item: " << cart[i].getName() << endl;
      cout << "Price: " << cart[i].getPrice() << endl;
      cout << "Quantity: " << cart[i].getQuantity() << endl;
   }
}

/****************************************************************
 *                   totalPrice
 *
 * This method returns the total price of items in the User's
 * shopping cart.
 ****************************************************************/
double ShoppingCart::totalPrice()
{
   //int contentsIn = cart.size();
   double cartTotal = 0;

   for (int i = 0; i < cart.size(); i++)
   {
      cartTotal += (cart[i].getPrice() * cart[i].getQuantity());
   }
   return cartTotal;
   //cout << "Total Price for Items in Cart: " << cartTotal << endl;
   cout << endl;
}





void printMenu();
int getChoice();

/******************************************************************
 *                          main
 *******************************************************************/
int main()
{
   ShoppingCart user_cart; // Create Shopping Cart object
  
   int choice = 0; //Menu variable
   string nameIn;
   int quantityIn;
   double priceIn;

   // User Welcome
   cout << endl;
   cout << "************************" << endl;
   cout << "     SHOPPING CART      " << endl;
   cout << "************************" << endl;
   cout << endl;
   // Display Menu of Options
   printMenu();

   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function
      if (choice != 4)
      {
         // Allows user to Add items to cart
         if (choice == 1)
         {
            Item tempItem;
            cout << "Name of Item: ";
            cin >> nameIn;
            cout << "Price of Item: ";
            cin >> priceIn;
            cout << "Quantity of Item: ";
            cin >> quantityIn;
            // Set Values of New Item
            tempItem.setName(nameIn);
            tempItem.setPrice(priceIn);
            tempItem.setQuantity(quantityIn);
            // Push Item into Shopping Cart (vector)
            user_cart.addItem(tempItem);
            cout << endl;
            printMenu();
         }
         // List the contents of the cart
         else if (choice == 2)
         {
            user_cart.listContents();
            cout << endl;
            printMenu();
         }
         // Calculate total cost for items in the cart
         else if (choice == 3)
         {
            user_cart.totalPrice();
            cout << endl;
            printMenu();
         }
      }
   } while (choice !=4);  // Quit the program

   return 0;
}
/************************************************************************
 *                          printMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING OPTIONS:" << endl;
   cout << "1: Add New Item" << endl;
   cout << "2: List Contents in Cart" << endl;
   cout << "3: Calculate Total Price of Cart" << endl;
   cout << "4: Quit the program" << endl;
   cout << endl;
}   

/************************************************************************
 *                      getChoice
 *
 *  This function validates the user's menu selection
 ************************************************************************/
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
