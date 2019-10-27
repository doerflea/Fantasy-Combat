/*******************************************
 * *Description: Menu implementation file. Function descriptions located in menu.hpp
 *******************************************/
#include<iostream>
#include "menu.hpp"
#include "input_validation.hpp"
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

int main()
{
   Character *character1;
   Character *character2;
   std::string play = "Play.";
   std::string play_again = "Play again.";
   std::string exit = "Exit game.";
   int game_play = menu(play,exit);
   if(game_play==2)
   {
      return 0;
   }
   do
   {
      character1 = characterMenu();//Get character 1
      character2 = characterMenu();//Get character 2
      int round = 1;
      while(character1->getStrength() >0 && character2->getStrength() > 0) //Attack and 
      {
	 std::cout << "----------Round " << round << " ----------" << std::endl;
	 std::cout << "     *****Monster 1*****" << std::endl;
	 character1->attack(character2);//Character 1 attacks Character 2, Character 2 defends
	 std::cout << std::endl;
	 if(character2->getStrength() <=0)//Don't have character 2 attack if their strength has fallen below 0
	 {
	    break;
	 }
	 std::cout <<"     *****Monster 2*****" << std::endl;
	 character2->attack(character1);//Charcter 2 attacks Character 1, Character 1 defends
	 std::cout << std::endl;
	 round++;//Increment round
	 {
	    std::cout << "Press ENTER to fight!" << std::endl;
	 }while(std::cin.get() !='\n');
      }
      game_play = menu(play_again, exit);
   }while(game_play==1);
  
   delete character1;
   delete character2;

   return 0;
}

int menu(std::string x,std::string y)
{
   int start;
   std::string user_input_test;
   std::cout << "1. " << x << std::endl;
   std::cout << "2. " << y << std::endl;
   do
   {
      std::cout << "Enter selection: ";
      getline(std::cin,user_input_test);
   }while(check_int(user_input_test,2,1)==false);
   start = atoi(user_input_test.c_str());
   return start;
} 

Character * characterMenu()
{
   int charChoice;
   Character *character;
   std::string user_input_test;//String used to test for input validation
   std::cout << "1. Vampire." << std::endl;
   std::cout << "2. Barbarian." << std::endl;
   std::cout << "3. Blue Men." << std::endl;
   std::cout << "4. Medusa." << std::endl;
   std::cout << "5. Harry Potter." << std::endl;
   do{
      std::cout << "Enter character selection: ";
      getline(std::cin, user_input_test);
   }while(check_int(user_input_test,9,1)==false);
   charChoice = atoi(user_input_test.c_str());//If input was valid, convert to int
   switch(charChoice)
   {
      //Return character selected
      case 1:
	 character = new Vampire;
	 std::cout << "You selected Vampire." << std::endl;
	 break;
      case 2:
	 character = new Barbarian;
	 std::cout << "You selected Barbarian." << std::endl;
	 break;
      case 3:
	 character = new BlueMen;
	 std::cout << "You selected Blue Men." << std::endl;
	 break;
      case 4:
	 character = new Medusa;
	 std::cout << "You selected Medusa." << std::endl;
	 break;
      case 5:
	 character = new HarryPotter;
	 std::cout << "You selected Harry Potter." << std::endl;
	 break;
   }
   return character;
}

