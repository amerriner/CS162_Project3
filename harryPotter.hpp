/**********************************************
 * program name: harryPotter.hpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: header file for class
 * Harry Potter.
**********************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "character.hpp"

using namespace std;

class HarryPotter : public Character
{
   private:
      int death;
   public:
      HarryPotter();
      int attackOpponent();
      int defend();
      void setDeath(int);
      void setAttack(int);
      void setDefense(int);
      void setStrengthPoints(int);
      int getDeath();
      int getAttack();
      int getDefense();
      int getStrengthPoints();
      int getArmor();
      string getType();
      string getCharacteristic();
};
#endif
