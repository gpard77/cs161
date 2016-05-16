/***************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/10/15
 *
 * Description: This is the Header File for Supplies.cpp
 ****************************************************************/
#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP

#include <iostream>


class Supplies
{
private:
   int thingamajigs;
   int watchamacallits;
   int framistats;
public:
   Supplies();
   Supplies(int, int, int);
   void setNumThingamajigs(int);
   void setNumWatchamacallits(int); 
   void setNumFramistats(int);
   void printPartsOrder();
   int produceThing1(int);
   int produceThing2(int);
};
#endif
