/**
 * @file constant.c
 * @author muhabeid
 * @brief constant = is a fixed value that cannot be altered by the program during its execution.
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
  // suppose you have pi = 3.142159 and then the value of pi gets to change to another value. 
  // The result of a program will change. To prevent that we precede the data type with the keyword 'const' to makr it as a constant value.
  // It is good practice to then make the variable name into uppercase.
  // When you try to assign a value to the variable that was fixed, you'll get an error that states assignment of read-only varaible.

  // This code will return an error cause of assignning a nother value to the constant varaible. 
  const float PI = 3.142159;

  PI =  5641.125;
  
  printf("%f\n", PI);

  return 0;  
}