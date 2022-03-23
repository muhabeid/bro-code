/**
 * @file variables.c
 * @author muhabeid
 * @brief - Variables = Allocated space in memory to store a value.
 * We refer to a variable's name to access the stored value.
 * That variable now behaves as if it was the value it contains.
 * But we need to declare what type of dat awe are storing.
 * Variables are created in two ways, Declaring the name of the variable and then precede it with the type of data that you want to store in it.
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
int main()
{
  int x;          //declaration, in that we declared that a variable x is of int type.
  x = 123;        // initialization, 
  int y = 321;    // Declaration + initialization

  int age = 28;         //integer
  float gpa = 2.05;     //floating point number
  char grade = 'C';     //Single character

  /** Since C isn't an object oriented language,    there are no strings in C. Because stings rea   technically objects.
   * Hence when you want to create multiples of characters, we create it using an array. 
   * Place your series of characters in double quotes ("") and you can create an array.
   */ 
  char name[] = "Wiz";    //array of characters

  /**
   * To display our values stored in our variables with printf(""), we use format specifier.
   * % are place holders for the type of data used. You placed them followed by a secret character to represent the data type of the value stored in the initialization.
   * Read through the specifiers for various data types.
   * When placing the specifier, the name of the initialized variable should be included, outside the quotes, so as to let the program know what it is refering to. 
   */

  printf("Hello %s\n", name);                         //%s - array of characters i.e strings
  printf("You are %d years old\n", age);             //%d - decimal i.e integer
  printf("Your average grade is %c\n", grade);      //%c - single character
  printf("Your gpa is %f\n", gpa);                 //%f - floating number

  return 0;
}