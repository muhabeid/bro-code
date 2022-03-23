/**
 * @file formatspecifier.c
 * @author muhabeid
 * @brief - format specifier % = defines and formats a type of data to be displayed 
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
  // %c = character
  // %s = string 
  // %f = float
  // %lf = double
  // %d = integer

  // %.1 = decimal precision
  // %1 = minimum field width 
  // %- = left align 

  // suppose
  float item1 = 5.75;
  float item2 = 100.99;
  float item3 = 10.00;


  printf("The price of the goods is as follows: \n");
  printf("Item 1: $%.2f\n", item1);  
  /**
   * when you include %.n, it specifies the number of decimal points to be present... where n represents a number. 
   * In the example above, we specified to 2 decimal places. %.2
   */ 
  printf("Item 2: $%.2f\n", item2);
  printf("Item 3: $%.2f\n\n", item3);

  /**
   * %n - just before the decimal add a number of spaces worth of room.
   * In the example below, we specified with 10 spaces to the right and when we included a negative sign, we allocated to the left side.
   * 
   */
  float item4 = 987.36;
  float item5 = 12.65;
  
  printf("Item 4: $%10.2f\n", item4);
  printf("Item 5: $%-10.2f\n", item5);

  return 0;
}