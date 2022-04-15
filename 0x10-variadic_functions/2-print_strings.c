#include "variadic_functions.h"

/**
  * _puts_recursion - print a string followed by a new line
  * @s: the string to print
  */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}

/**
  * print_strings - print numbers followed by a new line
  * @separator: the separator of the number
  * @n: the number of number
  * @...: The list of string to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	if (n == 0)
		exit(0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
		{
			_puts_recursion("nil");
		}
		else
			_puts_recursion(str);
		if (i != n - 1 && separator)
		{
			_puts_recursion((char *) separator);
		}
	}
	_putchar('\n');
}
