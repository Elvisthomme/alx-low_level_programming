#include "main.h"

/**
  * clear_bit - set the value of a bit at a given index to 0
  * @index: the index, starting from 0 of the bit you want to get
  * @n: a pointer to the number
  * Return: 1 for success or -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;

	if (!n)
		return (-1);

	i <<= (index);
	*n = *n | i;
	return (1);
}
