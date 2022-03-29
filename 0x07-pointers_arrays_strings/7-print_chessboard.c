#include "main.h"

/**
  * print_chessboard - print the chessboard
  * @a: the two dimension array of chessboard
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;
	
	for ( i = 0; i < 8; i++)
	{
		while (*(a + j)[i])
		{
			_putchar(*(a + j)[i]);
			j++;
		}
		_putchar ('\n');
	}
}
