#include <stdio.h>
#include "main.h"

/**
 * Description: check if i is positive, negative, or zero
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("0 is zero\n");
	else
		printf("%d is positive\n", i);
}
