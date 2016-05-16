/**************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/4/15
 *
 * Description: Header File for Box.cpp
 *************************************************/

#ifndef BOX_HPP
#define BOX_HPP
using namespace std;

class Box
{
private:
   double height;
   double width;
   double length;
public:
   Box();
   Box(double, double, double);
   void setHeight(double);
   void setWidth(double);
   void setLength(double);
   double getVolume();
   double getSurfaceArea();
};
#endif

