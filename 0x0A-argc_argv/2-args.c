#include "main.h"

/**
 * main - print the name of the program
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;

	while (j < argc)
	{
		i = 0;
		while (*(argv[j] + i))
		{
			_putchar(*(argv[j] + i));
			i++;
		}
		_putchar('\n');
		j++;
	}
	return (0);
}
