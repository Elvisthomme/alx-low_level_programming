#include "main.h"

/**
  * _strpbrk - locate the first occurence a character of @accept in @s
  * @s: the string
  * @accept: the accepted characters
  * Return: a pointer to the first occurence of a caracter of accept in s or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(accept + i))
	{
		while (*(s + j))
		{
			if (*(s + j) == *(accept + i))
				return (s + j);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
