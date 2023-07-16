#include <stdio.h>

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		putchar(',');
		putchar(' ');
		n++;
	}
	return (0);
}
