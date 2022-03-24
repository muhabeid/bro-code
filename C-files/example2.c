/**
 * @file example2.c
 * @author muhabeid
 * @brief Finding the hypotenus of a right angle triangle
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

  double A;
  double B;
  double C;

  printf("\nEnter side A: ");
  scanf("%lf", &A);

  printf("\nEnter side B: ");
  scanf("%lf", &B);
  
  C = sqrt((A * A) + (B * B));
  printf("The length of side C is %lf", C);

  return 0;
}