/**
 * @file escapesequence.c
 * @author muhabeid
 * @brief escape sequence = character combination consisting of a backlash \ followed by  a letter or combination of digits.
 * They specify actions within a line or string of text.
 * \n = newline
 * \t = tab

 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int main()
{
  // creates a new line after every word. Don't place space after, since it'll carry it forward
  printf("I\nlike\npizza\n");

  // creates an evenly spacing between the numbers. Tab between the numbers.
  printf("1\t2\t3\t4\t5\n");

  // Creating a grid as a result of combining the two escape sequence
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

  // To display quotes in C, we use backslash inside the original quotes. i.e
  // This shows double quotes. ""
  printf("\"I like Pizza!\" - Wiz Mooher\n");

  // This shows single quotes ''
  printf("\'I like Hamburger!\' - Muhabeid\n");
  return 0;
}