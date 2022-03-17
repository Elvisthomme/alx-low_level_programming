#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; i++)
			_putchar(48 + i);
		_putchar('\n');
	}
}
