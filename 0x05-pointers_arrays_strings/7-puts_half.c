#include "main.h"

/**
 * _puts_half - print half of a string followed by a new line to stdout
 * @str: the string
 */
void _puts_half(char *str)
{
	int counter = 0;
	int n;

	while (*(str + counter))
	{
		counter++;
	}
	n = (counter - 1) / 2;
	while (n < counter)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
