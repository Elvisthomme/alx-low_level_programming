#include "main.h"

/**
 * times_table - print the nine times tables
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(48 + (i * j));
			if (j == 9)
				continue;
			_putchar(44);
			_putchar(' ');
		}
		_putchar(' ');
	}
}
