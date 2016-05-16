/****************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/23/15
 *
 * Description: This serves as the implementation
 *   of the Header file Sphere.hpp
 *****************************************************/
#include <iostream>
#include "Sphere.hpp"


// Default Constructor
Sphere::Sphere()
{
   setRadius(0.0);
}

// Constructor with parameters
Sphere::Sphere(double radiusIn)
{
   setRadius(radiusIn);
}

// Set method
void Sphere::setRadius(double radiusIn)
{
   radius = radiusIn;
}

//Get Method
double Sphere::getRadius()
{
   return radius;
}

/***************************************************************
 *                    getVolume
 *
 *  This method calculates the volume of a Sphere
 *  Defined: V = 4/3(PI)(r^3)
 ***************************************************************/
double Sphere::getVolume()
{
   double volume;
   double number;

   number = (4 * PI) / 3; 
   volume = number * pow(radius, 3);
   return volume;
}
   

