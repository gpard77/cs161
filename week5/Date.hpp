/***************************************************
 *
 * Geoffrey Pard
 * CS 161-405
 * Date 1/31/15
 *
 * Description: Header file for the "Date" Program
 *
 *****************************************************/

#ifndef DATE_HPP
#define DATE_HPP

using namespace std;

// Defines the interface of the Date class

class Date
{
private:
   int day;
   int month;
   int year;
public:
   Date(int day, int month, int year); //Constructor 3 paramenters
   Date(); //Default constructor
   void setDay(int);
   void setMonth(int);
   void setYear(int);
   void print1();
   void print2();
   void print3();

};
#endif
