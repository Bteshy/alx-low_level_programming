#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int limit = 4000000;
	int fib1 = 1, fib2 = 2, fib = 0;
	int sum = 0;

	while (fib1 <= limit)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}
	printf("%d\n", sum);
	return (0);
}
