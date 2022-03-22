#include <stdio.h>

/**
 * main - find and print 98 fibonacci first number
 * Return: always return 0
 */
int main(void)
{
	long int prev_prev_fib;
	long int prev_fib = 1;
	long int curr_fib = 1;
	long int count = 97;

	curr_fib = 1;
	while (count)
	{
		printf("%ld", curr_fib);
		count--;
		if (count == 0)
			continue;
		printf(" ,");
		prev_prev_fib = prev_fib;
		prev_fib = curr_fib;
		curr_fib = prev_prev_fib + prev_fib;
	}
	printf("\n");
	return (0);
}
