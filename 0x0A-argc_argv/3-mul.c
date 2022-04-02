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
 * tr_str_int - convert a string to and integer
 * @str: a pointer to the string
 * Return: the integer value of the string 
 */
int tr_str_int(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if (*(str) == '-')
	{
		sign = -1;
		i++;
	}
	else if (*(str) == '+')
		i++;
	while (*(str + i))
	{
		result = result * 10 + (*(str + i) - 48);
		i++;
	}
	return (sign * result);

}

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	mul = tr_str_int(argv[1]) * tr_str_int(argv[2]);
	print_number(mul);
	_putchar('\n');
	return (0);
}
