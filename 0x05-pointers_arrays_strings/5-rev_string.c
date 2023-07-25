#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string in reverse
 *
 * @s: string
 */

void rev_string(char *s)
{
  int len = strlen(s);
    int start = 0;
    int end = length - 1;
    
    while (start < end) 
    {
      char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

    start++;
        end--;
    }

}
