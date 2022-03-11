#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
		if (i != (int) 'q' && i != (int) 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
