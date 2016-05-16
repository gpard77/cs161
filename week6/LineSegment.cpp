/*********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/7/15
 *
 * Description: This program includes the implementation
 *   for LineSegment.hpp.  It also calculates the length
 *   and slope of a line from information gathered about
 *   two points.
 *********************************************************/
#include <iostream>
#include <iomanip>
#include "LineSegment.hpp"




using namespace std;

// Implementation of LineSegment prototype

LineSegment::LineSegment()
{
   Point end1In, end2In;

   end1 = end1In;
   end2 = end2In;
}
LineSegment::LineSegment(Point end1In, Point end2In)
{
   setEnd1(end1In);
   setEnd2(end2In);
}

void LineSegment::setEnd1(Point end1In)
{
   end1 = end1In;
}

Point LineSegment::getEnd1()
{
   return end1;
}

void LineSegment::setEnd2(Point end2In)
{
   end2 = end2In;
}

Point LineSegment::getEnd2()
{
   return end2;
}

/************************************************************************
 *                     LineSegment::length()
 *
 * This method plugs in the end points for a Line Segment object
 * and uses the distance formula to calculate length
 ***********************************************************************/
double LineSegment::length()
{
   double length;

   length = end1.distanceTo(end2);
 
}

/*********************************************************************************
 *                         LineSegment::slope()
 *
 * This method retrieves two sets of coordinates in order to calculate
 * the slope of a line.
 *********************************************************************************/
double LineSegment::slope()
{
   double slope;

   // Get the X & Y coordinates for the Points; Calc. Slope
   // Slope = (y2 - y1) / (x2 - x1)
   slope = (LineSegment::end2.getYCoord() - LineSegment::end1.getYCoord());
   slope /= (LineSegment::end2.getXCoord() - LineSegment::end1.getXCoord());

   // Special Cases
   if ((LineSegment::end2.getYCoord() - LineSegment::end1.getYCoord())== (LineSegment::end2.getXCoord()        - LineSegment::end1.getXCoord())) // User gave same point
   {
      cout << "Not a Line Segment." << endl;
   }
   else if (slope == 0 || slope == -0) // Horizontal Line
   {
      slope = 0;
      cout << slope << endl;
   }
   else if (isinf(slope))
   {
      cout << "Undefined";  // Slope of a vertical line is undefined
   }
   else
   {
      cout << slope << endl;  // Everything else
   }   
}

/******************************************************************************
 *                           main
 *****************************************************************************/

int main()
{

   double user_x1 = 0;
   double user_x2 = 0;
   double user_y1 = 0;
   double user_y2 = 0;

   Point p1, p2;  // Create Point objects

   // User Welcome
   cout << "******************************************" << endl;
   cout << "Find the Length & Slope of a Line Segment." << endl;
   cout << "******************************************" << endl;
   cout << endl;
  

   // Get and Set Data for First Point
   cout << "Enter X for a point: "; 
   cin >> user_x1;
   p1.setXCoord(user_x1);
   cout << "Enter Y for a point: ";
   cin >> user_y1;
   p1.setYCoord(user_y1);
   cout << "Point 1: (" << user_x1 << "," << user_y1 << ")" << endl;
   cout << endl;

   // Get and Set Data for Second Point
   cout << "Enter X for the next point: "; 
   cin >> user_x2;
   p2.setXCoord(user_x2);
   cout << "Enter Y for the next point: ";
   cin >> user_y2;
   p2.setYCoord(user_y2);
   cout << "Point 2: (" << user_x2 << "," << user_y2 << ")" << endl;
   cout << endl;

   LineSegment user_line;  // Create Line Segment Object

   // Set the Line's Endpoints
   user_line.setEnd1(p1);
   user_line.setEnd2(p2);

   // Call the Method to Calculate Length
   cout << "Length: ";
   user_line.length();
   
   // Call the Method to Calculate Slope
   cout << "Slope: ";
   user_line.slope();
   cout << endl;

   return 0;
}
