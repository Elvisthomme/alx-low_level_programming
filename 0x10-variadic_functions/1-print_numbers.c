#include "variadic_functions.h"

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
		if (n ==  -2147483648)
		{
			_putchar('0' + 2);
			abs_value = positive_value = 147483648;
		}
		else
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
	{/*print the number starting by his first digit*/
		divider = 1;
		j = 1;
		while (j < i)
		{/* calculate the power divider = pow(10, i)*/
			divider *= 10;
			j++;
		}
		_putchar('0' + abs_value / divider);/*Print the first digit*/
		/* get the part of the number that we have not print*/
		abs_value = abs_value - ((abs_value / divider) * divider);
	}
}

/**
  * print_numbers - print numbers followed by a new line
  * @separator: the separator of the number
  * @n: the number of number
  * @...: The list of number
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;
	unsigned int i, j = 0;

	if (n == 0)
		exit(0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		print_number(num);
		if (i != n - 1 && separator != NULL)
		{
			while (*(separator + j))
			{
				_putchar(*(separator + j));
				j++;
			}
			j = 0;
		}
	}
	_putchar('\n');
}
