#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 50;
	long long int fib1 = 1, fib2 = 2;

	printf("%lld, %lld", fib1, fib2);

	for (int i = 3; i <= count; i++)
	{
		long long int fib = fib1 + fib2;

		printf(", %lld", fib);

		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");
	return (0);
}
