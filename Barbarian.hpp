/****************************
 * *Author Name: Anneliese Doerfler
 * *Date: 8/4/19
 * *Description: Barbarian Class specification file. Inherits from Class Character.
 ****************************/
#ifndef DOERFLER_BARBARIAN_HPP
#define DOERFLER_BARBARIAN_HPP

#include "Character.hpp"
#include<string>
#include<iostream>

class Barbarian: public Character
{
   public:
      Barbarian();
      virtual void attack(Character *opponent);
      virtual void defense(int attack, std::string foe_name, bool glare);
      virtual ~Barbarian();
};
#endif

