/**************************************
 * *Description: Class HarryPotter implementation file.
 * *           : Inherits from Class Character.
 ***********************************************/
#include "Character.hpp"
#include "BlueMen.hpp"

/***************************
 * *Description: Constructor
 ****************************/
BlueMen::BlueMen()
{
   name = "BlueMen";
   armor = 3;
   strength = 12; 
}

/**************************
 * *Description: Destructor
 *************************/
BlueMen::~BlueMen() {}

/**************************
 * *Function name: attack
 * *Description: rolls die for vampire attack points and returns opponents damage
 ****************************/
void BlueMen::attack(Character *foe)
{
   int attack1 = rand () % 10 + 1;
   int attack2 = rand () % 10 + 1;

   int attack = attack1 + attack2;
   std::cout << "BlueMen " << "rolled a " << attack1 << " and a  " << attack2 << " against " << foe->getName() << " for a total of " << attack << " attack points!" << std::endl;
   foe->defense(attack, name,0);
}

/**************************
 * *Function name: defense
 * *Description: determines vampire damage
 **************************/
void BlueMen::defense(int attack, std::string foe_name, bool glare)
{
   if(glare==true)
   {
      strength = 0;
      std::cout << "BlueMen dies!" << foe_name << " won!" << std::endl;
   }
   else
   {

      std::cout << "BlueMen has " << armor << " armor and " << strength << " strength points." << std::endl;
      int defense1 = rand () % 6 + 1;
      int defense2 = rand () % 6 + 1;
      int defense3 = rand () % 6 + 1;
      int defense = defense1 + defense2 + defense3;
      if(strength <= 8 && strength > 4)//Use the value of only two dice to calculate defense
      {
	 defense1 = 0;
	 defense = defense2 + defense3;
	 std::cout << "BlueMen rolled a " << defense2 << " and a " << defense3 << " for a total of " << defense << " for defense!" << std::endl;
      }
      else if(strength <=4)//Use the value of only one die to calculate defense
      {
	 defense1 = 0;
	 defense2 = 0;
	 defense = defense3;
	 std::cout << "BlueMen rolled a " << defense3 << " for a total of " << defense << " for defense!" << std::endl;

      }
      else//Use the value of all 3 die to calculate defense.
      {
	 std::cout << "BlueMen rolled a " << defense1 << " and a " << defense2 << " and a " << defense3 << " for a total of " << defense << " for defense!" << std::endl;
      }
      int damage = attack - defense - armor;
      if(damage <=0)
      {   
	 std::cout << foe_name << "'s attack was ineffective! BlueMen does not take any damage." << std::endl;
      }   
      else
      {   
	 strength -= damage;
	 if(strength <=0)
	 {   
	    strength = 0;
	 }   
	 std::cout << "BlueMen takes " << damage << " damage points!" << std::endl;
	 std::cout << "BlueMen strength has been reduced to " << strength << " points!" << std::endl;
	 if(strength==0)
	 {   
	    std::cout << "BlueMen dies!" << foe_name << " won!" << std::endl;
	 }   
      }
   }   
}
