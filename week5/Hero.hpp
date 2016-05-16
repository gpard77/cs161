/****************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date 2/4/15
 *
 * Description: Header File for Hero.cpp
 *****************************************************/

#ifndef HERO_HPP
#define HERO_HPP
using namespace std;

class Hero
{
private:
   int strength;
   int hitPoints;
   int speed;
   int money;   
public:
   Hero();
   Hero(int, int, int, int);
   void setStrength(int);
   int getStrength();
   void setHitPoints(int);
   int getHitPoints();
   void setSpeed(int);
   int getSpeed();
   void setMoney(int);
   int getMoney();
   int takeDamage();

};
#endif
      
