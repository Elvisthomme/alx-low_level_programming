#include "function_pointers.h"
/**
  * array_iterator - execute a fuction given on each element of an array
  * @array: an array of integer
  * @size: the size of the array
  * @action: the function to execute of each element of the array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int) size; i++)
			(*action)(array[i]);
}
