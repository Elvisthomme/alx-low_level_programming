#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 97 + 25; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
