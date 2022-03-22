#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int i = 0;
	
	if (*(str))
		_putchar(*(str));
	for (i = 2; *(str + i - 1) && *(str + i); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
