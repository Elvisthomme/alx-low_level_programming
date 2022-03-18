#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: always return 0
 */
int main(void)
{
	int i;
	char Fizz[] = "Fizz";
	char Buzz[] = "Buzz";
	char FizzBuzz[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", FizzBuzz);
		else if (i % 3 == 0)
			printf("%s", Fizz);
		else if (i % 5 == 0)
			printf("%s", Buzz);
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
