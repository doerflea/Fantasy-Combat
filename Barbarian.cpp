/**************************************
 * *Description: Class Barbarian implementation file.
 * *           : Inherits from Class Character.
 ***********************************************/

#include "Character.hpp"
#include "Barbarian.hpp"

/***************************
 * *Description: Constructor
 ****************************/
Barbarian::Barbarian()
{
   name = "Barbarian";
   armor = 0;
   strength = 12; 
}

/**************************
 * *Description: Destructor
 *************************/
Barbarian::~Barbarian() {}

/**************************
 * *Function name: attack
 * *Description: rolls die for vampire attack points and returns opponents damage
 ****************************/
void Barbarian::attack(Character *foe)
{
   int attack1 = rand () % 6 + 1;
   int attack2 = rand () % 6 + 1;
   int attack = attack1 + attack2;
   std::cout << "Barbarian " << "rolled a " << attack1 << " and a  " << attack2 << " against " << foe->getName() << " for a total of " << attack << " attack points!" << std::endl;
   foe->defense(attack, name,0);
}

/**************************
 * *Function name: defense
 * *Description: determines vampire damage
 **************************/
void Barbarian::defense(int attack, std::string foe_name, bool glare)
{
   if(glare==true)
   {   
      strength = 0;
      std::cout << "Barbarian dies!" << foe_name << " won!" << std::endl;
   }   
   else
   {   
      std::cout << "Barbarian has " << armor << " armor and " << strength << " strength points." << std::endl;
      int defense1 = rand () % 6 + 1;
      int defense2 = rand () % 6 + 1;
      int defense = defense1 + defense2;
      std::cout << "Barbarian rolled a " << defense1 << " and a " << defense2 << " for a total of " << defense << " for defense!" << std::endl;
      int damage = attack - defense - armor;
      if(damage <=0)
      {   
	 std::cout << foe_name << "'s attack was ineffective! Barbarian does not take any damage." << std::endl;
      }   
      else
      {   
	 strength -= damage;
	 if(strength <=0)
	 {   
	    strength = 0;
	 }   
	 std::cout << "Barbarian takes " << damage << " damage points!" << std::endl;
	 std::cout << "Barbarian strength has been reduced to " << strength << " points!" << std::endl;
	 if(strength==0)
	 {
	    std::cout << "Barbarian dies!" << foe_name << " won!" << std::endl;
	 }
      }   
   }
}
