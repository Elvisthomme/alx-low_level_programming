#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: the string
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter))
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
