/**
 * @file 16-logical_operators.c
 * @author muhabeid
 * @brief - logical operators 3 - !
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include<stdbool.h>

// Logical operators = ! (NOT) reverses the state of a condition
int main (){

  bool sunny = true;

  // in bool, true represents 1
  // So in the example below, we could just say, (sunny == 1) or just leave it at if(sunny)
  // But if we include the (NOT) operator, it reverses the condition as shown in this case. if(!sunny) - this reverses the condition and executes the other line of code.
  if(!sunny){ // ! operator is used in this example
    printf("\nIt's Sunny outside!");
  }
  else{
    printf("\nIt's cloudy outside!");
  }
  return 0;
}