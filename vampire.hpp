/*****************************************
 * program name: vampire.hpp
 * author: Ashley Merriner
 * date: 2/18/2018
 * description: header file for child 
 * class Vampire.
******************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"

using namespace std;

class Vampire : public Character
{
   public: 
      Vampire();
      int attackOpponent();
      int defend();
      void setAttack(int);
      void setDefense(int);
      void setStrengthPoints(int);
      int getAttack();
      int getDefense();
      int getStrengthPoints();
      string getType();
      int getArmor();
      string getCharacteristic();
};
#endif
