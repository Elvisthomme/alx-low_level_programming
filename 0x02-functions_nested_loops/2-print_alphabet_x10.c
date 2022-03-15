#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97;  j < 97 + 26; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
