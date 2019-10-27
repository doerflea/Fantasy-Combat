/**************************************
 * *Description: Class Vampire implementation file.
 * *           : Inherits from Class Character.
 ***********************************************/
#include "Character.hpp"
#include "Vampire.hpp"

/***************************
 * *Description: Constructor
 ****************************/
Vampire::Vampire()
{
   name = "Vampire";
   armor = 1;
   strength = 18;
}

/**************************
 * *Description: Destructor
 *************************/
Vampire::~Vampire() {}

/**************************
 * *Function name: attack
 * *Description: rolls die for vampire attack points and returns opponents damage
 ****************************/
void Vampire::attack(Character *foe)
{
   int attack = rand () % 12 + 1;
   std::cout << "Vampire " << "rolled a " << attack << " against " << foe->getName() << "!" << std::endl;
   foe->defense(attack,name,0);
}

/**************************
 * *Function name: defense
 * *Description: determines vampire damage
 **************************/
void Vampire::defense(int attack, std::string foe_name, bool glare)
{
   std::cout << "Vampire has " << armor << " armor and " << strength << " strength points." << std::endl;
   int charm = rand () % 2;
   if(glare==true && charm !=0)//If medusa uses glare and vampire does not use charm, vampire dies
   {
      std::cout << "Vampire dies!" << foe_name << " won!" << std::endl;
   }
   else if(charm==0 && glare==false)//If vampire uses charm, then attacker is charmed and no damage is done
   {
      std::cout << "Vampire charmed its foe!" << foe_name << " does not attack!" << std::endl;
   }
   else
   {
      int defense = rand () % 6 + 1;
      std::cout << "Vampire rolled a " << defense << " for defense!" << std::endl;
      int damage = attack - defense - armor;
      if(damage <=0)
      {
	 std::cout << foe_name << "'s attack was ineffective! Vampire does not take any damage." << std::endl;
      }
      else
      {
	 strength -= damage;
	 if(strength <=0)
	   {
	      strength = 0;
	   }
	 std::cout << "Vampire takes " << damage << " damage points!" << std::endl;
	 std::cout << "Vampire strength has been reduced to " << strength << " points!" << std::endl;
	 if(strength==0)
	 {
	 std::cout << "Vampire dies!" << foe_name << " won!" << std::endl;
	 }
      }

   }
}

