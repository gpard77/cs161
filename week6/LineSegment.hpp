/*****************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/7/15
 *
 * Description: Header File for LineSegment.cpp
 *****************************************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

using namespace std;

// Defines the interface of the LineSegment class
class LineSegment
{
private:
   Point end1;
   Point end2;
public:
   LineSegment();
   LineSegment(Point, Point);
   void setEnd1(Point);
   void setEnd2(Point);
   Point getEnd1();
   Point getEnd2();
   double length();
   double slope();
};
#endif 
