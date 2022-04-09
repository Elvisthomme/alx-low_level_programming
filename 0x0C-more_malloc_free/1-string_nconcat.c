#include "main.h"

/**
  * string_nconcat - concatenate s1 whith n byte of S2
  * @s1: the first string
  * @s2: the second string
  * @n: the number of byte to concatenate
  * Return: a pointer to the concatenate string or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i = 0;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;

	if (s1 != NULL)
		while (*(s1 + size_s1))
			size_s1++;
	if (s2 != NULL)
		while (*(s2 + size_s2))
			size_s2++;
	if (size_s2 > n)
		size_s2 = n;
	con = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (con == NULL)
		return (NULL);
	if (size_s1 > 0)
		for (; i < size_s1; i++)
			*(con + i) = *(s1 + i);
	if (size_s2 > 0)
		for (; i < size_s1 + size_s2; i++)
			*(con + i) = *(s2 + i - (size_s1));
	*(con + i) = '\0';
	return (con);


}
