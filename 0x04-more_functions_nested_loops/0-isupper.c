#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if value is uppercase
 * @c: value to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int respo;

	if (isupper(c))
		respo = 1;
	else
		respo = 0;

	return (respo);
}
