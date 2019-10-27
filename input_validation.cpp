/***************************************************************
 * *Description: input_validation implementation file
 *****************************************************************/
#include<iostream>
#include "input_validation.hpp"
using std::string;
using std::cout;
/***************************************************************
 * *Function Name: check_int
 * *Description: Tests whether user input is an int, then tests whether input is within a valid range
 * *Parameters: string, int, int
 *****************************************************************/
bool check_int(string test,int upper_limit, int lower_limit){
   int test2;//Test int used to test if input is within range
   if(test.length()==0 || test[0] == '0')//If string is null return false
   {   
      cout << "Invalid input. Try again.\n";
      return false;
   }
   for (int i = 0; i < static_cast<int>(test.length()); i++)//If character is non numerical return false
   {
      if(!isdigit(test[i]))
      {
	 cout <<"Invalid input. Try again.\n";
	 return false;
      }
   }
   test2 = atoi(test.c_str());//If input is outside of range return false
   if(test2 > upper_limit || test2 < lower_limit){ 
      cout << "Invalid input. Try again.\n";
      return false;
   }
   return true;
}

