/**
 * @file 17-functions.c
 * @author muhabeid
 * @brief - Functions is a small section of code that is executed whenever we call it.
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

  // You initialize a function with the unique name, in this case the name of the initialized name is birthday.
  // Then you include the code that you would like to repeat and place it inside the initialized function.

void birthday()
{
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday dear...  YOU!");
  printf("\nHappy birthday to you!\n");
}

  // The code to be repeated is taken from the main function and placed to the initialized function.
  // And to invoke the function type the name of the function followed by (). 
  // To repeat the code, you invoke it as per the number of times you want.
  // In this case, I have repeated it three times.

int main()
{
  birthday();
  birthday();
  birthday();

  return 0;
}