/**
 * @file 15-logical_operators.c
 * @author muhabeid
 * @brief - logical operators 2 - ||
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include<stdbool.h>

// Logical operators = || (OR) checks if at least one condition is true 
int main(){

  float temp = 25;

  // For this case, at least one of the conditions need to be true. 
  // In this example, temp is neither less than 0 or greater than 30 and that's why the second line of code executes.
  if(temp <= 0 || temp >= 30){
    printf("\nThe weather is bad!");
  }
  else{
    printf("\nThe weather is good!");
  }

  return 0;
}