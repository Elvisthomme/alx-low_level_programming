#include "main.h"

/**
  * create_array - create an array of chars and initializes it with "c"
  * @size: the size of the array
  * @c: the specific char for initialization
  * Return: a pointer to the new array
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}
