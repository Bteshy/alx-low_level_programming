#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i = 0;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length  + 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}


