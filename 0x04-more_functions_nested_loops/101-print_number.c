#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int positive_value;
	int number_of_digit = 1;
	int divider;
	int i;
	int j;
	int abs_value;

	/* print the sign and get the absolute value*/
	if (n < 0)
	{
		_putchar('-');
		abs_value = positive_value = -n;
	}
	else
		abs_value = positive_value = n;
	/* Count the number of digit */
	while (positive_value > 9)
	{
		number_of_digit++;
		positive_value /= 10;
	}
	for (i = number_of_digit; i > 0; i--)
	{
		divider = 1;
		j = 1;
		while (j < i)
		{
			number_of_digit *= 10;
			j++;
		}
		_putchar('0' + abs_value / divider);
	}
	_putchar('\n');
}
