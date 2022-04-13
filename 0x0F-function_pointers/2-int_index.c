#include "function_pointers.h"
/**
  * int_index - search for an interger
  * @array: an array of integer
  * @size: the number of elements in the array
  * @cmp: a pointer to the function to be used to compare values
  * Return: the index of the first element for which the cmp does not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(*(array + i)) != 0)
			return (i);
	return (-1);

}
