#include "main.h"

/**
 * print_times_table - print the n times tables starting with 0
 *@n: the number of times tables
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 15 && n > -1)
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				result = i * j;
				if (n < 10 && result > 9)
				{
					_putchar(48 + (result / 10));
					_putchar(48 + (result % 10));
				}
				else if (n < 10 && result < 10)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(48 + result);
				}
				else if (n < 10)
				{
					if (j == 9)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				if (result > 99)
				{
					_putchar(48 + (result / 100));
					_putchar(48 + ((result - (result / 100)) / 10));
					_putchar(48 + (result % 10));
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar(48 + (result / 10));
					_putchar(48 + (result % 10));
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + result);
				}
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
	_putchar('\n');
}
