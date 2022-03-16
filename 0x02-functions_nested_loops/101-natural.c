#include <stdio.h>

/**
 * main - compute and print the sum of the multiple of 3 and 5
 * Return: always return 0
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	i = 3;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
