#include "main.h"

/**
  * flip_bits - the number of bits to flip to get from one number to another
  * @n: the first number
  * @m: the second number
  * Return: the number of bits to flip to get from one number to another
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	int c = 0;

	r = n ^ m;
	while (r)
	{
		if (r & 1)
			c++;
		r >>= 1;
	}
	return (c);
}
