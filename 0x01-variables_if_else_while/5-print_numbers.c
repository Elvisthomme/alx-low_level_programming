#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: Always return 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
