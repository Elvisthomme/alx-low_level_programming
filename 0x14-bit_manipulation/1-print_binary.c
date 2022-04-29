#include "main.h"

/**
  * print_binary - print the binary representation of a number
  */
void print_binary(unsigned long int n)
{
	unsigned long int copy_n = n, i = 1, c = 0, r;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}
	while (copy_n)
	{
		copy_n >>= 1;
		c++;
	}
	i <<= (c - 1);
	while (--c + 1)
	{
		r = ((n & i) >> c);
		_putchar('0' + r);
		i >>= 1;
	}
}
