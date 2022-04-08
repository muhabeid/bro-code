/**
 * @file 22-string_functions.c
 * @author muhabeid
 * @brief 
 * @version 0.1
 * @date 2022-04-08
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <string.h>

int main()
{
  // To use string functions, we include the header file string.h

  char string1[] = "Wiz";
  char string2[] = "Mooher";

  // strlwr(string1);                                   // converts a string to lowercase
  // strupr(string1);                                  // converts a string to uppercase
  // strcat(string1, string2);                        // appends string2 to end string1
  // strncat(string1, string2, 1);                   //appends n characters from string2 to string1. 
                                                    // The last value is the number os characters to borrow from string2 and add to string1.
  // strcpy(string1, string2);                     // copy string2 to string1
                                                  // This copies the content of string2 and overwrites string1 in the output.
  // strncpy(string1, string2, 4);               // copy n characters of string2 to string1

  // strset(string1, '?');                      // sets all characters of a string to a given character. In this case, ?
  // strnset(string1, 'x', 1);                 // sets first n characters of a string to a given character.
  // strrev(string1);                         // reverses a string

  // int result = strlen(string1);    // returns string length as int
  // int result = strcmp(string1, string2);   // string compare all characters
  // int result = strncmp(string1, string2, 1);   //string compare n characters
  // int result = strcmpi(string1, string1);  // string compare all (ignore case)
  // int result = strnicmp(string1, string1, 1); string compare n characters (ignore case)


  // printf("%s", string1);
  printf("%d", result);

  if(result == 0)
  {
    printf("These strings are the same");
  }
  else{
    printf("These strings are not the same");
  }


  return 0;
}