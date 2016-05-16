/************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/24/15
 *
 * Description: This program allows a User to specify the 
 *   radius of Sphere.  From that a Sphere object is 
 *   created and information about the Sphere is displayed
 *************************************************************/
#include <iostream>
#include "Sphere.hpp"
using namespace std;


void printSphereInfo(Sphere *); // Function prototype

int main()
{
   Sphere user_sphere; // create Sphere object
   double user_radius;

   // User Welcome
   cout << endl;
   cout << "****************SPHERE DATA****************" << endl;
   cout << endl;
   cout << "This program prompts you to input" << endl;
   cout << "information concering a Sphere's radius." << endl;
   cout << "It then dispalys the Volume of your Sphere." << endl;
   cout << "-------------------------------------------" << endl;
   cout << endl;

   // Prompt User for Radius
   cout << "Please Enter a Value for the Radius: ";
   cin >> user_radius;
   // Set the radius for the Sphere
   user_sphere.setRadius(user_radius);

   // Call Function to calculate and
   // Display info about the Sphere
   cout << endl;
   printSphereInfo(&user_sphere); // Pass the Address of the Sphere Object
   cout << endl;



   return 0;
}

/*****************************************************************
 *                     printSphereInfo
 *
 * This function displays the radius and Volume of the Sphere
 * the parameter points to...
 ******************************************************************/
void printSphereInfo(Sphere *sphere_ptr)
{
   double showRadius = sphere_ptr->getRadius(); // Pointer object accessing Class method
   cout << "The Radius of the Sphere is: " << showRadius;
   cout << endl;
   cout << "-----------------------------------" << endl;
   double showVolume = sphere_ptr->getVolume(); // Pointer object accessing Class method
   cout << "The Volume of the Sphere is: " << showVolume;
   cout << endl;
}
