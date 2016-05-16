/***********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: Implementation for Item.hpp
 ***********************************************************/
#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;


Item::Item()
{
   setName("");
   setPrice(0.0);
   setQuantity(0);
}

Item::Item(string nameIn, double priceIn, int quantityIn)
{
   setName(nameIn);
   setPrice(priceIn);
   setQuantity(quantityIn);
}

void Item::setName(string nameIn)
{
   name = nameIn;
}

string Item::getName()
{
   return name;
}

void Item::setPrice(double priceIn)
{
   price = priceIn;
}

double Item::getPrice()
{
   return price;
}

void Item::setQuantity(int quantityIn)
{
   quantity = quantityIn;
}

int Item::getQuantity()
{
   return quantity;
}

