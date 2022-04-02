/**
 * @file example3.c
 * @author muhabeid
 * @brief - a small program to convert temperature from celcius to Fahrenheit
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <ctype.h>

// <ctype.h> is an input that contains many string functions.

int main(){

  char unit; // unit would either be C for celcius or F for fahrenheit
  float temp;

  printf("\nIs the temperature in (F) or (C)?: ");
  scanf("%c", &unit);

  // variable in question here is only set to uppercase value as in the statements, but suppose a user forgets to indicate an uppercase letter but their intention is with using it. 
  // We can pass a line of code that accepts and converts the letters to the desired state needed.

  unit = toupper(unit);
  
  // Now even if user types a lowercase letter, it will be automatically be accpeted since it would be converted to the desired state.

  // unit = tolower(unit);
  // Opposite of toupper

  // Example a - recalls if value is C or F
  // if (unit == 'C'){
  //       printf("The temp is currently in C");
  // }
  // else if(unit == 'F'){
  //       printf("The temp is currently in F");
  // }
  // else{
  //       printf("\n%c is not a valid unit of measurement!", unit);
  // }
  
  // Example b - convert the values inputted
  if(unit == 'C'){
    printf("\nEnter the temp in Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32; // Formula to change to F
    printf("\nThe temp in Farenheit is: %.1f", temp);
  }
  else if(unit == 'F'){
    printf("\nEnter the temp in Farenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9; // Formula to change to C
    printf("\nThe temp in Celcius is: %.1f", temp);
  }
  else{
    printf("\n %c is not a valid unit of measurement", unit);
  }

  return 0;
}