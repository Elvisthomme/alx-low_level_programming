#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse
  * @s: the string to print
  */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*(s + 1))
	{
		_print_rev_recursion((s + 1));
	}
	_putchar(*s);
}
