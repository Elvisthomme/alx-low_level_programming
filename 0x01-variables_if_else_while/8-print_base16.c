#include <stdio.h>

/**
 * main - print the number of base 16 in lowercase
 * Return: Always return 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
	}
	for (i = 97; i < 97 + 6; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
