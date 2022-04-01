/**
 * @file ifstatements.c
 * @author muhabeid
 * @brief - if statements are used to add some choices to a program 
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main()
{
  int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  if(age >= 18){
    printf("You are now signed up!");
  }
  else if(age < 0){
    printf("You haven't been born yet!");
  }
  else{
    printf("You are too young to sign up!");
  }

  return 0;
}