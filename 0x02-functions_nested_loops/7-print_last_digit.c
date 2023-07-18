#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastn = n % 10;

	if (n < 0)
		lastn = lastn * -1;

	_putchar(lastn + '0');

	return (lastn);
}
