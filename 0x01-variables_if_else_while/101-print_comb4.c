#include <stdio.h>

/**
 * main - print all possible combinaisons of three digits.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (k = 48; k <= 48 + 9; k++)
		for (j = 48; j <= 48 + 9; j++)
			for (i = 48; i <= 48 + 9; i++)
			{
				if (k < j && j < i)
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (i < 48 + 6
					|| j < 48 + 6
					|| k < 49 + 6)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');

	return (0);
}

