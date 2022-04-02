#include "main.h"

/**
 * main - print the number of arguments
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{

	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
