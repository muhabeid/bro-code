/**
 * @file 14-logical_operators.c
 * @author muhabeid
 * @brief - logical operators 1 - &&
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <stdbool.h>

// There are three logical operators:
// && = And
// || = or 
//  ! = Not

// Logical operators = && (AND) checks to see if two conditions are true.
// The logical && operator should both be true for the first condition to execute.

int main(){

  float temp = 25;
  bool sunny = false;

  // In this case, the temp is both greater than zero and less than 30, hence this line line executes, otherwise if temp is above 30... The second condition will execute.
  // Suppose you include another condition, bool, the same will actually apply... for the first line to execute, all conditions must be met... else the code skips and executes the second line.

  if(temp >= 0 && temp <= 30 && sunny == true){
    printf("\nThe weather is quite good!");
  }
  else{
    printf("\nThe weather is pretty bad");
  }

  return 0;
}