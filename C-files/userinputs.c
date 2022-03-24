/**
 * @file userinputs.c
 * @author muhabeid
 * @brief How to prompt for a user input. We use scanf()
 * @version 0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
  // Printf() is used to display outputs while scanf() is used to read inputs.

  char name [25]; //bytes the 25 inside [] represent an inout size that we allocate to the variable and we don't want it to go past that.
  int age;

  // scanf() reads users inputs upto the place with a whitespace, then it breaks... to read beyond a user inputs, we use the fgets()

  printf("\nWhat's your name? ");
  // scanf("%s", &name); - scanf() can't accept whitespaces so that is why I opted for fgets() function.

  // To display whitespaces, we use the fgets() function which has three values inside the brackets.
  // name of the variable
  // input size same as the one you initialize in the variable
  // stdin - standard input
  fgets(name, 25, stdin); 

  // Using fgets() function, it includes a new line character, to get rid of that is a bit advanced as per the day of making this code. Will cover that later on which will make sense later on. 

  printf("How old are you? ");

  // What you place inside the scanf() is the specifier of the variable of our input. 
  // So if we want to have our answer as an int, we shall have a specifier of int which is %d, and if we have our answer as a single character, we will have our specifier as %c and so on depending on the specifier to be used.
  // you preced the variable name with the & which serve as an address of the operator. 
  scanf("%d", &age);

  printf("\nHello %s, How are you?", name);
  printf("\nYou are %d years old", age);

  return 0;

}