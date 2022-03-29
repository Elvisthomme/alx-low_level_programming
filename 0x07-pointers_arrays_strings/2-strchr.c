#include "main.h"

/**
  * _strchr - locate a character in a string
  * @s: the string
  * @c: the character
  * Return: a pointer to the first occurence of c in s or NULL
  */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	if (!c)
		return (s);
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
