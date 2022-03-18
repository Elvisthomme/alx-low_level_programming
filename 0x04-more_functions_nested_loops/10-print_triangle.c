#include <stdio.h>

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				printf(" ");
			for (j = 1; j <= i; j++)
				printf("#");
			printf("\n");
		}
	else
		printf("\n");
}
