#include "main.h"

/**
 * puts_half - print half of a string followed by a new line to stdout
 * @str: the string
 */
void puts_half(char *str)
{
	int counter = 0;
	int n;

	while (*(str + counter))
	{
		counter++;
	}
	n = (counter % 2 == 0) ? (counter) / 2 : 2;
	while (n < counter)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
