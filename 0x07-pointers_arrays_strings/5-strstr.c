#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string were we must search
  * @needle: the substring to search
  * Return: a pointer to the beginning of the located substring, or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int find_index = 0;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *needle)
		{
			find_index = i;
			i++;
			j++;
			while (*(haystack + i) == *(needle + j))
			{
				i++;
				j++;
			}
			if (!*(needle + j))
			{
				return ((haystack + find_index));
			}
			j = 0;

		}
		i++;
	}
	return (NULL);
}
