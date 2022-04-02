/**
 * @file example4.c
 * @author muhabeid
 * @brief - a simple calculator to show case the workings of various components of C
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main(){

  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator ( + - * /): ");
  scanf("%c", &operator);

  printf("Enter number 1: ");
  scanf("%lf", &num1);
  
  printf("Enter number 2: ");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
      result = num1 + num2;
      printf("\nResult: %.2lf", result);
    break;
  case '-':
      result = num1 - num2;
      printf("\nResult: %.2lf", result);
    break;
  case '*':
      result = num1 * num2;
      printf("\nResult: %.2lf", result);
    break;
  case '/':
      result = num1 / num2;
      printf("\nResult: %.2lf", result);
    break;
  
  default:
      printf("%c is not valid", operator);
    break;
  }
  return 0;
}