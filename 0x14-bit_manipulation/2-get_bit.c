#include "main.h"

/**
  * get_bit - get the value of a bit at a given index
  * @index: the index, starting from 0 of the bit you want to get
  * @n: the number
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	int r;

	i <<= (index);
	r = (n & i) >> (index);
	return (r);
}