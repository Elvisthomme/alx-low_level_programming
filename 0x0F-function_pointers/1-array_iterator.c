#include "function_pointers.h"
/**
  * array_iterator - execute a fuction given on each element of an array
  * @array: an array of integer
  * @action: the function to execute of each element of the array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for(i = 0; i < (int) size; i++)
		(*action)(array[i]);
}
