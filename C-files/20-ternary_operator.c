/**
 * @file 20-ternary_operator.c
 * @author muhabeid
 * @brief - shortcut to if/else when assigning/returning a value
 * @version 0.1
 * @date 2022-04-07
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int findMax(int x, int y)
{
  // if(x > y)
  // {
  //   return x;
  // }
  // else
  // {
  //   return y;
  // }

  // The above if/else lines of code can be replaced easily with a ternary operator which goes like:
  // from the general formula of 
  // (condition) ? value if true : value if false;
  return (x > y) ? x : y; 

  // In this case. the condition is if x > y, if so the first value to be returned is true otherwise it returns the second value.
}

int main()
{
  // General formula
  // (condition) ? value if true : value if false
  // You write a condition in that if the condition is true, you return the value being true and if the condition is false you return some other value.

  int max = findMax(3, 4);

  printf("%d", max);


  return 0;
}