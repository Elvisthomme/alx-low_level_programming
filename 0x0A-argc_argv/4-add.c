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
 * tr_str_int - convert a string to and integer
 * @str: a pointer to the string
 * Return: the integer value of the string or -1
 */
unsigned int tr_str_int(char *str)
{
	int i = 0;
	unsigned int result = 0;

	while (*(str + i))
	{
		if (*(str + i) - 48 < 0 || *(str + i) - 48 > 9)
			return (-1);
		result = result * 10 + (*(str + i) - 48);
		i++;
	}
	return (result);

}

/**
 * print_error - print Error
 * Return: 1
 */
int print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (1);
}

/**
 * main - add positive numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	int num;
	int i;

	if (argc < 2)
	{
		return (print_error());
	}

	for (i = 1; i < argc; i++)
	{
		num = tr_str_int(argv[i]);
		if (num == -1)
			return (print_error());

		sum += num;
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}
