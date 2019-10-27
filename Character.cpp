/**********************************
 * *Program Author: Anneliese Doerfler
 * *Description: Character Class implementation file
 ***********************************/
#include "Character.hpp"
#include<string>

/**********************************
 * *Description: destructor
 **********************************/
Character::~Character() 
{
} 

/*********************************
 * *Function Name: setStrength
 * *Description: sets character strength points
 *********************************/
void Character::setStrength(int charStrength)
{
   strength = charStrength;
}
/*********************************
 * *Function Name: getStrength
 * *Description: returns character strength points
 *********************************/
int Character::getStrength()
{
   return strength;
}

/*********************************
 * *Function Name: getArmor
 * *Description: returns character armor
 *********************************/
int Character::getArmor()
{
   return armor;
}



