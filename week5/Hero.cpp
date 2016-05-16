/****************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/4/15
 *
 * Description: This program follows a "Hero" who
 *   has a user specified amount of Stength, Speed,
 *   and Money.  Unfortunately, his destiny is only
 *   to walk about taking chucks of damage in user
 *   specified amounts until he is dead.  Let the
 *   toture begin!
 ****************************************************/
#include <iostream>
#include "Hero.hpp"
using namespace std;

/***************************************************
 *                  Hero::Hero
 *
 * Default Constructor
 ****************************************************/
Hero::Hero()
{
   setStrength(1);
   setHitPoints(1);
   setSpeed(1);
   setMoney(1);
}

/*****************************************************
 *                   Hero::Hero
 *
 * Constructor with parameters
 *****************************************************/
Hero::Hero(int strengthIn, int hitPointsIn, int speedIn, int moneyIn)
{
   setStrength(strengthIn);
   setHitPoints(hitPointsIn);
   setSpeed(speedIn);
   setMoney(moneyIn);
}

/*****************************************************
 *                  Hero::setStrength
 *
 * Sets the value for strength
 ****************************************************/
void Hero::setStrength(int strengthIn)
{
   strength = strengthIn;
}

/*********************************************************
 *                  Hero::getStrength
 *
 * Gets the value for strength
 ********************************************************/
int Hero::getStrength()
{
   return strength;
}

/********************************************************
 *                  Hero::setHitPoints
 *
 * Sets the value for hitPOints
 *******************************************************/
void Hero::setHitPoints(int hitPointsIn)
{
   hitPoints = hitPointsIn;
}

/*******************************************************
 *                   Hero::getHitPoints
 *
 * Gets the value for hitPoints
 ********************************************************/
int Hero::getHitPoints()
{
   return hitPoints;
}

/********************************************************
 *                    Hero::setSpeed
 *
 * Sets the value for speed
 ********************************************************/
void Hero::setSpeed(int speedIn)
{
   speed = speedIn;
}

/*********************************************************
 *                    Hero::getSpeed
 *
 * Gets the value for speed
 ********************************************************/
int Hero::getSpeed()
{
   return speed;
}

/********************************************************
 *                     Hero::setMoney
 *
 * Sets the value for money
 ********************************************************/
void Hero::setMoney(int moneyIn)
{
   money = moneyIn;
}

/***********************************************************
 *                     Hero::getMoney
 *
 * Gets the value for money
 ***********************************************************/
int Hero::getMoney()
{
   return money;
}

/*********************************************************
 *                    Hero::takeDamage
 *
 * Calculates the value sustained from taking Damage
 *********************************************************/
int Hero::takeDamage()
{
   bool isAlive = true;
   if ((strength - hitPoints) > 0)
   {
      strength -= hitPoints; //New strength level
      //cout << strength << endl;  TESTING
   }
   else
   {
      isAlive = false; // Muerto
      cout << endl;
      cout << "Flores para los muertos?" << endl;
      cout << "You did it...  He gone." << endl;
      strength = 0;
      return isAlive;
   }  
   
}

/************************************************************
 *                    main
 ***********************************************************/
int main()
{

   // Variables for Strength, Hit Points, Speed, Money
   int user_strength, user_hitPoints, user_speed, user_money;
   Hero preston; // Create a Hero object

   // User Welcome
   cout << endl;
   cout << "*****************************************" << endl;
   cout << " Welcome to: HERO                        " << endl;
   cout << "                                         " << endl;
   cout << " Give your Hero strength and then--as    " << endl;
   cout << " a vengeful God-- take it away in chunks " << endl;
   cout << " until your character is dead.           " << endl;
   cout << "  (it's completely normal--don't worry)  " << endl;
   cout << "*****************************************" << endl;
   cout << endl;
   cout << endl;
   // Prompt the user for Hero attributes and SET values
   cout << "How much strength would you like your Hero to have?" << endl;
   cout << "Please enter a positive number: ";
   cin >> user_strength;
   preston.setStrength(user_strength);

   cout << "Please enter speed points: ";
   cin >> user_speed;
   preston.setSpeed(user_speed);

   cout << "How much money should your Hero have?" << endl;
   cout << "Please enter whole dollar values: ";
   cin >> user_money;
   preston.setMoney(user_money);

   // Summary of Input at Start
   cout << endl;
   cout << "Here's the Tale of the Tape." << endl;
   cout << "****************************" << endl;
   cout << "STRENGTH:   " << preston.getStrength() << endl;
   cout << "SPEED:      " << preston.getSpeed() << endl;
   cout << "MONEY:      " << preston.getMoney() << endl;
   cout << "****************************" << endl;
 
   // First Damage Sequence
   cout << "Welp, Hero's out walking around..." << endl;
   cout << "Why don't we inflict some damage. " << endl;
   cout << "He's becoming far too complacent. " << endl;
   cout << endl;
   cout << "WHAM!  Hero's been struck!" << endl;
   cout << "Enter Hit Points: ";
   cin >> user_hitPoints;
   preston.setHitPoints(user_hitPoints);
  
   preston.takeDamage(); //Call funtion to check the Hero's vital signs
   
   
   // Continue hit/damage sequence until the Hero bites it.
   while (preston.getStrength() != 0)
   {
      cout << endl;
      cout << "** Merely a Flesh Wound! **" << endl << endl;
      cout << "Updated Tale of the Tape." << endl;
      cout << "****************************" << endl;
      cout << "STRENGTH:   " << preston.getStrength() << endl;
      cout << "SPEED:      " << preston.getSpeed() << endl;
      cout << "MONEY:      " << preston.getMoney() << endl;
      cout << "****************************" << endl;
      cout << endl;
      cout << "Strike again! " << endl;
      cout << "Enter Hit Points: ";
      cin >> user_hitPoints;
      preston.setHitPoints(user_hitPoints);
      preston.takeDamage();
   }
   cout << endl;

   return 0;
}
