/**
 * @file example1.c
 * @author muhabeid
 * @brief A quick example of a project to calculate the circumference of a circle
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
  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of a circle: ");
  scanf("%lf", &radius);  

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("\nCircumference: %lf meters\n", circumference);
  printf("\nArea: %lf meters\n", area);

  return 0;
}