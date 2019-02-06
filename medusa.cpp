/***************************************************
 * program name: medusa.cpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: impilementation file for class
 * Medusa.
****************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include "character.hpp"
#include "medusa.hpp"

using namespace std;

/********************************
 * Default Constructor
*******************************/
Medusa::Medusa()
{
   this->type = "Medusa";
   this->armor = 3;
   this->strengthPoints = 8;
   this->characteristic = "Scrawny lady with snakes for hair which helps her during combat. Just don't look at her!";
}

/*******************************
 * attackOpponent()
 * Attack function for Medusa
*******************************/
int Medusa::attackOpponent()
{
   int a = ((rand() % 6) +1); //die 1
   int b = ((rand() % 6) + 1); //die 2
   int total = a + b;
   cout << "The attacker's first roll is a " << a << "!" << endl;
   cout << "The attacker's second roll is a " << b << "!" << endl;
   cout << "The attacker's total roll is " << total << "!" << endl;
   setAttack(total);
   if (total == 12) //special ability
   {
      cout << "Medusa used Glare. You are dead." << endl;
      return 100;
   }
   else
   {
      return total;
   }
}

/********************************
 * defend(): Medusa defense
*********************************/
int Medusa::defend()
{
   int d = ((rand() % 6) + 1); //die 1
   cout << "The defender rolls a " << d << "!" << endl;
   d += getArmor();
   setDefense(d);
   return d;
} 

/*****************************
 * Mutators
***************************/
void Medusa::setAttack(int a)
{
   this->attack = a;
}

void Medusa::setDefense(int d)
{
   this->defense = d;
}

void Medusa::setStrengthPoints(int sp)
{
   this->strengthPoints = sp;
}

int Medusa::getAttack()
{
   return attack;
}

int Medusa::getDefense()
{
   return defense;
}

int Medusa::getStrengthPoints()
{
   return strengthPoints;
}

int Medusa::getArmor()
{
   return armor;
}

string Medusa::getType()
{
   return type;
}

string Medusa::getCharacteristic()
{
   return characteristic;
}
