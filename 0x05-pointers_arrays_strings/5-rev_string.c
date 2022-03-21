#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	int j;
	char c;

	while (*(s + counter))
	{
		counter++;
	}
	j = --counter;
	while (i < j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i++;
		j--;
	}
}
