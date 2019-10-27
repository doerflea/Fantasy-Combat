/****************************
 * *Author Name: Anneliese Doerfler
 * *Date: 8/4/19
 * *Description: Vampire Class specification file. Inherits from Class Character.
 ****************************/
#ifndef DOERFLER_VAMPIRE_HPP
#define DOERFLER_VAMPIRE_HPP

#include "Character.hpp"
#include<string>
#include<iostream>

class Vampire: public Character
{
   public:
      Vampire();
      virtual void attack(Character *opponent);
      virtual void defense(int attack, std::string foe_name, bool glare);
      virtual ~Vampire();
};
#endif
   
