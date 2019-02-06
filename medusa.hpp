/***************************************
 * program name: medusa.hpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: header file for class
 * Medusa.
*****************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "character.hpp"

using namespace std;

class Medusa : public Character
{
   public:
      Medusa();
      int attackOpponent();
      int defend();
      void setAttack(int);
      void setDefense(int);
      void setStrengthPoints(int);
      int getAttack();
      int getDefense();
      int getStrengthPoints();
      int getArmor();
      string getType();
      string getCharacteristic();
};
#endif
