#include "main.h"

/**
 * main - print the number of arguments
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int num = argc - 1;
	int n = 1;
	int divider;
	int i;
	int j;

	UNUSED(argv);
	while (num > 9)
	{
		n++;
		num /= 10;

	}
	num = argc - 1;
	for (i = n; i > 0; i--)
	{
		divider = 1;
		j = 1;
		while (j < i)
		{
			divider *= 10;
			j++;
		}
		_putchar('0' + num / divider);
		num = num - ((num / divider) * divider);
	}
	_putchar('\n');
	return (0);
}
