/*****************************************
 * program name: blueMen.cpp
 * author: Ashley Merriner
 * date: 2.18/2018
 * description: implementation file for
 * class blueMen.
*******************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include "blueMen.hpp"
#include "character.hpp"

using namespace std;
/**********************************
 * BlueMen Constructor
**********************************/
BlueMen::BlueMen()
{
   this->type = "Blue Men";
   this->armor = 3;
   this->strengthPoints = 12;
   this->characteristic = "Small, 6 inches tall, but fast and tough. They are hard to hit so they can take some damage. They can also do a LOT of damage when they crawl inside enemies' armor or clothing.";
}
/**********************************
 * attackOpponent()
 * Blue Men attack function
***********************************/
int BlueMen::attackOpponent()
{
   int a = ((rand() % 10) + 1); //die 1
   int b = ((rand() % 10) + 1); //die 2
   int total = a + b;
   cout << "The attacker's first roll is a " << a << "!" << endl;
   cout << "The attacker's second roll is a " << b << "!" << endl;
   cout << "Total of both rolls is a " << total << "!" << endl;
   setAttack(total);
   return total;
}

/***************************************
 * defend(): Blue Men defense
****************************************/
int BlueMen::defend()
{
   int sp = getStrengthPoints();
   int d, e, f, total;
   if (sp >= 9) //roll 3 die
   {
     d = ((rand() % 6) + 1);
     e = ((rand() % 6) + 1);
     f = ((rand() % 6) + 1);
     total = d + e + f;
     cout << "The defender's first roll is a " << d << "!" << endl;
     cout << "The defender's second roll is a " << e << "!" << endl;
     cout << "The defender's third roll is a " << f << "!" << endl;
   }
   else if (sp >= 5) //roll 2 die
   {
      d = ((rand() % 6) + 1);
      e = ((rand() % 6) + 1);
      total = d + e;
      cout << "The defender's first roll is a " << d << "!" << endl;
      cout << "The defender's second roll is a " << e << "!" << endl;
   }
   else
   {
      d = ((rand() % 6) + 1); //roll 1
      total = d;
      cout << "The defender rolls a " << d << "!" << endl;
   }
   cout << "The total of the defensive roll(s) is " << total << "!" << endl;
   total += getArmor();
   setDefense(total);
   return total;
}

/******************************
 * Mutators
******************************/
void BlueMen::setAttack(int a)
{
   this->attack = a;
}

void BlueMen::setDefense(int d)
{
   this->defense = d;
}

void BlueMen::setStrengthPoints(int sp)
{
   this->strengthPoints = sp;
}

int BlueMen::getAttack()
{
   return attack;
}

int BlueMen::getDefense()
{
   return defense;
}

int BlueMen::getStrengthPoints()
{
   return strengthPoints;
}

int BlueMen::getArmor()
{
   return armor;
}

string BlueMen::getType()
{
   return type;
}

string BlueMen::getCharacteristic()
{
   return characteristic;
}
