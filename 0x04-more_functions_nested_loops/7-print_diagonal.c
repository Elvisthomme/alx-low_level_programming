#include "main.h"

/**
 * print_line - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (i > 0)
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
				_putchar(' ');
			_putchar('\\');
		}
	_putchar('\n');
}
