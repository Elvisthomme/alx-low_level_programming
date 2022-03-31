#include "main.h"

/**
 * print_last_digit - print the last digit oft a number
 * @number: an integer number
 * Return: The last digit of the number
 */
int print_last_digit(int number)
{
	int last_digit;
	
	if (number == -2147483648)
		_putchar('0' + 8);
	else if (number < 0)
		last_digit = -number % 10;
	else
		last_digit = number % 10;
	_putchar(48 + last_digit);
	return (last_digit);
}
