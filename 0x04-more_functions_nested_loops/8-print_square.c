#include "main.h"

/**
 * print_square - print a n*n square of #
 * @square: size of square
 */
void print_square(int size)
{
	if (square > 0)
	{
		int i, j;

		for (i = 0; i < square; i++)
		{
			for (j = 0; j < square; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
