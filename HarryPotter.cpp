/**************************************
 * *Description: Class HarryPotter implementation file.
 * *           : Inherits from Class Character.
 ***********************************************/
 #include "Character.hpp"
#include "HarryPotter.hpp"

/***************************
 * *Description: Constructor
 ****************************/
HarryPotter::HarryPotter()
{
   lives = 1;
   name = "HarryPotter";
   armor = 0;
   strength = 10;
}

/**************************
 * *Description: Destructor
 *************************/
HarryPotter::~HarryPotter() {}

/**************************
 * *Function name: attack
 * *Description: rolls die for vampire attack points and returns opponents damage
 ****************************/
void HarryPotter::attack(Character *foe)
{
   int attack1 = rand () % 6 + 1;
   int attack2 = rand () % 6 + 1;
   int attack = attack1 + attack2;//Add both dice
   std::cout << "HarryPotter " << "rolled a " << attack1 << " and a  " << attack2 << " against " << foe->getName() << " for a total of " << attack << " attack points!" << std::endl;
   foe->defense(attack, name,0);
}

/**************************
 * *Function name: defense
 * *Description: determines vampire damage
 **************************/
void HarryPotter::defense(int attack, std::string foe_name, bool glare)
{
   if(glare==true && lives==0)//If medusa uses glare and Harry Potter has no lives remaining Harry Potter dies
   {   
      strength = 0;
      std::cout << "HarryPotter dies!" << foe_name << " won!" << std::endl;
   }
   else if(glare==true && lives==1)//If medusa uses glare, but Harry Potter has a life remaining, Harry Potter revives
   {
      std::cout << "Harry Potter revived!" << std::endl;
      strength = 20; 
      lives--;
   }   
   else
   {   
      std::cout << "HarryPotter has " << armor << " armor and " << strength << " strength points." << std::endl;
      int defense1 = rand () % 6 + 1;
      int defense2 = rand () % 6 + 1;
      int defense = defense1 + defense2;
      std::cout << "HarryPotter rolled a " << defense1 << " and a " << defense2 << " for a total of " << defense << " for defense!" << std::endl;
      int damage = attack - defense - armor;
      if(damage <=0)
      {   
	 std::cout << foe_name << "'s attack was ineffective! HarryPotter does not take any damage." << std::endl;
      }   
      else
      {   
	 strength -= damage;
	 if(strength <=0)//If strength falls to 0 and Harry Potter has a life remaining, revive
	 { 
	    if(lives==1)
	    {
	       std::cout << "Harry Potter revived!" << std::endl;
	       strength = 20;//Set strength to 20
	       lives--;
	    }
	    else if(lives==0)//If strength falls to 0 and Harry Potter has no lives remaining, Harry Potter dies
	    {
	       strength = 0;
	    }
	 }
	 if(lives==1)
	 {
	    std::cout << "HarryPotter takes " << damage << " damage points!" << std::endl;
	    std::cout << "HarryPotter strength has been reduced to " << strength << " points!" << std::endl;
	 }
	 if(strength==0)
	 {
	    std::cout << "HarryPotter dies!" << foe_name << " won!" << std::endl;
	 }

      }
   }
}   
