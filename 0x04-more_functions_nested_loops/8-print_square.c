#include "main.h"

/**
 * print_square - draws a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	else
		_putchar('\n');
}
