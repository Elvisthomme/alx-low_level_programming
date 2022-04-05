#include "main.h"

/**
  * str_concat - concatenate two string
  * @s1: the first string
  * @s2: the second string
  * Return: a pointer to the concatenate string or NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i = 0;
	int size_s1 = 0;
	int size_s2 = 0;

	while (*(s1 + size_s1))
		size_s1++;
	while (*(s2 + size_s2))
		size_s2++;
	con = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (con == NULL)
		return (NULL);
	if (size_s1 > 0 && s1 != NULL)
		for (; i < size_s1; i++)
			*(con + i) = *(s1 + i);
	if (size_s2 > 0 && s2 != NULL)
		for (; i < size_s1 + size_s2; i++)
			*(con + i) = *(s2 + i - (size_s1));
	*(con + i) = '\0';
	return (con);


}
