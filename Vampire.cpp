/**************************************
 * program name: Vampire.cpp
 * author: Ashley Merriner
 * date: 2/18/2018
 * description: implementation file
 * for class Vampire.
**************************************/

#include <iostream>
#include <cstdlib>
#include "vampire.hpp"
#include "character.hpp"
#include <string>

using namespace std;

/******************************
* Default Constructor *
****************************/
Vampire::Vampire()
{
   this->type = "Vampire";
   this->armor = 1;
   this->strengthPoints = 18;
   this->characteristic = "Suave, debonair, but vicious and surprisingly resilient.";
}
/************************
* attackOpponent() *
 Attack function for 
       Vampire
************************/
int Vampire::attackOpponent()
{
   int a = ((rand() % 12) + 1); //die roll
   cout << "The attacker rolls a " << a << "!" << endl;
   setAttack(a);
   return a;
}  
/****************************
*defend(): defends Vampire
***************************/
int Vampire::defend()
{
   int d = ((rand() % 6) + 1); //die roll
   d += getArmor();
   setDefense(d);
   if ((rand() % 2) == 1) //special ability
   {
      cout << "Vampire used Charm. No harm taken!" << endl;
      return 100;
   }
   else
   {
      cout << "The defender rolls a " << d << "!" << endl;
      return d;
   }
}
/*****************************
* Mutators*
*****************************/
void Vampire::setAttack(int a)
{
   this->attack = a;
}

void Vampire::setDefense(int d)
{
   this->defense = d;
}

void Vampire::setStrengthPoints(int sp)
{
   this->strengthPoints = sp;
}

int Vampire::getAttack()
{
   return attack;
}

int Vampire::getDefense()
{
   return defense;
}

int Vampire::getStrengthPoints()
{
   return strengthPoints;
}

int Vampire::getArmor()
{
   return armor;
}

string Vampire::getType()
{
   return type;
}

string Vampire::getCharacteristic()
{
   return characteristic;
}
