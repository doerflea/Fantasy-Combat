/******************************************
 **Description: Menu declaration file
 ****************************************/
#ifndef DOERFLEA_MENU_HPP
#define DOERFLEA_MENU_HPP

#include<string>
#include "Character.hpp"

/*******************************************
 * *Function Name: Menu
 * *Description: Prompts user to enter or exit game
 * *Parameters: string, string
 * *Pre-Conditions: N/A
 * *Post-Conditions: N/A
 *******************************************/
int menu(std::string, std::string);


Character * characterMenu();

#endif
