#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int counter = 0;

	while (*(str + counter))
	{
		if ((*(str + counter)) % 2 == 0)
			_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
