#include <stdio.h>

/**
 * main - print all possible combinaisons of two digit.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;

	for (j = 48; j <= 48 + 9; j++)
		for (i = 48; i <= 48 + 9; i++)
		{
			if (j < i)
			{
				putchar(j);
				putchar(i);
				if (i < 48 + 8 || j < 48 + 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');

	return (0);
}
