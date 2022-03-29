#include "main.h"

/**
  * _strpbrk - locate the first occurence a character of @accept in @s
  * @s: the string
  * @accept: the accepted characters
  * Return: a pointer to the first occurence of a char of accept in s or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
