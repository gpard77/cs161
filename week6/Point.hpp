/********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 2/7/15
 *
 * Description: Header File for Point.cpp
 *******************************************************/

#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
using namespace std;

// Defines the interface for the Point Class
class Point
{
private:
   double xCoord;
   double yCoord;
public:
   Point();
   Point(double, double);
   void setXCoord(double);
   double getXCoord() const;
   void setYCoord(double);
   double getYCoord() const;
   double distanceTo(const Point &pointIn);
};
#endif 
