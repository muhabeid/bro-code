/**
 * @file operators.c
 * @author muhabeid
 * @brief arithmetic operators
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
  // arithmetic operators

  // + addition
  // - substraction
  // * multiplication
  // / division - This constitues the whole numbers that are in the sums 
  // % modulus - This constitutes the remainder number that remains after equal divisions
  // ++ increment 
  // -- decrement

  int x = 5;
  int y = 2;

  int z = x + y;
  printf("%d\n", z);

  // When perfoming division within integers, you need to pay attention to float as well. Suppose in this case 

  int a = 7;
  int b = 3; // You either convert this to float instead of an int

  // The value is stored in float since the ans is a floating number
  // You can also convert the second number to a float or double inside the arithmetic if you didn't convert it at initialization.

  float c = a / (float) b; 
  printf("%f\n", c);

  // ++ increments the value of a variable by one
  // -- decrement the value of a variable by one
  int d = 10;
  int e = 12;

  d++;
  e--;

  printf("%d\n", d);
  printf("%d\n", e);
  


  return 0; 
}