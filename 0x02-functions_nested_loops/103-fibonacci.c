#include <stdio.h>

/**
 * main - print the sum of the even valued term of fibonacci
 * Return: always return 0
 */
int main(void)
{
	long int prev_prev_fib;
	long int prev_fib = 1;
	long int curr_fib = 1;
	int sum_even_fib_term;

	curr_fib = 1;
	while (curr_fib < 4000000)
	{
		if (curr_fib % 2 == 0)
			sum_even_fib_term += curr_fib;
		prev_prev_fib = prev_fib;
		prev_fib = curr_fib;
		curr_fib = prev_prev_fib + prev_fib;
	}
	printf("%d\n", sum_even_fib_term);
	return (0);
}
