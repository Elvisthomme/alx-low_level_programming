#include "main.h"

/**
 * main - print the minimum number of coins to make change for an amount
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int n;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int amount;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
		puts("0");
	else
	{
		for (i = 0; i < 5; i++)
		{
			n = amount / coins[i];
			amount = amount - n * coins[i];
			num_coins += n;
		}
		printf("%d\n", num_coins);
	}

	return (0);
}
