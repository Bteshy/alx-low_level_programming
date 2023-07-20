<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Determines if a given integer is positive, negative, or zero.
 * @i: The integer to be evaluated.
 *
 * This function takes an integer as input and prints whether it is positive, negative, or zero.
 * If the integer is less than 0, it prints "<i> is negative".
 * If the integer is equal to 0, it prints "0 is zero".
 * If the integer is greater than 0, it prints "<i> is positive".
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
=======
#include <stdio.h>
#include "main.h"

/**.
 * @i: The integer to be evaluated.
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
>>>>>>> f5c79ff868c1c3d11254d2824d91eb630aa082ef
