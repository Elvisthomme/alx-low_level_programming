#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by new line
 * @s: the string
 */
void print_rev(char *s)
{
	int counter = 0;
	int i;

	while (*(s + counter))
	{
		counter++;
	}
	for (i = counter - 1; i > -1; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
