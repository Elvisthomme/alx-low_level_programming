#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: always return 0
 */
int main(void)
{
	printf("%ld", rand() + time(NULL));
	return (0);
}
