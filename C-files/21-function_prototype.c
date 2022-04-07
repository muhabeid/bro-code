/**
 * @file 21-function_prototype.c
 * @author muhabeid
 * @brief 
 * @version 0.1
 * @date 2022-04-07
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

  // Function prototype is included before a main function but not given a body.
  // Then later a body is added and defined what it does.
  // The function prototype, contains the data type and the order of the arguments.
void hello(char[], int); // This is a function prototype

int  main()
{
  
  // function prototype is a function declaration without a body before main(). It ensures that calls to a function are made with the correct number and type arguments
  
  char name[] = "Wiz";
  int age = 28;

  hello(name, age);

  return 0;
}

void hello(char name[], int age)
{
  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}

// Points to note
// Many C compilers do not check for parameter matching
// A function prototype causes the compiler to flag an error if arguments are missing 

// Advantages of writting function prototype
// 1. Easier to navigate a program with main() at the top
// 2. HElps with debugging 
// 3. Commonly used in header files.