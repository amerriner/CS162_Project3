/******************************************
 * program name: character.hpp
 * author: Ashley Merirner
 * date: 2/18/2018
 * description: header file for parent
 * class Character.
******************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

using namespace std;
class Character
{
   protected:
      string type;
      int attack;
      int defense;
      int armor;
      int strengthPoints;
      string characteristic;
      
   public:
      Character();
      virtual int attackOpponent() = 0;
      virtual int defend() = 0;
      virtual string getType() = 0;
      virtual int getArmor() = 0;
      virtual int getStrengthPoints() = 0;
      virtual string getCharacteristic() = 0;
      virtual void setStrengthPoints(int) = 0;
      virtual void setDefense(int) = 0;
      virtual void setAttack(int) = 0;
};
#endif
