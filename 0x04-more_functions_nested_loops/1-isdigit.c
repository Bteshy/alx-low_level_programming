#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if value is a digit
 * @c: value to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	int respo;

	if (isdigit(c))
		respo = 1;
	else
		respo = 0;

	return (respo);
}
