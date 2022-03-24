/**
 * @file mathfunctions.c
 * @author muhabeid
 * @brief Useful math functions in C
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

int main()
{
  // Including the math.h header file, contains very many useful functions.
  // To use math functions in c, you must inlcude the math header function at the top.

  double A = sqrt(9); // square root of 9 
  double B = pow(2, 4); // raise to a given power, the fisrt number is the base 
  int C = round(3.14); // rounding a number with respect to general rule
  int D = ceil(3.14); // rounding a number off upwards
  int E = floor(3.99); // rounding a number downwards
  double F = fabs(-100); // finding an absolute value of a number
  double G = log(3); // finding log of a number.
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("\n%lf", A);
  printf("\n%lf", B);
  printf("\n%d", C);
  printf("\n%d", D);
  printf("\n%d", E);
  printf("\n%lf", F);
  printf("\n%lf", G);
  printf("\n%lf", H);
  printf("\n%lf", I);
  printf("\n%lf", J);

  return 0;
}