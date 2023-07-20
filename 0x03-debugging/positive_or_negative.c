#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Determines if an integer
 * is positive, negative, or zero.
 * @i: The integer to be evaluated.
 *
 * Description: Prints whether the 
 * is positive, negative, or zero.
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
