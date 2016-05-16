/*********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/7/15
 *
 * Description: This is the implementation file for 
 *   Point.hpp.  It gathers information about a couple
 *   'X' and 'Y' coordinates and then calculates the
 *   distrance between them.
 **********************************************************/
#include <iostream>
#include <iomanip>
#include "Point.hpp"



using namespace std;

Point::Point()
{
   setXCoord(0);
   setYCoord(0);
}

Point::Point(double xCoordIn, double yCoordIn)
{
   setXCoord(xCoordIn);
   setYCoord(yCoordIn);
}

void Point::setXCoord(double xCoordIn)
{
   xCoord = xCoordIn;
}

double Point::getXCoord() const
{
   return xCoord;
}

void Point::setYCoord(double yCoordIn)
{
   yCoord = yCoordIn;
}

double Point::getYCoord() const
{
   return yCoord;
}

/*****************************************************************
 *              Point::distanceTo(const Point &pointIn)
 *
 * This method takes two sets of (X,Y) coordinates and uses
 * them to calculate the distance between two points
 ***************************************************************/
double Point::distanceTo(const Point &pointIn)
{
   double distance;
   cout << fixed << showpoint << setprecision(4); 
   distance = pow(pointIn.getXCoord() - Point::getXCoord(), 2);
   distance += pow(pointIn.getYCoord() - Point::getYCoord(),2);
   distance = sqrt(distance);
   cout << distance << endl;
}
