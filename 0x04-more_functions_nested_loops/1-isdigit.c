#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: the character
 * Return: 1 if c is a digit
 * Otherwise return 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 48 + 9)
		return (1);
	return (0);
}
