/************************************************
 * program name: playGame.cpp
 * author: Ashley Merriner
 * date: 2.18.2018
 * description: implements character classes
 * and plays game.
*************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include "character.hpp"
#include "harryPotter.hpp"
#include "medusa.hpp"
#include "blueMen.hpp"
#include "barbarian.hpp"
#include "vampire.hpp"

using namespace std;

int main()
{
   while(1)
   {
      Character* play1; //first player
      Character* play2; //second player
      int num1, num2;
      //menu
      cout << "Which character would Player 1 like to be? Choose from below:\n";
      cout << "1. Vampire" << endl;
      cout << "2. Barbarian" << endl;
      cout << "3. Blue Men" << endl;
      cout << "4. Medusa" << endl;
      cout << "5. Harry Potter" << endl; 
      cin >> num1;
      cout << "\n";

      if (num1 == 1) //allocate which class each pointer is
      {
         play1 = new Vampire();
      }
      else if (num1 == 2)
      {
         play1 = new Barbarian();
      }
      else if (num1 == 3)
      {
         play1 = new BlueMen();
      }
      else if (num1 == 4)
      {
         play1 = new Medusa();
      }
      else if (num1 == 5)
      {
         play1 = new HarryPotter();
      }


      cout << "Which character would Player 2 like to be? Choose from below:\n";
      cout << "1. Vampire" << endl;
      cout << "2. Barbarian" << endl;
      cout << "3. Blue Men" << endl;
      cout << "4. Medusa" << endl;
      cout << "5. Harry Potter" << endl;
      cin >> num2;
      cout << "\n";

      if (num2 == 1)
      {
         play2 = new Vampire();
      }
      else if (num2 == 2)
      {
         play2 = new Barbarian();
      }
      else if (num2 == 3)
      {
         play2 = new BlueMen();
      }
      else if (num2 == 4)
      {
         play2 = new Medusa();
      }
      else if (num2 == 5)
      {
         play2 = new HarryPotter();
      }

      cout << "Player 1 has chosen " << play1->getType() << endl;
      cout << play1->getCharacteristic() << "\n" << endl; //show character1
      cout << "Player 2 has chosen " << play2->getType() << endl;
      cout << play2->getCharacteristic() << "\n" << endl;//show character2
      cout << "\n \n";
      //loop for game play
      while (play1->getStrengthPoints() > 0 && play2->getStrengthPoints() > 0)
      {
         int strengthP1 = play1->getStrengthPoints();
         int strengthP2 = play2->getStrengthPoints();
         int damage = 1;
         //show stats
         cout << "Player 1 (" << play1->getType() << ") has "; 
         cout << strengthP1 << " hit points." << endl;
         cout << "Player 2 (" << play2->getType() << ") has "; 
         cout << strengthP2 << " hit points." << endl;
         cout << "Player 2 armor points: " << play2->getArmor() << endl;
         cout << "\n \n";


         int attackP1 = play1->attackOpponent();
         if (attackP1 == 100) //medusa's glare
         {
            play2->setStrengthPoints(0);
            strengthP2 = play2->getStrengthPoints();
         }
         else
         {
            cout << "Player 1 attacks for " << attackP1 << " points!" << endl;
         }

         int defendP2 = play2->defend();
         damage = attackP1 - defendP2;
         if (defendP2 == 100) //vampire's charm
         {
            cout << "Player 2 attacks next!" << endl;
            cout << "\n \n";
         }
         else if (damage > 0) //normal
         {
            int newSP2 = strengthP2 - damage;
            cout << "Player 2 defends for " << defendP2 << " points!" << endl;
            cout << "Total damage: " << damage << endl;
            cout << "Player 2 now has " << newSP2 << " hit points." << endl;
            if (newSP2 <= 0)
            {
               cout << "Player 2 has died!!!" << endl;
               if (play2->getType() == "Harry Potter")
               {
                  play2->setStrengthPoints(newSP2);
                  defendP2 = play2->defend();
                  if (defendP2 == 100) //hogwarts
                  {
                     cout << "Player 2 will now attack!" << endl;
                     newSP2 = 20;
                  }
                  else //end game
                  {
                     cout << "PLAYER 1 WINS!!!!!!!!!!" << endl;
                     break;
                  }
                  
               }
               else
               {
                  cout << "PLAYER 1 WINS!!!!!!!!!!!!" << endl;
                  break; //end game
               }
            }
            cout << "Player 2 strikes next!" << endl;
            cout << "\n \n";
            play2->setStrengthPoints(newSP2);
         }
         else //normal defense
         {
            cout << "Player 2 defends for " << defendP2 << " points!" << endl;
            cout << "No damage!" << endl;
            cout << "Player 2 strikes next!" << endl;
            cout << "\n \n";
         }
         
         //same as first round with updated strengthPoints
         cout << "Player 2 (" << play2->getType() << ") has ";
         cout << play2->getStrengthPoints() << " hit points!" << endl;
         cout << "Player 1 (" << play1->getType() << ") has ";
         cout << play1->getStrengthPoints() << " hit points!" << endl;
         cout << "Player 1 armor points: " << play1->getArmor() << endl;
         cout << "\n \n";
         int damage2 = 1;
         int attackP2 = play2->attackOpponent();
         if (attackP2 == 100)
         {
            play1->setStrengthPoints(0);
            strengthP1 = play1->getStrengthPoints();
         }
         else
         {
            cout << "Player 2 attacks for "<< attackP2 << " points!" << endl;
         }

         int defendP1 = play1->defend();
         damage2 = attackP2 - defendP1;
         if (defendP1 == 100)
         {
            cout << "Player 1 will attack next!" << endl;
            cout << "\n \n";
         }
         else if (damage2 > 0)
         {
            int newSP1 = strengthP1 - damage2;
            cout << "Player 1 defends for " << defendP1 << " points!" << endl;
            cout << "Player 1 now has " << newSP1 << " hit points." << endl;
            if (newSP1 <= 0)
            {
               cout << "Player 1 has died!" << endl;
               if (play1->getType() == "Harry Potter")
               {
                  play1->setStrengthPoints(newSP1);
                  defendP1 = play1->defend();
                  if (defendP1 == 100)
                  {
                     cout << "Player 1 will now attack!" << endl;
                     newSP1 = 20;
                  }
                  else
                  {
                     cout << "PLAYER 2 WINS!!!!!!!!!!!" << endl;
                     break;
                  }
               }
               else
               {
                  cout << "PLAYER 2 WINS!!!!!" << endl;
                  break;
               }
            }

            cout << "Back to player 1!" << endl;
            cout << "\n \n";
            play1->setStrengthPoints(newSP1);
         }
         else
         {
            cout << "Player 1 defends for " << defendP1 << " points!" << endl;
            cout << "No damage!" << endl;
            cout << "Back to player 1!" << endl;
            cout << "\n \n";
         }
      }
      int ans;
      cout << "Would you like to play again? 1 for yes, 2 for no." << endl;
      cin >> ans;
      if (ans == 1) //replay
      {
         cout << "Let's Play! \n" << endl;
         continue;
      }
      else //quit
      {
         return 0;
      }
   }
   return 0;
}
