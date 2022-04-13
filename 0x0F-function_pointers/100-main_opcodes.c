#include <stdio.h>
#include <stdlib.h>
/**
  * main - print opcode of main
  * @ac: the number of argument
  * @av: the argument vector
  * Return: 0
  */
int main(int ac, char *av[])
{
	int n, i, number;
	int (*m)(int, char**);

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(av[1]);
	if (ac < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (n == 0)
	{
		printf("\n");
		return (0);
	}
	m = main;

	for (i = 0; i < n; i++)
	{
		number = atoi((char *)(*(m + i)));
		printf("%x", number);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
