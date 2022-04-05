#include "main.h"

/**
  * _strdup - copy a string
  * @str: the string to copy
  * Return: a pointer to the new string
  */
char *_strdup(char *str)
{
	int i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	new_str = malloc(sizeof(char) * i);
	if (new_str == NULL)
		return NULL;
	while (i >= -1)
	{
		*(new_str + i) = *(str + i);
		i--;
	}
	return (new_str);
}
