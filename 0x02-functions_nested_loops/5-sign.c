#include "main.h"

/**
 * print_sign - print  the sign of a number
 * @n: the number that we want to print it sign
 * Return: 1 if the number is greater than zero
 * 0 if the number is zero
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
