#include "main.h"

/**
  * get_bit - get the value of a bit at a given index
  * @index: the index, starting from 0 of the bit you want to get
  * @n: the number
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, j = 0;
	unsigned long int mask, cp_n = n;

	while (cp_n)
	{
		j++;
		cp_n >>= 1;
	}

	if (index >= j)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) >> index;
	return (bit);
}
