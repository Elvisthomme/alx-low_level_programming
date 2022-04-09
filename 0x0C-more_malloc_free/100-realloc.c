#include "main.h"

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: the poiter to the old memory
 * @old_size: the old size of the memory
 * @new_size: the new size of the memory
 * Return: a pointer to the memory new or NULL when malloc fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
		for (i = 0; i < old_size; i++)
			*(p + i) = *((int *) ptr + i);
	free(ptr);
	return ((void *) p);
}
