#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
		putchar(i);
	for (i = 65; i < 65 + 26; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
