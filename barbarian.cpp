/***************************************
 * program name: barbarian.cpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: implementation file
 * for class Barbarian.
***************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include "barbarian.hpp"
#include "character.hpp"

using namespace std;
/***********************
 * Default Constructor
************************/
Barbarian::Barbarian()
{
   this->type = "Barbarian";
   this->armor = 0;
   this->strengthPoints = 12;
   this->characteristic = "Think Conan or Hercules from the movies. Big sword, big muscles, bare torso.";
}
/********************************
 * attackOpponent() 
 Attack function for Barbarian
********************************/
int Barbarian::attackOpponent()
{
   int a = ((rand() % 6) + 1); //die 1
   int b = ((rand() % 6) + 1); //die 2
   int total = a + b;
   cout << "The attacker's first roll is a " << a << "!" << endl;
   cout << "The attacker's second roll is a " << b << "!" << endl;
   cout << "Total attack is " << total << "!" << endl;
   setAttack(total);
   return total;
}
/**************************************
 * Defend() *
 Defense for Barbarian
***********************************/
int Barbarian::defend()
{
   int d = ((rand() % 6) + 1);
   int e = ((rand() % 6) + 1);
   int total = d + e;
   cout << "The defender's first roll is a " << d << "!" << endl;
   cout << "The defender's second roll is a " << e << "!" << endl;
   cout << "Total defensive roll is " << total << "!" << endl;
   setDefense(total);
   return total;
}
/***********************
 * Mutators *
**********************/
void Barbarian::setAttack(int a)
{
   this->attack = a;
}

void Barbarian::setDefense(int d)
{
   this->defense = d;
}

void Barbarian::setStrengthPoints(int sp)
{
   this->strengthPoints = sp;
}

int Barbarian::getAttack()
{
   return attack;
}

int Barbarian::getDefense()
{
   return defense;
}

int Barbarian::getStrengthPoints()
{
   return strengthPoints;
}

int Barbarian::getArmor()
{
   return armor;
}

string Barbarian::getType()
{
   return type;
}

string Barbarian::getCharacteristic()
{
   return characteristic;
}
