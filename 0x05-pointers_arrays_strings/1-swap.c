#include "main.h"
/**
* swap_int -swap integer values
*
*@a: first value
*@b: second value
*/
void swap_int(int *a, int *b);
{
  int temp = *a;

  *a = *b;
  *b =temp;
}
