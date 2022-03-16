#include "main.h"

/**
 * times_table - print the nine times tables
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(48 + (result / 10));
				_putchar(48 + (result % 10));
			}
			else
			{
				if (i != 0)
					_putchar(' ');
				_putchar(48 + result);
			}
			if (j == 9)
				continue;
			_putchar(44);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
