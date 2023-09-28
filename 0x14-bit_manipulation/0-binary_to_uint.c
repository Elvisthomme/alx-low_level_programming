#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: a pointer to a string of 0 and 1 chars
  * Return: the converted number, or 0 if we have an error
  */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, pow2 = 1, i = 0;

	if (!b)
		return (0);
	while (*(b + i))
	{
		pow2 = pow2 << 1;
		i++;
	}
	i = 0;
	while (*(b + i))
	{
		pow2 = pow2 >> 1;
		if (*(b + i) == '1')
		{
			result += pow2;
		}
		else if (*(b + i)  == '0')
			;
		else
			return (0);
		i++;
	}
	return (result);
}
