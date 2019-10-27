/****************************
 * *Author Name: Anneliese Doerfler
 * *Date: 8/4/19
 * *Description: BlueMen Class specification file. Inherits from Class Character.
 ****************************/
#ifndef DOERFLER_BLUEMEN_HPP
#define DOERFLER_BLUEMEN_HPP

#include "Character.hpp"
#include<string>
#include<iostream>

class BlueMen: public Character
{
   public:
      BlueMen();
      virtual void attack(Character *opponent);
      virtual void defense(int attack, std::string foe_name,bool glare);
      virtual ~BlueMen();
};
#endif
