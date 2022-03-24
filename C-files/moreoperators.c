/**
 * @file moreoperators.c
 * @author muhabeid
 * @brief - augmented assignment operators = used to replace a statement where an operator takes a variable as one of its argument and then assigns the result back to the same variable.
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
  // Suppose you want to increment the value of x by 1.  
  // That would be (x = x + 1) this can also be written as (x+=1)
  // Where the arithmetic sign before the equal sign determines the type of path it should be followed.

  int a = 10;
  int b = 10;
  int c = 10;
  int d = 10;
  int e = 10;
  
  // a = a + 2;
  a+=2;

  // b = b - 3;
  b-=3;

  // c = c * 4;
  c*=4;

  // d = d / 5;
  d/=5;

  // e = e % 2;
  e%=2;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);

  return 0;
}