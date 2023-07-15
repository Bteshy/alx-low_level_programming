#include <stdio.h>

/**
  * main - Prints the sizeof many var types
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float e;

  printf ("Size of a char: %d byte(s)\n", sizeof(a));
  printf ("Size of b int: %d byte(s)\n", sizeof(b));
  printf ("Size of c long int: %d byte(s)\n", sizeof(c));
  printf ("Size of d long long int: %d byte(s)\n", sizeof(d));
  printf ("Size of e float: %d byte(s)\n", sizeof(e));
}
return (0);
