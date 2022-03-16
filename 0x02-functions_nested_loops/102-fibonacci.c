#include <stdio.h>

/**
 * main - print the 50 first fibonacci number
 * Return: always return 0
 */
int main(void)
{
	int prev_fib;
	int curr_fib;
	int i;

	i = 1;
	curr_fib = 1;
	while (i < 51)
	{
		i++;
		printf("%d", curr_fib);
		if (i == 50)
			continue;
		printf(", ");
		prev_fib = curr_fib;
		curr_fib += prev_fib;
	}
	printf("\n");
	return (0);
}
