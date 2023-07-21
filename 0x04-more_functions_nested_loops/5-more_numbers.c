#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 */
void more_numbers(void)
{
	int count = 0, i;

	while (count < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		count++;
	}
}
