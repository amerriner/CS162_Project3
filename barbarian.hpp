/***********************************
 * program name: barbarian.hpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: header file for 
 * child class barbarian.
************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "character.hpp"

using namespace std;

class Barbarian : public Character
{
   public: 
      Barbarian();
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
