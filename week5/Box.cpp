/**********************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/4/15
 *
 * Description: This program prompts the user 
 *   for input regarding a box (height, length
 *   width).  It then calculates and displays
 *   the volume and surface area of the box.
 ***********************************************/
#include <iostream>
#include "Box.hpp"
using namespace std;


/**********************************************
 *                 Box::Box
 *
 * Default Constructor
 **********************************************/
Box::Box()
{
   setHeight(1);
   setWidth(1);
   setLength(1);
}

/**********************************************************
 *                 Box::Box
 *
 * Constructor with parameters
 *********************************************************/
Box::Box(double heightIn, double widthIn, double lengthIn)
{
   setHeight(heightIn);
   setWidth(widthIn);
   setLength(lengthIn);
}

/***********************************************
 *                Box::setHeight
 *
 * Sets the value for height 
 **********************************************/
void Box::setHeight(double heightIn)
{
    if (heightIn >= 0)
    {
       height = heightIn;
    }
    else
    {
       height = 0;
       cout << "Invalid entry: setting to 0." << endl;
    }
}

/**************************************************
 *                Box::setWidth
 *
 * Sets the value for width
 **************************************************/
void Box::setWidth(double widthIn)
{
   if (widthIn >= 0)
   {
      width = widthIn;
   }
   else
   {
      width = 0; 
      cout << "Invaid entry: setting to 0." << endl;
   }
}
/*****************************************************
 *                  Box::setLength
 *
 * Sets the value for length
 ******************************************************/
void Box::setLength(double lengthIn)
{
   if (lengthIn >= 0)
   {
      length = lengthIn;
   }
   else
   {
      length = 0;
      cout << "Invalid entry: setting to 0." << endl;
   }
}

/****************************************************
 *                   Box::getVolume
 *
 * With the set values, this gets Volume (l*w*h)
 *****************************************************/
double Box::getVolume()
{
   return length * width * height;
}

/*******************************************************
 *                  Box::getSurfaceArea
 *
 * With the set values, this gets Surface Area of the Box
 ********************************************************/
double Box::getSurfaceArea()
{
   return (2*(width*height)) + (2*(height*length)) + (2*(width*length));
}

/**************************************************************
 *                     main
 *************************************************************/
int main()
{
   double user_length, user_width, user_height;
   Box user_box; // Declare Box object

   // User Welcome
   cout << endl;
   cout << "****************************************" << endl;
   cout << "This program creates a box based " << endl;
   cout << "on the values you enter ----------  " << endl;
   cout << "Then it displays Volume and Surface Area " << endl;
   cout << "for that box." << endl;
   cout << "*****************************************" << endl;
   cout << endl;

   // Get input about the box from user and set
   cout << "Please enter length for the box: ";
   cin >> user_length;
   user_box.setLength(user_length);

   cout << "Please enter width for the box: ";
   cin >> user_width;
   user_box.setWidth(user_width);

   cout << "Please enter height for the box: ";
   cin >> user_height;
   user_box.setHeight(user_height);
   cout << endl;

   // Get, Compute, and Display Volume and Surface Area
   cout << "The volume of your box is " << user_box.getVolume() << endl;
   cout << "Surface Area for your box is ";
   cout << user_box.getSurfaceArea();
   cout << endl;
   
   return 0;
}
