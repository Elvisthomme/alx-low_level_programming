#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: the number of member
 * @size: the size of the one member
 * Return: a pointer to the memory or NULL when malloc fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(p + 0) = 0;
	return ((void *) p);
}
