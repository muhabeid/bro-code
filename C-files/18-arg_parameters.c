/**
 * @file 18-arg_parameters.c
 * @author muhabeid
 * @brief - Arguments and parameters
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

  // Functions can't see inside other functions.
  // So if you declare variable inside another function, you pass them as arguments when we invoke the functions.
  // In the function declaration, we shall list our variables but preceed it with the data type.
void birthday(char name[], int age) // Parameters
{
  printf("\nHappy birthday dear %s!", name);
  printf("\nYou are %d years old!", age);
}

int main()
{
  char name[] = "Wiz";
  int age = 28;
  // The variables are passed inside the parenthesis as arguments, that way they can be called up ahead inside the initialized function
  // Anything that is passed to a function is an argument.
  // But we need a matching set of parameters within the function declaration (initialized function)  
  birthday(name, age);

  return 0;
}