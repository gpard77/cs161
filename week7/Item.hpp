/*************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: This is the Header file for Item.cpp
 ************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

class Item
{
private:
   string name;
   double price;
   int quantity;
public:
   Item();
   Item(string, double, int);
   void setName(string);
   string getName();
   void setPrice(double);
   double getPrice();
   void setQuantity(int);
   int getQuantity();
};
#endif
