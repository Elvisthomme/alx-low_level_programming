#include <stdio.h>

/**
 * main - print the 50 first fibonacci number
 * Return: always return 0
 */
int main(void)
{
	long long int prev_prev_fib;
	long long int prev_fib = 1;
	long long int curr_fib = 1;
	int i;

	i = 1;
	while (i < 51)
	{
		i++;
		printf("%ld", curr_fib);
		if (i == 50)
			continue;
		printf(", ");
		prev_prev_fib = prev_fib;
		prev_fib = curr_fib;
		curr_fib = prev_prev_fib + prev_fib;
	}
	printf("\n");
	return (0);
}
