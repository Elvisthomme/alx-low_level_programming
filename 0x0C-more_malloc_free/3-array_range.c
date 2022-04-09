#include "main.h"

/**
 * array_range - create an array of integers containing number from min to max
 * @min: the mininum number
 * @max: the maximum number
 * Return: a pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}
