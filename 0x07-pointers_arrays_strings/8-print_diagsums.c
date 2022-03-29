#include "main.h"

/**
  * print_diagsums - print the chessboard
  * @a: the two dimension array of chessboard
  */
void print_diagsums(int *a, int size)
{
	int i;
	int first_diagsums = 0;
	int second_diagsums = 0;
	
	for (i = 0; i < size * size; i += size + 1)
	{
		first_diagsums += *(a + i);
	}

	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		second_diagsums += *(a + i);
	}
	printf("%d, %d\n", first_diagsums, second_diagsums);
}
