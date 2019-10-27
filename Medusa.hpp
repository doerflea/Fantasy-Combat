/****************************
 * *Author Name: Anneliese Doerfler
 * *Date: 8/4/19
 * *Description: Medusa Class specification file. Inherits from Class Character.
 ****************************/
#ifndef DOERFLER_MEDUSA_HPP
#define DOERFLER_MEDUSA_HPP

#include "Character.hpp"
#include<string>
#include<iostream>

class Medusa: public Character
{
   public:
      Medusa();
      virtual void attack(Character *opponent);
      virtual void defense(int attack, std::string foe_name, bool glare);
      virtual ~Medusa();
};
#endif
