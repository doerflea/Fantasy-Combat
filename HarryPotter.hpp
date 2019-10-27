/****************************
 * *Author Name: Anneliese Doerfler
 * *Date: 8/4/19
 * *Description: HarryPotter Class specification file. Inherits from Class Character.
 ****************************/
#ifndef DOERFLER_HARRYPOTTER_HPP
#define DOERFLER_HARRYPOTTER_HPP

#include "Character.hpp"
#include<string>
#include<iostream>

class HarryPotter: public Character
{
   private:
      int lives;
   public:
      HarryPotter();
      virtual void attack(Character *opponent);
      virtual void defense(int attack, std::string foe_name, bool glare);
      virtual ~HarryPotter();
};
#endif
