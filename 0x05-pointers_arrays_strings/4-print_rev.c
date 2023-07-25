#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
