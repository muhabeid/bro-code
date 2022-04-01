/**
 * @file 13-switches.c
 * @author your name (you@domain.com)
 * @brief - Switches are a more efficient alternative to using 'else if'
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

/**
 * @brief switch = a more efficient alternative to using many "else if" statements 
 * It allows a value to be tested for equality against many values.
 */
int main()
{
  char grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  // It is considered a bad practice to use so many 'else if' statements and that's why it is good to make use of switch.
  
  // The value that is to examined for equality is to be placed inside the braces.
  switch(grade){
    case 'A':
      printf("Perfect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least it's not an F!\n");
      break;
    case 'F':
      printf("Oh! My man... You down bad!\n");
      break;
  // Default case functions just like an else statement, in that when there are no more cases, the code returns to print whatever is on this default function. 
    default:
      printf("Please enter only valid grades!");
  }

    return 0;
}   