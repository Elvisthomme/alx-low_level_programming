#include "main.h"

/**
 * print_array - print n element of an array of integers
 * @a: the array of integers
 * @n: the number of element to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i == n)
			continue;
		printf(", ");
	}
	_putchar('\n');
}
