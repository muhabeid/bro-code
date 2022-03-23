/**
 * @file morevariables.c
 * @author muhabeid
 * @brief 
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
  /**
   * Recall: variables
   */
  char a = 'C'; //single character %c
  char b[] = "Buraza"; //array of characters %s

  float c = 3.1421592; // 4 bytes (32 bits of precision) stores 6 - 7 digits %f

  // Doubles are double the floats. with double precision and all.
  // Double is more accurate compared to floats, but uses more memories.
  double d = 3.1421592653589793; //8 bytes (64 bits of precision) stores 15 - 16 digits %lf
  
  // To work with booleans in your code, you must initialize a stdbool at the top of the code.
  // Booleans work in binary in that 1, rep true and 0, rep false
  bool e = true; //1 byte (true or false) %d

  // We can also store integers into char, between (-128 to + 127)
  // Char uses the ASCII table to shift conversion between representation of both numbers and letters in the table.
  // To change between numeric rep and alphabetic representation will depend on the type of specifier used. 
  // %d for numericals and %c for alphabetical representations.
  char f = 100; //1 byte (-128 to + 127) %d or %c

  // unsigned variables disregard the negative sign that comes with assigning integers to char.
  // This makes the range to double that of the char from 0 to 255, all being in the positive range.
  // If you go beyond +255 in assigning, the integer would overflow and start again at 0 
  unsigned char g = 255; //1 byte (0 to +255) %d or %c
  
  // unsigned doubles the range of signed and to the positive values only.
  // Going beyond the range of minimum in signed and unsigned, will always overflow to the minimum values. 
  // In such cases, for signed values the minimum is the initial negative value and for the unsigned values, the minimu is 0.
  short int h = 32767; //2 bytes (-32,678 to +32,767) %d
  unsigned short int i = 65535; //2 bytes (0 to 65,535) %d
  
  int j = 21342564; //4 bytes (-2,147,483,648 to + 2,147,483,648) %d
  unsigned int k = 4294967295; //4 bytes (0 to +4,294,967,295) %u

  long long int l = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
  // For an unsigned long long integer, you encounter an error.. to prevent the error you add a U to the end of the number.
  long long int m = 18446744073709551615; //8 bytes (0 to +18 quintillion)  %llu

  printf("%c\n", a);  // char
  printf("%s\n", b);  // character array
  printf("%f\n", c);  // float
  printf("%lf\n", d); // double
  printf("%d\n", e);  // bool
  printf("%d\n", f);  // char as numeric value 
  printf("%d\n", g);  // unsigned char as numeric value
  printf("%d\n", h);  // short int 
  printf("%d\n", i);  // unsigned short int
  printf("%d\n", j);  // int
  printf("%u\n", k);  // unsigned int
  printf("%lld\n", l);
  printf("%llu\n", m);

  return 0;
}
