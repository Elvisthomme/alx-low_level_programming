#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	char c;

	while (*(s + counter))
	{
		counter++;
	}
	for (i = counter - 1; i > -1; i--)
	{
		c = *(s + counter  - 1 - i);
		*(s + counter - 1 - i) = *(s + i);
		*(s + i) = c;
	}
	_putchar('\n');
}
