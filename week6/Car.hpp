/*************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/10/15
 *
 * Description: This is the Header File for Car.cpp
 ************************************************************/
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>
using namespace std;

// Defines the interface for the Car class
class Car
{
private:
   int year;
   string make;
   int speed;
public:
   Car();
   Car(int, string, int);
   void setYear(int);
   void setMake(string);
   void setSpeed(int);
   int getSpeed();
   int accelerate(int);
   int brake(int);
};
#endif
   

