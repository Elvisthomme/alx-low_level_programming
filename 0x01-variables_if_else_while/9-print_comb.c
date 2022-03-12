#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always return 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 48 + 10)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
