#include "main.h"

/**
 * main - add positive numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	int num;
	int i;
	int j;

	if (argc < 2)
	{
		puts("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (*(argv[i] + j))
			{
				if ('0' > *(argv[i] + j)
				|| '9' < *(argv[i] + j))
				{
					puts("Error");
					return (1);
				}
				j++;
			}

			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
