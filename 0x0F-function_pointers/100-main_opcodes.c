#include <stdio.h>
#include <stdlib.h>
/**
  * print_2_last_hexa - print the to last hexa of a number
  * @num: the number to print
  */
void print_2_last_hexa(unsigned int num)
{
	int a = 0, b = 0;

	while (num)
	{
		b = a;
		a = num - ((num / 16) * 16);
		num /= 16;
	}
	printf("%x", a);
	printf("%x", b);
}

/**
  * main - print opcode of main
  * @ac: the number of argument
  * @av: the argument vector
  * Return: 0
  */
int main(int ac, char *av[])
{
	int n, i, l;
	int *code, number;
	char *c;
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
		code = (int *) *(m + i);
		print_2_last_hexa(*code);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
