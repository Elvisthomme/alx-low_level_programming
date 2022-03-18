#include <stdio.h>

/**
 * main - print the largest prime factor of 612852475143
 * Return: always return 0
 */
int main(void)
{
	long int number = 612852475143;
	long int i = 3;
	long int largest_prime = 1;

	while (number != 1)
	{
		if (number % i != 0)
		{
			number /= i;
			if (i > largest_prime)
				largest_prime = i;
		}
		else
			i++;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
