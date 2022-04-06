#include "main.h"

/**
  * strtow - split a string into words
  * @str: the string to split
  * Return: a pointer to the string's pointer
  */
char **strtow(char *str)
{
	char **word;
	int i = 0;
	int t = 0;
	int tmp = 0;
	int num = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (*str == ' ')
		strtow(str - 1);
	while (*(str + i))
	{
		if ((*(str + i) == ' ' && *(str + i + 1) != ' ')
			|| *(str + i + 1) == '\n')
			num++;
		i++;
	}
	word = malloc(sizeof(char *) * num);
	num = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) != ' ')
			t++;
		if ((*(str + i) != ' ' && *(str + i + 1) == ' ')
			|| *(str + i + 1) == '\n')
		{
			*(word + num) = malloc(sizeof(char) * (t + 1));
			num++;
			tmp = i;
			while (t)
			{
				word[num][t] = *(str + tmp);
				tmp--;
				t--;
			}
		}
		i++;
	}
	return (word);
}
