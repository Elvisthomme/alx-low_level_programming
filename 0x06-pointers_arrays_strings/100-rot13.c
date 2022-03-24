#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @str: the string to encode
 * Return: a pointer to the encoding string
 */
char *rot13(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) = ((*(str + i) - 65 + 13) % 26) + 65;
		else
			while (*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				*(str + i) = ((*(str + i) - 97 + 13) % 26) + 97;
				break;
			}
		i++;
	}
	return (str);
}
