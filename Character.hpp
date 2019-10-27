/*******************************
 * *Description: Character Class declaration file.
 *******************************/

#ifndef DOERFLEA_CHARACTER_HPP
#define DOERFLEA_CHARACTER_HPP

#include<ctime>
#include<iostream>
#include<string>

class Character
{
   protected:
      std::string name;
      int strength;
      int armor;
   public:
      virtual ~Character()=0;
      void setStrength(int charStrength);
      int getStrength();
      int getArmor();
      std::string getName() {return name;}
      void setName(std::string charName) {name = charName;}
      virtual void attack(Character *foe) {};
      virtual void defense(int attack, std::string foe_name, bool glare) {};
};
#endif
