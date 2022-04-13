#include "3-cal.h"

/**
 * main - perform simple operations
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] != "+" && argv[2] != "-"
	&& argv[2] != "*" && argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2] == "/" || argv[2] == "%") && atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}

	result = (*get_op_func(argv[3]))(atoi(argv[2], argv[4]));
	printf("%d\n", result);
	return (0);
}
