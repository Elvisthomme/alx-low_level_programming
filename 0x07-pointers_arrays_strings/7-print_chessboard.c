#include "main.h"

/**
  * print_chessboard - print the chessboard
  * @a: the two dimension array of chessboard
  */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (*(a + j)[i])
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(a + j)[i]);
		}
		_putchar ('\n');
		i = 0;
		j++;
	}
}
