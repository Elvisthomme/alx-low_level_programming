#include "main.h"

/**
 * main - print the name of the program
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	UNUSED(argc);
	while (*(argv[0] + i))
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
