/**********************************
 * program name: blueMen.hpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: header file for 
 * class blueMen
***********************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "character.hpp"

using namespace std;

class BlueMen : public Character
{
   public:
      BlueMen();
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
