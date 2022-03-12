#include <stdio.h>

/**
 * main - print the alphabet in reverse in lowercase
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 97 + 25; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
