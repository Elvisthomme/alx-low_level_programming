#include "main.h"

/**
 * main - print the name of the program
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0;

	while (j < argc)
	{
		puts(argv[j]);
		j++;
	}
	return (0);
}
