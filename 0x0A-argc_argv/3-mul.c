#include "main.h"
/**
  * main - print the product of two numbers
  * @argc: the number of arguments
  * @argv: the argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
