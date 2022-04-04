/**
 * @file 19-return_statements.c
 * @author muhabeid
 * @brief - Return statement = returns a value back to a calling function
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

double square(double x)
{
  return x * x;
}

int main()
{

  double x = square(3.14);
  printf("%lf", x);
   
  return 0;
}