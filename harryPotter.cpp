/************************************
 * program name: harryPotter.cpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: implementation 
 * file for class HarryPotter
*************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include "character.hpp"
#include "harryPotter.hpp"

using namespace std;

/******************************
 * Default Constructor
*****************************/
HarryPotter::HarryPotter()
{
   this->type = "Harry Potter";
   this->armor = 0;
   this->death = 1;
   this->strengthPoints = 10;
   this->characteristic = "Harry Potter is a wizard.";
}

/***********************************
 * attackOopponent() 
 * Attack function for Harry Potter
************************************/
int HarryPotter::attackOpponent()
{
   int a = ((rand() % 6) + 1); //roll 1
   int b = ((rand() %6) + 1); //roll 2
   int total = a + b;
   cout << "The attacker's first roll is a " << a << "!" << endl;
   cout << "The attacker's second roll is a " << b << "!" << endl;
   cout << "The attacker's total roll is " << total << "!" << endl;
   setAttack(total);
   return total;
}

/*******************************
 * defend(): Defense function
 * with special ability
*******************************/
int HarryPotter::defend()
{
   int dead = getDeath();
   int sp = getStrengthPoints();
   if (sp <= 0 && dead == 1) //harry gets to come back to life
   {
      cout << "Harry Potter uses Hogwarts and comes back to life!" << endl;
      dead--;
      setDeath(dead);
      return 100;
   }
   else //normal dense
   {
      int d = ((rand() % 6) + 1);
      int e = ((rand() % 6) + 1);
      int total = d + e;
      cout << "The defender's first roll is a " << d << "!" << endl;
      cout << "The defender's second roll is a " << e << "!" << endl;
      cout << "The defender's total roll is " << total << "!" << endl;
      setDefense(total);
      return total;
   }
}

/****************************
 * Mutators
 **************************/
void HarryPotter::setDeath(int d)
{
   this->death = d;
}
 
void HarryPotter::setAttack(int a)
{
   this->attack = a;
}

void HarryPotter::setDefense(int d)
{
   this->defense = d;
}

void HarryPotter::setStrengthPoints(int sp)
{
   this->strengthPoints = sp;
}

int HarryPotter::getDeath()
{
   return death;
}

int HarryPotter::getAttack()
{
   return attack;
}

int HarryPotter::getDefense()
{
   return defense;
}

int HarryPotter::getStrengthPoints()
{
   return strengthPoints;
}

int HarryPotter::getArmor()
{
   return armor;
}

string HarryPotter::getType()
{
   return type;
} 

string HarryPotter::getCharacteristic()
{
   return characteristic;
}
