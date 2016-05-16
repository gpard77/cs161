/*****************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/23/15
 *
 * Description: This serves as the Header file for
 *    Sphere
 *****************************************************/
#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <cmath>
#define PI 3.14159
using namespace std;

// Interface for the Sphere Class

class Sphere
{
private:
   double radius;

public:
   Sphere();
   Sphere(double);
   void setRadius(double);
   double getRadius();
   double getVolume();
};
#endif
